//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"",	"sb-tasks",	10,	26},
	{"", "cat /tmp/recinfo 2>/dev/null",	0,	9},
	{"",	"sb-pacpackages",	0,	8},
	/* {"",	"sb-price xmr-btc \"Monero to Bitcoin\" 🔒 25",	9000,	25}, */
	/* {"",	"sb-price xmr Monero 🔒 24",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸 23",			9000,	23}, */
	/* {"",	"sb-price btc Bitcoin 💰 21",			9000,	21}, */
	{"",	"sb-temp",	5,	21},
	{"",	"sb-cpu",	5,	18},
	{"",	"sb-memory",	10,	14},
	{"",	"sb-internet",	5,	4},
	{"",	"sb-nettraf",	1,	16},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-clock",	60,	1},
	{"",	"sb-battery",	5,	3},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";
