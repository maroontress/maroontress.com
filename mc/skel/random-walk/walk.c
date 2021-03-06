/*
  $B%b%s%F%+%k%m%7%_%e%l!<%7%g%s(B $B?lJbLdBj(B
  
  walk.c: n$B2s$N?lJb8e$N:BI8$r=PNO$9$k$3$H$r(BN$B2s;n9T$9$k!#(B
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef RAND_MAX /* $B$3$3$N7W;;5!%;%s%?!<$G$O(Bstdlib.h$B$GDj5A$5$l$F$$$J$$!#(B*/
#define RAND_MAX 0x7fffffff
#endif

/*
  $B4X?t(BRandomWalk: $B:BI8(B0$B$+$i0z?t(Bn$B$N2s?t$@$1?lJb$7$?8e$N:BI8$rJV$9!#(B
*/
int RandomWalk(int n)
{
    int x;

    /* $B:BI8(Bx$B$r(B0$B$G=i4|2=$7!"Mp?t$K$7$?$,$C$F(Bx$B$r(Bn$B2sA}8:$5$;$k!#(B*/
    for (x = 0; n > 0; --n) {
	if ((double)rand() / (RAND_MAX + 1u) < 0.5)
	    --x; /* 0$B0J>e(B1$BL$K~$N0lMMMp?t$,(B0.5$BL$K~$G$"$l$P!"Ii$NJ}8~$K0\F0$9$k!#(B*/
	else
	    ++x; /* $B$=$&$G$J$1$l$P!"@5$NJ}8~$K0\F0$9$k!#(B*/
    }

    /* $B:BI8(Bx$B$rJV$9!#(B*/
    return (x);
}

int main(int ac, char **av)
{
    int k, large_n, n;

    /* $B%3%^%s%I%i%$%s$+$i(BN$B$H(Bn$B$NCM$r<hF@$9$k!#(B*/
    if (ac != 3) {
        /*
          N$B$H(Bn$B$N;XDj$,$J$1$l$P!";HMQK!$rI=<($7$F=*N;$9$k!#(B
        */
        fprintf(stderr, "usage: %s N n\n", av[0]);
        exit(1);
    }
    /*
      $B$3$N;~E@$GJ8;zNs(Bav[1]$B$H(Bav[2]$B$K$O!"%3%^%s%I%i%$%s$G;XDj$5$l$?(BN$B$H(Bn$B$,(B
      $BJ8;zNs$H$7$F3JG<$5$l$F$$$^$9!#?t;z$G9=@.$5$l$kJ8;zNs!JNc$($P(B"123"$B!K(B
      $B$r@0?t!J(B123$B!K$KJQ49$9$k$K$O!"<!$N$h$&$K(Batoi()$B$r;HMQ$7$^$9!#(B
    */
    large_n = atoi(av[1]);
    n = atoi(av[2]);

    /* n$B$NCM$r3NG'$9$k!#(B*/
    if (n <= 0) {
        /*
          n$B$,IT@5$JCM$G$"$l$P!"7Y9p$7$F=*N;$9$k!#(B
        */
	fprintf(stderr, "%s: `n' is invalid parameter %s.\n", av[0], av[2]);
	exit(1);
    }

    /* $B!V(Bn$B2s$N?lJb8e$N:BI8$rI=<($9$k!W$r(BN$B2s7+$jJV$9!#(B*/
    for (k = 0; k < large_n; ++k)
	printf("%d\n", RandomWalk(n));

    /* $B%W%m%0%i%`$N<B9T$r=*N;$9$k!#(B*/
    exit(0);

    /* $B$3$3$K$O7h$7$FE~C#$7$J$$!#(B*/
    return (0);
}
