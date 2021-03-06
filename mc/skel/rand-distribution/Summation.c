/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B $BMp?t$NEY?tJ,I[(B
  
  Summation.c: $BAmOB!"J?6Q!"J,;6$r7W;;$9$k$?$a$N4X?t!#(B
*/

#include "Summation.h"

/* $B4X?t(BClearSummantion: Summation$B7?$r=i4|2=$9$k!#(B*/
void ClearSummation(Summation *p)
{
    p->n = 0;
    p->sum = 0;
    p->sq_sum = 0;
}

/* $B4X?t(BAddSummantion: Summation$B7?$X<B?tCM$r2C;;$9$k!#(B*/
void AddSummation(Summation *p, double x)
{
    p->sum += x;
    p->sq_sum += x * x;
    ++(p->n);
}

/* $B4X?t(BAverageOfSummation: Summation$B7?$+$iJ?6Q$r7W;;$7$FJV$9!#(B*/
double AverageOfSummation(Summation *p)
{
    return (p->sum / p->n);
}

/* $B4X?t(BVarianceOfSummation: Summation$B7?$+$iJ,;6$r7W;;$7$FJV$9!#(B*/
double VarianceOfSummation(Summation *p)
{
    double average = p->sum / p->n;

    return (p->sq_sum / p->n - average * average);
}
