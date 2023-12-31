#ifdef TUI
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <locale.h>
#include <unistd.h>
#include <assert.h>

#include <palerain.h>
#include <tui.h>

tui_screen_t tui_screen_enter_dfu(void) { return JAILBREAKING_SCREEN; }

#else
/* ISO C forbids an empty translation unit */
extern char** environ;
#endif
