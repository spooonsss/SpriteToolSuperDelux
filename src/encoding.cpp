#include "encoding.h"

namespace pixi {
void console_init() {
#ifdef _WIN32
    SetConsoleCP(GetACP());
#else
    return;
#endif
}

} // namespace pixi