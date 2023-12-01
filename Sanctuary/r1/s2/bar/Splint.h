#ifndef bar_Splint_H
#define bar_Splint_H

struct bar_Splint;

void bar_Splint_initialize(/*@out@*/ struct bar_Splint * s);

#ifdef bar_Splint_IMPORT
#define Splint bar_Splint
#define Splint_initialize bar_Splint_initialize
#endif /* bar_Splint_IMPORT */

#endif /* !bar_Splint_H */
