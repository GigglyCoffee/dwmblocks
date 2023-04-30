//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/	/*Update Signal*/
	{"",    "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	        30,		 0    },
	{"",     "~/.local/bin/statusbar/bar-bat",                              30,              0    }, 
	{"",     "~/.local/bin/statusbar/bar-volume", 			       	 0,	 	10    },
	/*{"",     "~/.local/bin/statusbar/bar-bright", 				 0, 		12    },*/
	{"",     "date +'%a %d %b %I:%M'",					60,		 0    },
	{" ",     "~/.local/bin/statusbar/upgrades",                         3600,              0    },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
