/* user and group to drop privileges to */
static const char *user  = "user";
static const char *group = "group";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#191b1c",   /* after initialization */
	[INPUT] =  "#37474f",   /* during input */
	[FAILED] = "#fb7c79",   /* wrong password */
	[CAPS] =   "#f57900",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* XBell sound: 0 -> 100 */
static const int bellvolume = 0;
