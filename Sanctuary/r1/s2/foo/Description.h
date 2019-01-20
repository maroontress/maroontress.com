#ifndef foo_Description_H
#define foo_Description_H

struct foo_Description {
    int value;
    int (*method)(int in);
};

int foo_Description_method(int in);

#ifdef foo_Description_IMPORT
#define Description foo_Description
#define Description_method foo_Description_method
#endif /* foo_Description_IMPORT */

#endif /* !foo_Description_H */
