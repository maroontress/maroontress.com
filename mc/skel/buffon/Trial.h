/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B Buffon$B$N?K(B
  
  Trial.h: $BI8K\$+$i3NN($r5a$a$k$?$a$N%G!<%?7?$NDj5A$H4X?t$N@k8@!#(B
*/

/* Trial$B7?$NDj5A!#(B*/
typedef struct {
    int n; /* $BA4;n9T2s?t$r3JG<$9$k!#(B*/
    int k; /* `$BI=$,=P$?(B' $B2s?t$r3JG<$9$k!#(B*/
} Trial;

/* $B%^%/%m(BCountOfTrial: Trial$B7?$N;n9T2s?t$rJV$9!#(B*/
#define CountOfTrial(p) ((p)->n)

/* $B4X?t(BClearTrial: Trial$B7?$r=i4|2=$9$k!#(B*/
void ClearTrial(Trial *);

/* $B4X?t(BAddTrial: Trial$B7?$XI8K\$rDI2C$9$k!#(B*/
void AddTrial(Trial *, int);

/* $B4X?t(BProbabilityOfTrial: Trial$B7?$+$i(B `$BI=$,=P$k(B' $B3NN($rJV$9!#(B*/
double ProbabilityOfTrial(Trial *);
