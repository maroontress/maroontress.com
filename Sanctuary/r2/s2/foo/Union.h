#ifndef foo_Union_H
#define foo_Union_H

union foo_Union_IntDouble {
    int i[2];
    double d;
};

typedef union {
    unsigned char c[4];
    unsigned int i;
} foo_Union_UCharUInt;

#ifdef foo_Union_IMPORT
#define Union_IntDouble foo_Union_IntDouble
#define Union_UCharUInt foo_Union_UCharUInt
#endif /* foo_Union_IMPORT */

#endif /* !foo_Union_H */
