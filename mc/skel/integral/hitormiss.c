/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B $B5a@QLdBj(B $B$"$?$j$O$:$l%b%s%F%+%k%mK!(B
  
  hitormiss.c: $BI8=`F~NO$+$iMp?t$rFI$_9~$_!"$"$?$j$O$:$l%b%s%F%+%k%mK!$G(B
  $BDj@QJ,$9$k!#(B
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Trial.h"
#include "Function.h"

int main(int ac, char **av)
{
    int error;
    double a, b, c; /* $B@QJ,6h4V(Ba,b$B$H(Bc */
    double x, y;
    Trial below;

    /* $B%3%^%s%I%i%$%s$+$i@QJ,6h4V$r<hF@$9$k!#(B*/
    if (ac != 4) {
	/*
	  a, b$B$N;XDj$,$J$1$l$P!";HMQK!$rI=<($7$F=*N;$9$k!#(B
	*/
	fprintf(stderr, "usage: %s a b c\n", av[0]);
	exit(1);
    }
    /*
      $B$3$N;~E@$GJ8;zNs(Bav[1]$B!"(Bav[2]$B$H(Bav[3]$B$K$O!"%3%^%s%I%i%$%s$G;XDj$5$l$?(B
      a, b, c$B$,J8;zNs$H$7$F3JG<$5$l$F$$$^$9!#?t;z$G9=@.$5$l$kJ8;zNs!JNc$((B
      $B$P(B"12.3"$B!K$rIbF0>.?tE@?t!J(B12.3$B!K$KJQ49$9$k$K$O!"<!$N$h$&$K(Batof()$B$r(B
      $B;HMQ$7$^$9!#(B
    */
    a = atof(av[1]);
    b = atof(av[2]);
    c = atof(av[3]);

    /* 2$B$D$:$DMp?t$r$J$/$J$k$^$GFI$_9~$_!";n9T7k2L$r(Bbelow$B$K3JG<$9$k!#(B*/
    ClearTrial(&below);
    while ((error = scanf("%lf %lf", &x, &y)) == 2) {
	/* $B$3$N;~E@$G(Bx$B$O(B0$B0J>e(B1$BL$K~!#$3$l$r(Ba$B0J>e(Bb$BL$K~$KJQ49$9$k!#(B*/
	x *= b - a;
	x += a;

	/* $B$3$N;~E@$G(By$B$O(B0$B0J>e(B1$BL$K~!#$3$l$r(B0$B0J>e(Bc$BL$K~$KJQ49$9$k!#(B*/
	y *= c;

	/*
	  $BE@(B(x, y)$B$,Hd@QJ,4X?t(By = Function(x)$B$h$j2<$K$"$k>l9g$O??!J(B1$B!K!"(B
	  $B$=$&$G$J$1$l$P56!J(B0$B!K$r(Bbelow$B5-O?$9$k!#(B
	*/
        AddTrial(&below, (y < Function(x)));

	/*
	  $B;n9T2s?t$H<B83E*$K5a$a$?@QJ,CM$rI=<($9$k!#(B
	*/
	printf("%d %f\n", CountOfTrial(&below),
	       c * (b - a) * ProbabilityOfTrial(&below));
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
