#ifndef bar_Modifier_H
#define bar_Modifier_H

#if defined(__cplusplus)
extern "C" {
#endif

void bar_Modifier_abort(void) __attribute__((noreturn));
int bar_Modifier_square(int value) __attribute__((const));

#if defined(__cplusplus)
}
#endif

#ifdef bar_Modifier_IMPORT
#define Modifier_abort bar_Modifier_abort
#define Modifier_square bar_Modifier_square
#endif /* bar_Modifier_IMPORT */

#endif /* !bar_Modifier_H */
