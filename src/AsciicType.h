#ifndef ASCIICTYPE_H 
#define ASCIICTYPE_H 

#define COMPILER(MSVC) false 

namespace TOOL {

    inline bool isASCII(char c) { return !(c & ~0x7F); }
    inline bool isASCII(unsigned short c) { return !(c & ~0x7F); }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCII(wchar_t c) { return !(c & ~0x7F); }
#endif
    inline bool isASCII(int c) { return !(c & ~0x7F); }
    inline bool isASCII(unsigned c) { return !(c & ~0x7F); }

    inline bool isASCIIAlpha(char c) { return (c | 0x20) >= 'a' && (c | 0x20) <= 'z'; }
    inline bool isASCIIAlpha(unsigned short c) { return (c | 0x20) >= 'a' && (c | 0x20) <= 'z'; }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIIAlpha(wchar_t c) { return (c | 0x20) >= 'a' && (c | 0x20) <= 'z'; }
#endif
    inline bool isASCIIAlpha(int c) { return (c | 0x20) >= 'a' && (c | 0x20) <= 'z'; }
    inline bool isASCIIAlpha(unsigned c) { return (c | 0x20) >= 'a' && (c | 0x20) <= 'z'; }

    inline bool isASCIIAlphanumeric(char c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'z'); }
    inline bool isASCIIAlphanumeric(unsigned short c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'z'); }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIIAlphanumeric(wchar_t c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'z'); }
#endif
    inline bool isASCIIAlphanumeric(int c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'z'); }
    inline bool isASCIIAlphanumeric(unsigned c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'z'); }

    inline bool isASCIIDigit(char c) { return (c >= '0') & (c <= '9'); }
    inline bool isASCIIDigit(unsigned short c) { return (c >= '0') & (c <= '9'); }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIIDigit(wchar_t c) { return (c >= '0') & (c <= '9'); }
#endif
    inline bool isASCIIDigit(int c) { return (c >= '0') & (c <= '9'); }
    inline bool isASCIIDigit(unsigned c) { return (c >= '0') & (c <= '9'); }

    inline bool isASCIIHexDigit(char c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'f'); }
    inline bool isASCIIHexDigit(unsigned short c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'f'); }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIIHexDigit(wchar_t c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'f'); }
#endif
    inline bool isASCIIHexDigit(int c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'f'); }
    inline bool isASCIIHexDigit(unsigned c) { return (c >= '0' && c <= '9') || ((c | 0x20) >= 'a' && (c | 0x20) <= 'f'); }

    inline bool isASCIIOctalDigit(char c) { return (c >= '0') & (c <= '7'); }
    inline bool isASCIIOctalDigit(unsigned short c) { return (c >= '0') & (c <= '7'); }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIIOctalDigit(wchar_t c) { return (c >= '0') & (c <= '7'); }
#endif
    inline bool isASCIIOctalDigit(int c) { return (c >= '0') & (c <= '7'); }
    inline bool isASCIIOctalDigit(unsigned c) { return (c >= '0') & (c <= '7'); }

    inline bool isASCIILower(char c) { return c >= 'a' && c <= 'z'; }
    inline bool isASCIILower(unsigned short c) { return c >= 'a' && c <= 'z'; }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIILower(wchar_t c) { return c >= 'a' && c <= 'z'; }
#endif
    inline bool isASCIILower(int c) { return c >= 'a' && c <= 'z'; }
    inline bool isASCIILower(unsigned c) { return c >= 'a' && c <= 'z'; }

    inline bool isASCIIUpper(char c) { return c >= 'A' && c <= 'Z'; }
    inline bool isASCIIUpper(unsigned short c) { return c >= 'A' && c <= 'Z'; }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIIUpper(wchar_t c) { return c >= 'A' && c <= 'Z'; }
#endif
    inline bool isASCIIUpper(int c) { return c >= 'A' && c <= 'Z'; }
    inline bool isASCIIUpper(unsigned c) { return c >= 'A' && c <= 'Z'; }

    /*
        Statistics from a run of Apple's page load test for callers of isASCIISpace:

            character          count
            ---------          -----
            non-spaces         689383
        20  space              294720
        0A  \n                 89059
        09  \t                 28320
        0D  \r                 0
        0C  \f                 0
        0B  \v                 0
    */
    inline bool isASCIISpace(char c) { return c <= ' ' && (c == ' ' || (c <= 0xD && c >= 0x9)); }
    inline bool isASCIISpace(unsigned short c) { return c <= ' ' && (c == ' ' || (c <= 0xD && c >= 0x9)); }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIISpace(wchar_t c) { return c <= ' ' && (c == ' ' || (c <= 0xD && c >= 0x9)); }
#endif
    inline bool isASCIISpace(int c) { return c <= ' ' && (c == ' ' || (c <= 0xD && c >= 0x9)); }
    inline bool isASCIISpace(unsigned c) { return c <= ' ' && (c == ' ' || (c <= 0xD && c >= 0x9)); }

    inline char toASCIILower(char c) { return c | ((c >= 'A' && c <= 'Z') << 5); }
    inline unsigned short toASCIILower(unsigned short c) { return c | ((c >= 'A' && c <= 'Z') << 5); }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline wchar_t toASCIILower(wchar_t c) { return c | ((c >= 'A' && c <= 'Z') << 5); }
#endif
    inline int toASCIILower(int c) { return c | ((c >= 'A' && c <= 'Z') << 5); }
    inline unsigned toASCIILower(unsigned c) { return c | ((c >= 'A' && c <= 'Z') << 5); }

    // FIXME: Why do these need static_cast?
    inline char toASCIIUpper(char c) { return static_cast<char>(c & ~((c >= 'a' && c <= 'z') << 5)); }
    inline unsigned short toASCIIUpper(unsigned short c) { return static_cast<unsigned short>(c & ~((c >= 'a' && c <= 'z') << 5)); }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline wchar_t toASCIIUpper(wchar_t c) { return static_cast<wchar_t>(c & ~((c >= 'a' && c <= 'z') << 5)); }
#endif
    inline int toASCIIUpper(int c) { return static_cast<int>(c & ~((c >= 'a' && c <= 'z') << 5)); }
    inline unsigned toASCIIUpper(unsigned c) { return static_cast<unsigned>(c & ~((c >= 'a' && c <= 'z') << 5)); }

    inline int toASCIIHexValue(char c) { ASSERT(isASCIIHexDigit(c)); return c < 'A' ? c - '0' : (c - 'A' + 10) & 0xF; }
    inline int toASCIIHexValue(unsigned short c) { ASSERT(isASCIIHexDigit(c)); return c < 'A' ? c - '0' : (c - 'A' + 10) & 0xF; }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline int toASCIIHexValue(wchar_t c) { ASSERT(isASCIIHexDigit(c)); return c < 'A' ? c - '0' : (c - 'A' + 10) & 0xF; }
#endif
    inline int toASCIIHexValue(int c) { ASSERT(isASCIIHexDigit(c)); return c < 'A' ? c - '0' : (c - 'A' + 10) & 0xF; }
    inline int toASCIIHexValue(unsigned c) { ASSERT(isASCIIHexDigit(c)); return c < 'A' ? c - '0' : (c - 'A' + 10) & 0xF; }

    inline bool isASCIIPrintable(char c) { return c >= ' ' && c <= '~'; }
    inline bool isASCIIPrintable(unsigned short c) { return c >= ' ' && c <= '~'; }
#if !COMPILER(MSVC) || defined(_NATIVE_WCHAR_T_DEFINED)
    inline bool isASCIIPrintable(wchar_t c) { return c >= ' ' && c <= '~'; }
#endif
    inline bool isASCIIPrintable(int c) { return c >= ' ' && c <= '~'; }
    inline bool isASCIIPrintable(unsigned c) { return c >= ' ' && c <= '~'; }
}

using TOOL::isASCII;
using TOOL::isASCIIAlpha;
using TOOL::isASCIIAlphanumeric;
using TOOL::isASCIIDigit;
using TOOL::isASCIIHexDigit;
using TOOL::isASCIILower;
using TOOL::isASCIIOctalDigit;
using TOOL::isASCIIPrintable;
using TOOL::isASCIISpace;
using TOOL::isASCIIUpper;
using TOOL::toASCIIHexValue;
using TOOL::toASCIILower;
using TOOL::toASCIIUpper;

#endif
