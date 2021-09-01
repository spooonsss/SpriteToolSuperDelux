#include "encoding.h"

namespace pixi {
void console_init() {
#ifdef _WIN32
    auto active_code_page = GetACP();
    SetConsoleCP(active_code_page);
    SetConsoleOutputCP(active_code_page);
#else
    return;
#endif
}

} // namespace pixi