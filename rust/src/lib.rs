//! Windissect-generated Rust FFI bindings for Windows.Security.Authentication.OnlineId.dll. Windows only.
#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod handles;
pub mod vtables;

pub use handles::*;

pub const EXPECTED_PDB_GUID: &str = "38591E741D6F85C1EB6A06203C5B3338";
pub const EXPECTED_PDB_AGE: u32 = 1;
pub const EXPECTED_PE_TIMESTAMP: u32 = 1025151482;

// --- internal-function resolver (ASLR-safe: live base + fixed RVA) ---
#[cfg(target_os = "windows")]
mod resolver {
    use core::sync::atomic::{AtomicUsize, Ordering};
    static BASE: AtomicUsize = AtomicUsize::new(0);
    #[link(name = "kernel32", kind = "raw-dylib")]
    unsafe extern "system" {
        fn GetModuleHandleW(name: *const u16) -> usize;
    }
    pub fn base() -> usize {
        let b = BASE.load(Ordering::Relaxed);
        if b != 0 {
            return b;
        }
        let name: [u16; 45] = [87, 105, 110, 100, 111, 119, 115, 46, 83, 101, 99, 117, 114, 105, 116, 121, 46, 65, 117, 116, 104, 101, 110, 116, 105, 99, 97, 116, 105, 111, 110, 46, 79, 110, 108, 105, 110, 101, 73, 100, 46, 100, 108, 108, 0];
        let h = unsafe { GetModuleHandleW(name.as_ptr()) };
        if h == 0 { return 0; }
        // IMAGE_DOS_HEADER.e_lfanew -> IMAGE_NT_HEADERS.FileHeader.TimeDateStamp.
        let pe_offset = unsafe { core::ptr::read_unaligned((h + 0x3c) as *const u32) } as usize;
        let live_timestamp = unsafe { core::ptr::read_unaligned((h + pe_offset + 8) as *const u32) };
        if live_timestamp != 1025151482 { return 0; }
        BASE.store(h, Ordering::Relaxed);
        h
    }
}
#[cfg(not(target_os = "windows"))]
mod resolver {
    pub fn base() -> usize { 0 }
}

/// Absolute address of an internal function from its RVA. Requires the target
/// module to be loaded in the current process.
#[inline]
pub fn resolve(rva: usize) -> *const () {
    let base = resolver::base();
    if base == 0 { return ::core::ptr::null(); }
    let pe_offset = unsafe { ::core::ptr::read_unaligned((base + 0x3c) as *const u32) } as usize;
    let image_size = unsafe { ::core::ptr::read_unaligned((base + pe_offset + 80) as *const u32) } as usize;
    if rva >= image_size { return ::core::ptr::null(); }
    base.checked_add(rva).map_or(::core::ptr::null(), |address| address as *const ())
}
