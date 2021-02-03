//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	//Icon--Command--Update Interval (seconds)--Update Signal
	//{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	//{"",	"music",	0,	11},
	//{"",	"pacpackages",	0,	8},
	//{"",	"news",		0,	6},
	//{"",	"crypto",	0,	13},
	//{"",	"price bat \"Basic Attention Token\" 🦁",	0,	20},
	//{"",	"price btc Bitcoin 💰",				0,	21},
	//{"",	"price lbc \"LBRY Token\" 📚",			0,	22},
	//{"",	"torrent",	20,	7},
	{"",	"spacer",	0,	1},
	//{"",	"mailbox",	180,	12}, //removed mailbox, since we used webmails more often anyways
	{"",	"disk",		10,	1},
	{"",	"disk /home",	10,	1},
	{"",	"memory",	10,	1},
	{"",	"cpu",		10,	1},
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"internet",	5,	4},
	{"",	"clock",	60,	1},
	{"",	"spacer",	0,	1}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
