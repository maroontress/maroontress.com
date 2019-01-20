#define bar_Alpha_IMPORT
#define bar_Beta_IMPORT
#define bar_Gamma_IMPORT

#include <bar/Alpha.h>
#include <bar/Beta.h>
#include <bar/Gamma.h>

void
Alpha_initialize(/*@out@*/ struct Alpha *a)
{
    Beta_initialize(&a->beta);
    Gamma_initialize(&a->gamma);
    a->flags = 0;
    ¡Ä
}

¡Ä
