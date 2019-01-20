#ifndef bar_FileFactory_H
#define bar_FileFactory_H

#include <stdio.h>

foo_File * bar_FileFactory_open(const void * cookie,
                                int (*readfn)(void *, char *, int),
                                int (*writefn)(void *, const char *, int),
                                fpos_t (*seekfn)(void *, fpos_t, int),
                                int (*closefn)(void *));

#ifdef bar_FileFactory_IMPORT
#define FileFactory_open bar_FileFactory_open
#endif /* bar_FileFactory_IMPORT */

#endif /* !bar_FileFactory_H */
