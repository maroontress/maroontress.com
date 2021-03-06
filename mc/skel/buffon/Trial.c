/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B Buffon$B$N?K(B
  
  Trial.c: $BI8K\$+$i3NN($r5a$a$k$?$a$N4X?t!#(B
*/

#include "Trial.h"

/* $B4X?t(BClearTrial: Trial$B7?$r=i4|2=$9$k!#(B*/
void ClearTrial(Trial *t)
{
    t->k = 0;
    t->n = 0;
}

/* $B4X?t(BAddTrial: Trial$B7?$XI8K\$rDI2C$9$k!#(Bs$B$OO@M}CM!#(B*/
void AddTrial(Trial *t, int s)
{
    if (s) {
	/* s$B$,??$J$i(B `$BI=$,=P$?(B'$B!#(B*/
	++(t->k);
    }
    ++(t->n);
}

/* $B4X?t(BProbabilityOfTrial: Trial$B7?$+$i(B `$BI=$,=P$k(B' $B3NN($rJV$9!#(B*/
double ProbabilityOfTrial(Trial *t)
{
    return ((double)t->k / t->n);
}
