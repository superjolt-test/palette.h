#ifndef PALETTE_H
#define PALETTE_H

// === RESET ===
#define RESET           "\x1b[0m"
#define RESET_FG        "\x1b[39m"
#define RESET_BG        "\x1b[49m"
#define RESET_ALL       "\x1b[0m"

// === STYLE MODIFIERS ===
#define BOLD            "\x1b[1m"
#define DIM             "\x1b[2m"
#define ITALIC          "\x1b[3m"
#define UNDERLINE       "\x1b[4m"
#define INVERSE         "\x1b[7m"
#define HIDDEN          "\x1b[8m"
#define STRIKETHROUGH   "\x1b[9m"

// === FOREGROUND COLORS ===
#define FG_BLACK        "\x1b[30m"
#define FG_RED          "\x1b[31m"
#define FG_GREEN        "\x1b[32m"
#define FG_YELLOW       "\x1b[33m"
#define FG_BLUE         "\x1b[34m"
#define FG_MAGENTA      "\x1b[35m"
#define FG_CYAN         "\x1b[36m"
#define FG_WHITE        "\x1b[37m"

#define FG_BRIGHT_BLACK     "\x1b[90m"
#define FG_BRIGHT_RED       "\x1b[91m"
#define FG_BRIGHT_GREEN     "\x1b[92m"
#define FG_BRIGHT_YELLOW    "\x1b[93m"
#define FG_BRIGHT_BLUE      "\x1b[94m"
#define FG_BRIGHT_MAGENTA   "\x1b[95m"
#define FG_BRIGHT_CYAN      "\x1b[96m"
#define FG_BRIGHT_WHITE     "\x1b[97m"

// === BACKGROUND COLORS ===
#define BG_BLACK        "\x1b[40m"
#define BG_RED          "\x1b[41m"
#define BG_GREEN        "\x1b[42m"
#define BG_YELLOW       "\x1b[43m"
#define BG_BLUE         "\x1b[44m"
#define BG_MAGENTA      "\x1b[45m"
#define BG_CYAN         "\x1b[46m"
#define BG_WHITE        "\x1b[47m"

#define BG_BRIGHT_BLACK     "\x1b[100m"
#define BG_BRIGHT_RED       "\x1b[101m"
#define BG_BRIGHT_GREEN     "\x1b[102m"
#define BG_BRIGHT_YELLOW    "\x1b[103m"
#define BG_BRIGHT_BLUE      "\x1b[104m"
#define BG_BRIGHT_MAGENTA   "\x1b[105m"
#define BG_BRIGHT_CYAN      "\x1b[106m"
#define BG_BRIGHT_WHITE     "\x1b[107m"

// === COLOR PRESETS ===

// Default clean white on blue
#define DEFAULT         BOLD FG_BRIGHT_WHITE BG_BLUE

// Forest theme: bright green on black
#define FOREST          FG_BRIGHT_GREEN BG_BLACK

// Neon night: magenta + gray
#define NEON_NIGHT      BOLD FG_BRIGHT_MAGENTA BG_BRIGHT_BLACK

// Ice: bright cyan on gray
#define COOL_ICE        BOLD FG_BRIGHT_CYAN BG_BRIGHT_BLACK

// Warning: black on yellow
#define WARNING         BOLD FG_BLACK BG_BRIGHT_YELLOW

// Fire: red-hot
#define FIRE            BOLD FG_BRIGHT_RED BG_BRIGHT_YELLOW

// Shadow: gray text on black, dim
#define SHADOW          DIM FG_BRIGHT_BLACK BG_BLACK

// Ocean: cyan + blue
#define OCEAN           BOLD FG_CYAN BG_BLUE

// Rose: magenta text on white
#define ROSE            BOLD FG_BRIGHT_MAGENTA BG_WHITE

// Alert: bright red on white, underline
#define ALERT           UNDERLINE FG_BRIGHT_RED BG_WHITE

// === 256-COLOR MODE ===
// FG_256(n): 0-255
#define FG_256(n)       "\x1b[38;5;" #n "m"
#define BG_256(n)       "\x1b[48;5;" #n "m"

// Helper macros (with stringification trick)
#define __STR(x)        #x
#define _STR(x)         __STR(x)
#define FG256(n)        "\x1b[38;5;" _STR(n) "m"
#define BG256(n)        "\x1b[48;5;" _STR(n) "m"

// === TRUE COLOR (24-bit RGB) ===
// Usage: FG_RGB(r,g,b), BG_RGB(r,g,b)
#define FG_RGB(r, g, b) "\x1b[38;2;" _STR(r) ";" _STR(g) ";" _STR(b) "m"
#define BG_RGB(r, g, b) "\x1b[48;2;" _STR(r) ";" _STR(g) ";" _STR(b) "m"


#endif // PALETTE_H
