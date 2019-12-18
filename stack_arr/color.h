#ifndef _COLORH_
#define _COLORH_

/* [style;colour]*/
/* 0 -> normal ;  31 -> red */
/* 1 -> bold ;  36 -> cyan */
/* 4 -> underline ;  32 -> green */
/* 9 -> strike ;  34 -> blue */
#define red   "\033[0;31m"
#define cyan  "\033[0;36m"
#define green "\033[0;32m"
#define blue  "\033[0;34m"

#define black  "\033[0;30m"
#define brown  "\033[0;33m"
#define magenta  "\033[1;35m"
#define gray  "\033[0;37m"

#define none   "\033[0m"        /* to flush the previous property */

#endif
