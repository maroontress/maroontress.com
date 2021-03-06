/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B $B5a@QLdBj(B $BF~LgE*%b%s%F%+%k%mK!(B
  
  crude.c: $BI8=`F~NO$+$iMp?t$rFI$_9~$_!"F~LgE*%b%s%F%+%k%mK!$GDj@QJ,$9$k!#(B
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Summation.h"
#include "Function.h"

int main(int ac, char **av)
{
    int error;
    double a, b; /* $B@QJ,6h4V(Ba,b */
    double x;
    Summation sum;

    /* $B%3%^%s%I%i%$%s$+$i@QJ,6h4V$r<hF@$9$k!#(B*/
    if (ac != 3) {
	/*
	  a, b$B$N;XDj$,$J$1$l$P!";HMQK!$rI=<($7$F=*N;$9$k!#(B
	*/
	fprintf(stderr, "usage: %s a b\n", av[0]);
	exit(1);
    }
    /*
      $B$3$N;~E@$GJ8;zNs(Bav[1]$B$H(Bav[2]$B$K$O!"%3%^%s%I%i%$%s$G;XDj$5$l$?(Ba$B$H(Bb$B$,(B
      $BJ8;zNs$H$7$F3JG<$5$l$F$$$^$9!#?t;z$G9=@.$5$l$kJ8;zNs!JNc$($P(B"12.3"$B!K(B
      $B$rIbF0>.?tE@?t!J(B12.3$B!K$KJQ49$9$k$K$O!"<!$N$h$&$K(Batof()$B$r;HMQ$7$^$9!#(B
    */
    a = atof(av[1]);
    b = atof(av[2]);

    /* $BMp?t(Bx$B$r$J$/$J$k$^$GFI$_9~$_!"(BFunction(x)$B$N9g7W$r(Bsum$B$K3JG<$9$k!#(B*/
    ClearSummation(&sum);
    while ((error = scanf("%lf", &x)) == 1) {
	/* $B$3$N;~E@$G(Bx$B$O(B0$B0J>e(B1$BL$K~!#$3$l$r(Ba$B0J>e(Bb$BL$K~$KJQ49$9$k!#(B*/
	x *= b - a;
	x += a;

	/* Function(x)$B$NCM$r(Bsum$B$K2C$($k!#(B*/
	AddSummation(&sum, Function(x));

	/*
	  $B;n9T2s?t$H<B83E*$K5a$a$?@QJ,CM$rI=<($9$k!#(B(b - a)$B$r$+$1$F$$$k(B
	  $B$N$O3NN(L)EY$N4X78!J%F%-%9%H$r$_$F$/$@$5$$!K!#(B
	*/
	printf("%d %f\n", CountOfSummation(&sum),
	       (b - a) * AverageOfSummation(&sum));
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
