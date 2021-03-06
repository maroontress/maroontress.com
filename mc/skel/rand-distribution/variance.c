/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B $BMp?t$NEY?tJ,I[(B
  
  variance.c: $BI8=`F~NO$+$i<B?t!JIbF0>.?tE@?t!K$rFI$_9~$_!"$=$NJ,;6$r=PNO$9$k!#(B
*/

#include <stdio.h>
#include <stdlib.h>
#include "Summation.h"

int main(int ac, char **av)
{
    int error;
    double x;
    Summation sum; /* Summation$B7?$K$D$$$F$O(BSummation.c, Summation.h$B$r;2>H!#(B*/
    
    /* $B<B?t(Bx$B$r$J$/$J$k$^$GFI$_9~$_!"$=$N9g7W$r(Bsum$B$K3JG<$9$k!#(B*/
    ClearSummation(&sum);
    while ((error = scanf("%lf", &x)) == 1) {
	AddSummation(&sum, x);

        /* $B2C$($?2s?t$HJ,;6$rI8=`=PNO$KI=<($9$k!#(B*/
	printf("%d %f\n", CountOfSummation(&sum), VarianceOfSummation(&sum));
    }

    /* $B$3$N;~E@$G!"$b$7FI$_9~$_$,@5>o$K=*N;$7$?>l9g$O(Berror$B$,(BEOF$B$K$J$C$F$$$k!#(B*/
    if (error != EOF) {
	fprintf(stderr, "%s: invalid input.\n", av[0]);
	exit(1);
    }

    /* $B%W%m%0%i%`$N<B9T$r=*N;$9$k!#(B*/
    exit(0);

    /* $B$3$3$K$O7h$7$FE~C#$7$J$$!#(B*/
    return (0);
}
