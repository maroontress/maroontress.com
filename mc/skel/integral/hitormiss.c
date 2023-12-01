/*
  モンテカルロシミュレーション 求積問題 あたりはずれモンテカルロ法
  
  hitormiss.c: 標準入力から乱数を読み込み、あたりはずれモンテカルロ法で
  定積分する。
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Trial.h"
#include "Function.h"

int main(int ac, char **av)
{
    int error;
    double a, b, c; /* 積分区間a,bとc */
    double x, y;
    Trial below;

    /* コマンドラインから積分区間を取得する。*/
    if (ac != 4) {
        /*
          a, bの指定がなければ、使用法を表示して終了する。
        */
        fprintf(stderr, "usage: %s a b c\n", av[0]);
        exit(1);
    }
    /*
      この時点で文字列av[1]、av[2]とav[3]には、コマンドラインで指定された
      a, b, cが文字列として格納されています。数字で構成される文字列（例え
      ば"12.3"）を浮動小数点数（12.3）に変換するには、次のようにatof()を
      使用します。
    */
    a = atof(av[1]);
    b = atof(av[2]);
    c = atof(av[3]);

    /* 2つずつ乱数をなくなるまで読み込み、試行結果をbelowに格納する。*/
    ClearTrial(&below);
    while ((error = scanf("%lf %lf", &x, &y)) == 2) {
        /* この時点でxは0以上1未満。これをa以上b未満に変換する。*/
        x *= b - a;
        x += a;

        /* この時点でyは0以上1未満。これを0以上c未満に変換する。*/
        y *= c;

        /*
          点(x, y)が披積分関数y = Function(x)より下にある場合は真（1）、
          そうでなければ偽（0）をbelowに記録する。
        */
        AddTrial(&below, (y < Function(x)));

        /*
          試行回数と実験的に求めた積分値を表示する。
        */
        printf("%d %f\n", CountOfTrial(&below),
               c * (b - a) * ProbabilityOfTrial(&below));
    }

    /* この時点で、もし読み込みが正常に終了した場合はerrorがEOFになっている。*/
    if (error != EOF) {
        fprintf(stderr, "%s: invalid input.\n", av[0]);
        exit(1);
    }

    /* プログラムの実行を終了する。*/
    exit(0);

    /* ここには決して到達しない。*/
    return (0);
}
