#ifndef foo_Time_H
#define foo_Time_H

#define foo_Time_add(tvp, uvp, vvp) \
	do { \
	  (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; \
	  (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; \
	  if ((vvp)->tv_usec >= 1000000) { \
	    (vvp)->tv_sec++; \
	    (vvp)->tv_usec -= 1000000; \
	  } \
	} while (0)

#ifdef foo_Time_IMPORT
#define Time_add foo_Time_add
#endif /* foo_Time_IMPORT */

#endif /* !foo_Time_H */
