#ifndef foo_OpaqueStruct_H
#define foo_OpaqueStruct_H

struct another_Class;
struct foo_OpaqueStruct;

struct foo_OpaqueStruct * foo_OpaqueStruct_new(struct another_Class * s);

#ifdef foo_OpaqueStruct_IMPORT
#define OpaqueStruct foo_OpaqueStruct
#define OpaqueStruct_new foo_OpaqueStruct_new
#endif /* foo_OpaqueStruct_IMPORT */

#endif /* !foo_OpaqueStruct_H */
