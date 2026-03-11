/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] = "#0a0a0a",   /* after initialization */
	[INPUT] = "#0031a9",  /* during input */
	[FAILED] = "#d00000", /* wrong password */
	[CAPS] = "#884900",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
