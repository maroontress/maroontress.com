#ifndef com_example_StringList_H
#define com_example_StringList_H

struct com_example_StringList;

typedef struct com_example_StringList {
    struct com_example_StringList * next;
    char * value;
} com_example_StringList;

#ifdef com_example_StringList_IMPORT
#define StringList com_example_StringList
#endif /* com_example_StringList_IMPORT */

#endif /* !com_example_StringList_H */
