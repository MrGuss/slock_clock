/* user and group to drop privileges to */
static const char *user  = "mrguss";
static const char *group = "mrguss";

static const char *colorname[NUMCOLS] = {
    [INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
/* text color */
static const char * text_color = "#ffffff";
/* text size (must be a valid size) */
static const char * font_name = "-misc-hack-bold-i-normal--0-0-0-0-m-0-koi8-uni";
/* period for calling PerMessage function in seconds*/
static const int sleepTime = 1;


/*Enable blur*/
#define PIXELATION
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=5;
