/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B $BMp?t$NEY?tJ,I[(B
  
  rand.c: 0$B0J>e(B1$BL$K~$NMp?t$r;XDj2s?t$@$1H/@8$5$;$F!"I8=`=PNO$K=q$-=P$9!#(B
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef RAND_MAX /* $B$3$3$N7W;;5!%;%s%?!<$G$O(Bstdlib.h$B$GDj5A$5$l$F$$$J$$!#(B*/
#define RAND_MAX 0x7fffffff
#endif

int main(int ac, char **av)
{
    int k, n;

    /* $B%3%^%s%I%i%$%s$+$i(Bn$B$NCM$r<hF@$9$k!#(B*/
    if (ac != 2) {
	/*
	  n$B$N;XDj$,$J$1$l$P!";HMQK!$rI=<($7$F=*N;$9$k!#(B
	*/
	fprintf(stderr, "usage: %s n\n", av[0]);
	exit(1);
    }
    /*
      $B$3$N;~E@$GJ8;zNs(Bav[1]$B$K$O!"%3%^%s%I%i%$%s$G;XDj$5$l$?(Bn$B$,J8;zNs$H$7$F(B
      $B3JG<$5$l$F$$$^$9!#?t;z$G9=@.$5$l$kJ8;zNs!JNc$($P(B"123"$B!K$r@0?t!J(B123$B!K(B
      $B$KJQ49$9$k$K$O!"<!$N$h$&$K(Batoi()$B$r;HMQ$7$^$9!#(B
    */
    n = atoi(av[1]);

    /* 0$B0J>e(B1$BL$K~$NMp?t$NI=<($r(Bn$B2s7+$jJV$9!#(B*/
    for (k = 0; k < n; ++k) {
	/*
	  rand()$B$O(B0$B0J>e(BRAND_MAX$B0J2<$N@0?t$rJV$7$^$9!#(B0$B0J>e(B1$BL$K~$N<B?t$rI=<((B
	  $B$9$k$?$a$K$O(Brand()$B$r(B(RAND_MAX + 1)$B$G3d$C$?CM$r(Bprintf()$B$KEO$7$^$9!#(B
	  $B$?$@$7!"(B(RAND_MAX + 1)$B$O(Bint$B7?$GI=8=$G$-$kCM$h$j$bBg$-$$CM$J$N$G!"(B
	  unsigned int$B7?$K%-%c%9%H$9$kL\E*$G(B(RAND_MAX + 1u)$B$r;HMQ$7$^$9!#(B
	*/
	printf("%f\n", (double)rand() / (RAND_MAX + 1u));
    }

    /* $B%W%m%0%i%`$N<B9T$r=*N;$9$k!#(B*/
    exit(0);

    /* $B$3$3$K$O7h$7$FE~C#$7$J$$!#(B*/
    return (0);
}
