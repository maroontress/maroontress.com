/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B $BMp?t$NEY?tJ,I[(B
  
  Summation.h: $BAmOB!"J?6Q!"J,;6$r7W;;$9$k$?$a$N%G!<%?7?$NDj5A$H4X?t$N@k8@!#(B
*/

/* Summation$B7?$NDj5A!#(B*/
typedef struct {
    int n;         /* $B2C;;2s?t$r3JG<$9$k!#(B*/
    double sum;    /* $BAmOB$r3JG<$9$k!#(B*/
    double sq_sum; /* $B<+>h$NAmOB$r3JG<$9$k!#(B*/
} Summation;

/* $B%^%/%m(BCountOfSummation: Summation$B7?$N2C;;2s?t$rJV$9!#(B*/
#define CountOfSummation(p) ((p)->n)

/* $B4X?t(BClearSummantion: Summation$B7?$r=i4|2=$9$k!#(B*/
void ClearSummation(Summation *);

/* $B4X?t(BAddSummantion: Summation$B7?$X<B?tCM$r2C;;$9$k!#(B*/
void AddSummation(Summation *, double);

/* $B4X?t(BAverageOfSummation: Summation$B7?$+$iJ?6Q$r7W;;$7$FJV$9!#(B*/
double AverageOfSummation(Summation *);

/* $B4X?t(BVarianceOfSummation: Summation$B7?$+$iJ,;6$r7W;;$7$FJV$9!#(B*/
double VarianceOfSummation(Summation *);
