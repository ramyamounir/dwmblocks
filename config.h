static const Block blocks[] = {
    /*Icon*/        /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",            "dwmb-separator",         500,  0},
    {"",            "dwmb-gpu",               1,    0},
    {"",            "dwmb-gpu-memory",        1,    0},
    {"",            "dwmb-separator",         500,  0},
    {" ",          "dwmb-cpu",               1,    0},
    {"󰑹 ",          "dwmb-ram",               1,    0},
    {"",            "dwmb-separator",         500,  0},
    {"",            "dwmb-global-protect",    5,    0},
    {"",            "dwmb-nord-vpn",          5,    0},
    {"",            "dwmb-internet",          5,    0},
    {"",            "dwmb-separator",         500,  0},
    {"",            "dwmb-bluetooth",         5,    0},
    {"",            "dwmb-battery",           5,    0},
    {" ",          "dwmb-date",              15,   0},
    {"",            "dwmb-time",              1,    0}
};

static char *delim = " ";

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/;
// sudo make clean install && { killall -q dwmblocks;setsid dwmblocks & }
