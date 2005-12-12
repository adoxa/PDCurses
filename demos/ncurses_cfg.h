/* This file is only used with the ncurses test programs.
 *
 * Have ncurses-5.5 unpacked in your $(HOME) (you don't need to build 
 * it), or edit ncurses_testdir appropriately in the Makefile. Configure 
 * and build XCurses. (Sorry, other ports won't work yet.) Change to 
 * this directory, and:
 *
 * "make ncurses_tests" to start.
 * "make ncurses_clean" when you're done.
 *
 * Builds: bs gdc hanoi knight rain tclock worm ncurses view
 */

#include "../config.h"
#include <curses.h>

#define ExitProgram XCursesExit(),exit

#define HAVE_GETNSTR 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_PANEL_H 1
#define HAVE_LIBPANEL 1

/* Some functions we don't have */

#define getwin(a) ((WINDOW *)(NULL))
#define putwin(a,b) (ERR)

int tigetnum(const char *capname) { return -2; }
int wchgat(WINDOW *win, int n, attr_t attr, short color, const void *opts) { return ERR; }
