// #define PATH(name)			"/home/yigit/.local/bin/status-bar/"name
// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    // {"", "/home/nikan/.config/dwmblocks/scripts/network.sh",	2, 0},
    // {"", "spotify.sh", 1, 6},
    {"", "memory.sh",	10,  0},
    // {"", "crypto.py", 600, 5},
    {"", "network.sh",5,7},
    {"", "volume.sh", 0, 4},
    // {"", "weather.py", 3600, 3},
    {"", "packages.sh",	7200,  0},
    {"", "wifi.sh", 5, 2},
    {"", "time.sh", 1, 1},

};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

