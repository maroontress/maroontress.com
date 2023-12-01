#ifndef foo_File_H
#define foo_File_H

#include <stdio.h>

typedef struct {
    FILE * file;
} foo_File;

foo_File * foo_File_new(FILE * file);

#ifdef foo_File_IMPORT
#define File foo_File
#define File_new foo_File_new
#endif /* foo_File_IMPORT */

#endif /* !foo_File_H */
