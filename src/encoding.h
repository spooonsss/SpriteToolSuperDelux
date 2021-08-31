#ifndef ENCODING_H
#define ENCODING_H
#include <string>

#ifdef _WIN32
#include <windows.h>
#endif

#define PIXI_USE_UTF8
/* // transition // */
namespace pixi {
void console_init();
#ifdef _WIN32
#ifdef PIXI_USE_UTF8
constexpr auto PIXI_CP = CP_UTF8;
using pchar = char8_t;
using byte = unsigned char;
#else
constexpr auto PIXI_CP = CP_ACP;
using pchar = wchar_t;
using byte = unsigned char;
#endif
#else
using pchar = char;
using pbyte = unsigned char;
#endif

using string = std::basic_string<pchar>;
} // namespace pixi

#endif