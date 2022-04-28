/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"mono:style=Bold:size=13",
    "Noto Color Emoji:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* Dmenu will still compile without pywal */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#dfe2ea", "#0c0812" },
	[SchemeSel] = { "#dfe2ea", "#9F718C" },
	[SchemeOut] = { "#dfe2ea", "#B7C7DE" },
};

/* The below line adds colors to dmenu with Pywal generated header file
* Dependencies:
*             pywal
* Pywal colorschemes are put in the .cache directory in the $HOME directory
* #include "/home/kunal/.cache/wal/colors-wal-dmenu.h"
*/

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

