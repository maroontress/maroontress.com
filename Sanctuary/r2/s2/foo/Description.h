#ifndef foo_Description_H
#define foo_Description_H

struct foo_Description {
    int value;
    int (*method)(int in);
};

#if defined(__cplusplus)
extern "C" {
#endif

int foo_Description_method(int in);

#if defined(__cplusplus)
}
#endif

#ifdef foo_Description_IMPORT
#define Description foo_Description
#define Description_method foo_Description_method
#endif /* foo_Description_IMPORT */

#endif /* !foo_Description_H */
