/*
    REFRENCES
    ---------

    1. https://mesonbuild.com/Reference-tables.html
    2. https://github.com/cpredef/predef
    3. https://www.boost.org/doc/libs/1_80_0/libs/predef/doc/index.html
*/

#pragma once

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_WIN32) || defined(__CYGWIN__)
    #define PLATFORM_API __declspec(dllexport)
#else
    #define PLATFORM_API
#endif

static int cpu(lua_State *L)
{
#if defined(__arm64) || defined(_M_ARM64) || defined(__aarch64__) || defined(__AARCH64EL__)
    lua_pushliteral(L, "aarch64");
#elif defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
    lua_pushliteral(L, "alpha");
#elif defined(__arc__)
    lua_pushliteral(L, "arc");
#elif defined(__ARM_ARCH_7A__)
    lua_pushliteral(L, "arm7a");
#elif defined(__ARM_ARCH_7R__)
    lua_pushliteral(L, "arm7r");
#elif defined(__ARM_ARCH_7M__)
    lua_pushliteral(L, "arm7m");
#elif defined(__ARM_ARCH_7__)
    lua_pushliteral(L, "arm7");
#elif defined(__ARM_ARCH_6K__)
    lua_pushliteral(L, "arm6k");
#elif defined(__ARM_ARCH_6Z__)
    lua_pushliteral(L, "arm6z");
#elif defined(__ARM_ARCH_6KZ__)
    lua_pushliteral(L, "arm6kz");
#elif defined(__ARM_ARCH_6T2__)
    lua_pushliteral(L, "arm6t2");
#elif defined(__ARM_ARCH_5TE__)
    lua_pushliteral(L, "arm5te");
#elif defined(__ARM_ARCH_5TEJ__)
    lua_pushliteral(L, "arm5tej");
#elif defined(__ARM_ARCH_4T__)
    lua_pushliteral(L, "arm4t");
#elif defined(__ARM_ARCH_4__)
    lua_pushliteral(L, "arm4");
#elif defined(__ARM_ARCH) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || defined(_M_ARM) || defined(__arm__) || defined(__thumb__)
    lua_pushliteral(L, "arm");
#elif defined(__AVRASM_VERSION__)
    lua_pushliteral(L, "avr");
#elif defined(__TMS320C2000__)
    lua_pushliteral(L, "c2000");
#elif defined(__csky__)
    lua_pushliteral(L, "csky");
#elif defined(__dsPIC33F__ )
    lua_pushliteral(L, "dspic33f");
#elif defined(__dsPIC30F__ )
    lua_pushliteral(L, "dspic30f");
#elif defined(__e2k__) || defined(__elbrus__) || defined(__ELBRUS__)
    lua_pushliteral(L, "e2k");
#elif defined(__ft32__)
    lua_pushliteral(L, "ft32");
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
    lua_pushliteral(L, "ia64");
#elif defined(__loongarch__)
    lua_pushliteral(L, "loongarch64");
#elif defined(__m68k__)
    lua_pushliteral(L, "m68k");
#elif defined(__MICROBLAZE__ )
    lua_pushliteral(L, "microblaze");
#elif defined(__mips64__) || defined(__mips64) || defined(__MIPS64__) || defined(_MIPS_64)
    lua_pushliteral(L, "mips64");
#elif defined(__mips__) || defined(__mips) || defined(__MIPS__)
    lua_pushliteral(L, "mips");
#elif defined(__MSP430__)
    lua_pushliteral(L, "msp430");
#elif defined(__hppa__) || defined(__hppa) || defined(__HPPA__)
    lua_pushliteral(L, "parisc");
#elif defined(__PIC24F__)
    lua_pushliteral(L, "pic24f");
#elif defined(__PIC24H__)
    lua_pushliteral(L, "pic24h");
#elif defined(__powerpc64__) || defined(__ppc64__) || defined(__PPC64__) || defined(_ARCH_PPC64)
    lua_pushliteral(L, "ppc64");
#elif defined(__powerpc) || defined(__powerpc__) || defined(__POWERPC__) || defined(__ppc__) || defined(__PPC__) || defined(_M_PPC) || defined(_ARCH_PPC) || defined(__PPCGECKO__) || defined(__PPCBROADWAY__) || defined(_XENON) || defined(__ppc)
    lua_pushliteral(L, "ppc");
#elif defined(__s390__)
    lua_pushliteral(L, "s390");
#elif defined(__s390x__)
    lua_pushliteral(L, "s390x");
#elif defined(__SH4__)
    lua_pushliteral(L, "sh4");
#elif defined(__riscv64)
    lua_pushliteral(L, "riscv64");
#elif defined(__riscv)
    lua_pushliteral(L, "riscv32");
#elif defined(__i686__)
    lua_pushliteral(L, "i686");
#elif defined(__i586__)
    lua_pushliteral(L, "i586");
#elif defined(__i486__)
    lua_pushliteral(L, "i486");
#elif defined(i386) || defined(__i386__) || defined(__i386)
    lua_pushliteral(L, "i386");
#elif defined(_M_IX86) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__)
    lua_pushliteral(L, "x86");
#elif defined(__x86_64) || defined(__x86_64__) || defined(__amd64__) || defined(__amd64) || defined(_M_X64)
    lua_pushliteral(L, "amd64");
#elif defined(__sparc64__) || defined(__sparc64)
    lua_pushliteral(L, "sprac64");
#elif defined(__sparc__) || defined(__sparc)
    lua_pushliteral(L, "sprac");
#elif defined(__RL78__)
    lua_pushliteral(L, "rl78");
#elif defined(__CCRX__)
    lua_pushliteral(L, "rx");
#elif defined(__wasm64__)
    lua_pushliteral(L, "wasm64");
#elif defined(__wasm32__) || defined(__wasm__) || defined(__EMSCRIPTEN__)
    lua_pushliteral(L, "wasm32");
#else
    lua_pushliteral(L, "unknown");
#endif
    return 1;
}

static int cpu_family(lua_State *L)
{
#if defined(__arm64) || defined(_M_ARM64) || defined(__aarch64__) || defined(__AARCH64EL__)
    lua_pushliteral(L, "aarch64");
#elif defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
    lua_pushliteral(L, "alpha");
#elif defined(__arc__)
    lua_pushliteral(L, "arc");
#elif defined(__ARM_ARCH) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || defined(_M_ARM) || defined(__arm__) || defined(__thumb__) || defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6Z__) || defined(__ARM_ARCH_6KZ__) || defined(__ARM_ARCH_6T2__) || defined(__ARM_ARCH_5TE__) || defined(__ARM_ARCH_5TEJ__) || defined(__ARM_ARCH_4T__) || defined(__ARM_ARCH_4__)
    lua_pushliteral(L, "arm");
#elif defined(__AVRASM_VERSION__)
    lua_pushliteral(L, "avr");
#elif defined(__TMS320C2000__)
    lua_pushliteral(L, "c2000");
#elif defined(__csky__)
    lua_pushliteral(L, "csky");
#elif defined(__dsPIC30F__ ) || defined(__dsPIC33F__)
    lua_pushliteral(L, "dspic");
#elif defined(__e2k__) || defined(__elbrus__) || defined(__ELBRUS__)
    lua_pushliteral(L, "e2k");
#elif defined(__ft32__)
    lua_pushliteral(L, "ft32");
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
    lua_pushliteral(L, "ia64");
#elif defined(__loongarch__)
    lua_pushliteral(L, "loongarch64");
#elif defined(__m68k__)
    lua_pushliteral(L, "m68k");
#elif defined(__MICROBLAZE__ )
    lua_pushliteral(L, "microblaze");
#elif defined(__mips64__) || defined(__mips64) || defined(__MIPS64__) || defined(_MIPS_64)
    lua_pushliteral(L, "mips64");
#elif defined(__mips__) || defined(__mips) || defined(__MIPS__)
    lua_pushliteral(L, "mips");
#elif defined(__MSP430__)
    lua_pushliteral(L, "msp430");
#elif defined(__hppa__) || defined(__hppa) || defined(__HPPA__)
    lua_pushliteral(L, "parisc");
#elif defined(__PIC24F__) || defined(__PIC24H__)
    lua_pushliteral(L, "pic24");
#elif defined(__powerpc64__) || defined(__ppc64__) || defined(__PPC64__) || defined(_ARCH_PPC64)
    lua_pushliteral(L, "ppc64");
#elif defined(__powerpc) || defined(__powerpc__) || defined(__POWERPC__) || defined(__ppc__) || defined(__PPC__) || defined(_M_PPC) || defined(_ARCH_PPC) || defined(__PPCGECKO__) || defined(__PPCBROADWAY__) || defined(_XENON) || defined(__ppc)
    lua_pushliteral(L, "ppc");
#elif defined(__s390__)
    lua_pushliteral(L, "s390");
#elif defined(__s390x__)
    lua_pushliteral(L, "s390x");
#elif defined(__SH4__)
    lua_pushliteral(L, "sh4");
#elif defined(__riscv64)
    lua_pushliteral(L, "riscv64");
#elif defined(__riscv)
    lua_pushliteral(L, "riscv32");
#elif defined(i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) || defined(__i386) || defined(_M_IX86) || defined(_X86_) || defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__)
    lua_pushliteral(L, "x86");
#elif defined(__x86_64) || defined(__x86_64__) || defined(__amd64__) || defined(__amd64) || defined(_M_X64)
    lua_pushliteral(L, "x86_64");
#elif defined(__sparc64__) || defined(__sparc64)
    lua_pushliteral(L, "sprac64");
#elif defined(__sparc__) || defined(__sparc)
    lua_pushliteral(L, "sprac");
#elif defined(__RL78__)
    lua_pushliteral(L, "rl78");
#elif defined(__CCRX__)
    lua_pushliteral(L, "rx");
#elif defined(__wasm64__)
    lua_pushliteral(L, "wasm64");
#elif defined(__wasm32__) || defined(__wasm__) || defined(__EMSCRIPTEN__)
    lua_pushliteral(L, "wasm32");
#else
    lua_pushliteral(L, "unknown");
#endif
    return 1;
}

static int compiler(lua_State *L)
{
#if defined(__CC_ARM)
    #ifdef __clang__
        lua_pushliteral(L, "armclang");
    #else
        lua_pushliteral(L, "arm");
    #endif
#elif defined(__COMPCERT__)
    lua_pushliteral(L, "ccomp");
#elif defined(__RENESAS__)
    lua_pushliteral(L, "ccrx");
#elif defined(__EMSCRIPTEN__)
    lua_pushliteral(L, "emscripten");
#elif defined(__MINGW32__) || defined(__MINGW64__) || defined(__GNUC__)
    lua_pushliteral(L, "gcc");
#elif defined(__INTEL_COMPILER) || defined(__ICL) || defined(__ICC) || defined(__ECC)
    #if defined(__llvm__) && defined(_MSC_VER)
        lua_pushliteral(L, "intel-llvm-cl");
    #elif defined(__llvm__)
        lua_pushliteral(L, "intel-llvm");
    #elif defined(_MSC_VER)
        lua_pushliteral(L, "intel-cl");
    #else
        lua_pushliteral(L, "intel");
    #endif
#elif defined(__LCC__)
    lua_pushliteral(L, "lcc");
#elif defined(__TI_COMPILER_VERSION__)
    #ifdef __TMS320C2000__
        lua_pushliteral(L, "c2000");
    #else
        lua_pushliteral(L, "ti");
    #endif
#elif defined(__clang__)
    #ifdef _MSC_VER
        lua_pushliteral(L, "clang-cl");
    #else
        lua_pushliteral(L, "clang");
    #endif
#elif defined(_MSC_VER)
    lua_pushliteral(L, "msvc");
#else
    lua_pushliteral(L, "unknown");
#endif
    return 1;
}

static int endian(lua_State *L)
{
    unsigned int i = 1;
    char *c = (char*)&i;

    if (*c) {
        lua_pushliteral(L, "little");
    } else {
        lua_pushliteral(L, "big");
    }

    return 1;
}

static int version(lua_State *L)
{  
#if defined(LUA_VERSION_MAJOR) && defined(LUA_VERSION_MINOR) && defined(LUA_VERSION_RELEASE)
    lua_pushstring(L, LUA_VERSION_MAJOR "." LUA_VERSION_MINOR "." LUA_VERSION_RELEASE);
#elif LUA_VERSION_NUM == 504
    lua_pushliteral(L, "5.4.0");
#elif LUA_VERSION_NUM == 503
    lua_pushliteral(L, "5.3.0");
#elif LUA_VERSION_NUM == 502
    lua_pushliteral(L, "5.2.0");
#elif LUA_VERSION_NUM == 501
    lua_pushliteral(L, "5.1.0");
#else
    lua_pushliteral(L, LUA_VERSION);
#endif
    return 1;
}

static int platform(lua_State *L)
{
#if defined(__ANDROID__)
    lua_pushliteral(L, "android");
#elif defined(TARGET_IPHONE_SIMULATOR) || defined(TARGET_IPHONE_SIMULATOR)
    lua_pushliteral(L, "ios-simulator");
#elif defined(__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__)
    lua_pushliteral(L, "ios");
#elif defined(__APPLE__) || defined(__MACH__)
    lua_pushliteral(L, "macos");
#elif defined(__EMSCRIPTEN__) || defined(__wasm__) || defined(__wasm32__) || defined(__wasm64__)
    lua_pushliteral(L, "wasm");
#elif defined(WINAPI_FAMILY) && WINAPI_FAMILY == WINAPI_FAMILY_DESKTOP_APP
    lua_pushliteral(L, "windows-pc");
#elif defined(WINAPI_FAMILY) && WINAPI_FAMILY == WINAPI_FAMILY_SERVER
    lua_pushliteral(L, "windows-server");
#elif defined(WINAPI_FAMILY) && WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
    lua_pushliteral(L, "windows-phone");
#elif defined(WINAPI_FAMILY) && WINAPI_FAMILY == WINAPI_FAMILY_PC_APP
    lua_pushliteral(L, "windows-store");
#elif defined(WINAPI_FAMILY) && WINAPI_FAMILY == WINAPI_FAMILY_SYSTEM
    lua_pushliteral(L, "windows-uwp");
#elif defined(_WIN32) || defined(__CYGWIN__)
    lua_pushliteral(L, "windows");
#else
    lua_pushliteral(L, "unknown");
#endif
    return 1;
}

static int operating_system(lua_State *L)
{
#if defined(__ANDROID__)
    lua_pushliteral(L, "android");
#elif defined(__APPLE__) || defined(__MACH__)
    lua_pushliteral(L, "darwin");
#elif defined(__CYGWIN__)
    lua_pushliteral(L, "cygwin");
#elif defined(__DragonFly__)
    lua_pushliteral(L, "dragonfly");
#elif defined(__EMSCRIPTEN__)
    lua_pushliteral(L, "emscripten");
#elif defined(__FreeBSD__)
    lua_pushliteral(L, "freebsd");
#elif defined(__HAIKU__)
    lua_pushliteral(L, "haiku");
#elif defined(__NetBSD__)
    lua_pushliteral(L, "netbsd");
#elif defined(__OpenBSD__)
    lua_pushliteral(L, "openbsd");
#elif defined(_WIN32)
    lua_pushliteral(L, "windows");
#elif defined(sun) || defined(__sun)
    lua_pushliteral(L, "sunos");
#elif defined(linux) || defined(__linux) || defined(__linux__) || defined(__gnu_linux__)
    lua_pushliteral(L, "linux");
#elif defined(__GNU__)
    lua_pushliteral(L, "gnu");
#else
    lua_pushliteral(L, "unknown");
#endif
    return 1;
}

static const struct luaL_Reg funcs[] = {
    {"compiler", compiler},
    {"cpu", cpu},
    {"cpu_family", cpu_family},
    {"endian", endian},
    {"lua_version", version},
    {"platform", platform},
    {"system", operating_system},
    {NULL, NULL}
};

PLATFORM_API int luaopen_platform(lua_State *L)
{
    #if LUA_VERSION_NUM == 504 
        luaL_newlib(L, funcs);
    #else
        luaL_register(L, "platform", funcs);
    #endif

    return 1;
}

#ifdef __cplusplus
}
#endif
