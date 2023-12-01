#ifndef foo_FunctionMember_H
#define foo_FunctionMember_H

struct foo_FunctionMember {
    int (*func)(int in);
};

#ifdef foo_FunctionMember_IMPORT
#define FunctionMember foo_FunctionMember
#endif /* foo_FunctionMember_IMPORT */

#endif /* !foo_FunctionMember_H */
