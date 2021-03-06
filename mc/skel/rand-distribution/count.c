/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B $BMp?t$NEY?tJ,I[(B
  
  count.c: $BI8=`F~NO$+$iFI$_9~$s$@$N<B?t$NEY?tJ,I[$rI=<($9$k!#(B
*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int error, count;
    double begin, end, x;

    /* $B%3%^%s%I%i%$%s$+$iHO0O$r<hF@$9$k!#(B*/
    if (ac != 3) {
	/*
	  $BHO0O$N;XDj$,$J$1$l$P!";HMQK!$rI=<($7$F=*N;$9$k!#(B
	*/
	fprintf(stderr, "usage: %s begin end\n", av[0]);
	exit(1);
    }
    /*
      $B$3$N;~E@$GJ8;zNs(Bav[1]$B$H(Bav[2]$B$K$O!"%3%^%s%I%i%$%s$G;XDj$5$l$?HO0O$N(B
      $B;O$^$j$H=*$j$,J8;zNs$H$7$F3JG<$5$l$F$$$^$9!#?t;z$G9=@.$5$l$kJ8;zNs(B
      $B!JNc$($P(B"12.3"$B!K$rIbF0>.?tE@?t!J(B12.3$B!K$KJQ49$9$k$K$O!"<!$N$h$&$K(B
      atof()$B$r;HMQ$7$^$9!#(B
    */
    begin = atof(av[1]);
    end = atof(av[2]);

    /*
      $B<B?t(Bx$B$r$J$/$J$k$^$GFI$_9~$_!"(Bx$B$NCM$,HO0O$K$"$l$P(Bcount$B$N?t$r0l$DA}$d$9!#(B
    */
    count = 0;
    while ((error = scanf("%lf", &x)) == 1) {
	if (begin <= x && x < end) {
	    ++count;
	}
    }

    /* $B$3$N;~E@$G!"$b$7FI$_9~$_$,@5>o$K=*N;$7$?>l9g$O(Berror$B$,(BEOF$B$K$J$C$F$$$k!#(B*/
    if (error != EOF) {
	fprintf(stderr, "%s: invalid input.\n", av[0]);
	exit(1);
    }

    /* $B@0?t(Bcount$B$rI8=`=PNO$K=q$-=P$9!#(B*/
    printf("%d\n", count);

    /* $B%W%m%0%i%`$N<B9T$r=*N;$9$k!#(B*/
    exit(0);

    /* $B$3$3$K$O7h$7$FE~C#$7$J$$!#(B*/
    return (0);
}
