#ifndef foo_File_H
#define foo_File_H

#include <stdio.h>

typedef struct {
    FILE * file;
} foo_File;

#if defined(__cplusplus)
extern "C" {
#endif

foo_File * foo_File_new(FILE * file);

#if defined(__cplusplus)
}
#endif

#ifdef foo_File_IMPORT
#define File foo_File
#define File_new foo_File_new
#endif /* foo_File_IMPORT */

#endif /* !foo_File_H */
