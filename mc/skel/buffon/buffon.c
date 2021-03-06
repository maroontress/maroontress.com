/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B Buffon$B$N?K(B
  
  buffon.c: $BI8=`F~NO$+$iMp?t$rFs$D$:$DFI$_9~$_!"(BBuffon$B$N?K$N%"%k%4%j%:%`$G(B
  $B1_<~N($r5a$a$k!#(B
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Trial.h"

/*
  $B4X?t(BIsEqualSign: $B0z?t(Bx, y$B$,F1Id9f$N>l9g!"??!J(B1$B!K$rJV$9!#$=$&$G$J$1$l$P(B
  $B56!J(B0$B!K$rJV$9!#(B
*/
int IsEqualSign(double x, double y)
{
    return ((x > 0 && y > 0) || (x < 0 && y < 0));
}

int main(int ac, char **av)
{
    int error;
    double a, ell; /* $B%Q%i%a!<%?(Ba$B$H(BL */
    double y, theta, p;
    Trial cross; /* Trial$B7?$K$D$$$F$O(BTrial.c, Trial.h$B$r;2>H!#(B*/

    /* $B%3%^%s%I%i%$%s$+$i%Q%i%a!<%?$NCM$r<hF@$9$k!#(B*/
    if (ac != 3) {
	/*
	  a, L$B$N;XDj$,$J$1$l$P!";HMQK!$rI=<($7$F=*N;$9$k!#(B
	*/
	fprintf(stderr, "usage: %s a L\n", av[0]);
	exit(1);
    }
    /*
      $B$3$N;~E@$GJ8;zNs(Bav[1]$B$H(Bav[2]$B$K$O!"%3%^%s%I%i%$%s$G;XDj$5$l$?(Ba$B$H(BL$B$,(B
      $BJ8;zNs$H$7$F3JG<$5$l$F$$$^$9!#?t;z$G9=@.$5$l$kJ8;zNs!JNc$($P(B"12.3"$B!K(B
      $B$rIbF0>.?tE@?t!J(B12.3$B!K$KJQ49$9$k$K$O!"<!$N$h$&$K(Batof()$B$r;HMQ$7$^$9!#(B
    */
    a = atof(av[1]);
    ell = atof(av[2]);

    /* 2$B$D$:$DMp?t$r$J$/$J$k$^$GFI$_9~$_!";n9T7k2L$r(Bcross$B$K3JG<$9$k!#(B*/
    ClearTrial(&cross);
    while ((error = scanf("%lf %lf", &y, &theta)) == 2) {
	/* $B8=:_$O(By$B$O(B0$B0J>e(B1$BL$K~!#$3$l$r(B-a$B0J>e(Ba$BL$K~$KJQ49$9$k!#(B*/
	y = a * (2 * y - 1);

	/* $B8=:_(Btheta$B$O(B0$B0J>e(B1$BL$K~!#$3$l$r(B0$B0J>e(B(2 * M_PI)$BL$K~$KJQ49$9$k!#(B*/
	theta *= 2 * M_PI;

	/*
	  (y - ell * sin(theta))$B$NId9f$H(B(y + ell * sin(theta))$B$NId9f$,(B
	  $BF1$8$G$J$1$l$P8r:9$7$?$N$G??!J(B1$B!K!"Id9f$,F1$8$G$"$l$P8r:9$7$J(B
	  $B$+$C$?$N$G56!J(B0$B!K$r(Bcross$B5-O?$9$k!#(B
	*/
	AddTrial(&cross, !IsEqualSign(y - ell * sin(theta),
				      y + ell * sin(theta)));

	/*
	  $B;n9T2s?t$H<B83E*$K5a$a$?1_<~N($rI=<($9$k!#$?$@$7!"8r:9$9$k(B
	  $B3NN((Bp$B$,(B0$B$N$H$-$O2?$bI=<($7$J$$!#(B
	*/
	if ((p = ProbabilityOfTrial(&cross)) > 0) {
	    printf("%d %f\n", CountOfTrial(&cross), 2 * ell / (a * p));
	}
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
