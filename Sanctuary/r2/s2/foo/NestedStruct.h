#ifndef foo_NestedStruct_H
#define foo_NestedStruct_H

struct foo_NestedStruct_Outer {
    struct {
        int i;
    } s1;
    struct foo_NestedStruct_Inner {
        int i;
    } s2;
};

#ifdef foo_NestedStruct_IMPORT
#define NestedStruct_Inner foo_NestedStruct_Inner
#define NestedStruct_Outer foo_NestedStruct_Outer
#endif /* foo_NestedStruct_IMPORT */

#endif /* !foo_NestedStruct_H */
