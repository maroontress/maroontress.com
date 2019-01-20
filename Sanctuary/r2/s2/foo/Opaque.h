#ifndef foo_Opaque_H
#define foo_Opaque_H

#define foo_Opaque_TYPE struct another_Class *

struct another_Class;
struct foo_Opaque_;

typedef struct foo_Opaque_ * foo_Opaque;

#if defined(__cplusplus)
extern "C" {
#endif

foo_Opaque foo_Opaque_new(foo_Opaque_TYPE s);

#if defined(__cplusplus)
}
#endif

#ifdef foo_Opaque_IMPORT
#define Opaque foo_Opaque
#define Opaque_TYPE foo_Opaque_TYPE
#define Opaque_new foo_Opaque_new
#endif /* foo_Opaque_IMPORT */

#endif /* !foo_Opaque_H */
