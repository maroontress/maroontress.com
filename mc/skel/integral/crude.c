/*
  モンテカルロシミュレーション 求積問題 入門的モンテカルロ法
  
  crude.c: 標準入力から乱数を読み込み、入門的モンテカルロ法で定積分する。
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Summation.h"
#include "Function.h"

int main(int ac, char **av)
{
    int error;
    double a, b; /* 積分区間a,b */
    double x;
    Summation sum;

    /* コマンドラインから積分区間を取得する。*/
    if (ac != 3) {
        /*
          a, bの指定がなければ、使用法を表示して終了する。
        */
        fprintf(stderr, "usage: %s a b\n", av[0]);
        exit(1);
    }
    /*
      この時点で文字列av[1]とav[2]には、コマンドラインで指定されたaとbが
      文字列として格納されています。数字で構成される文字列（例えば"12.3"）
      を浮動小数点数（12.3）に変換するには、次のようにatof()を使用します。
    */
    a = atof(av[1]);
    b = atof(av[2]);

    /* 乱数xをなくなるまで読み込み、Function(x)の合計をsumに格納する。*/
    ClearSummation(&sum);
    while ((error = scanf("%lf", &x)) == 1) {
        /* この時点でxは0以上1未満。これをa以上b未満に変換する。*/
        x *= b - a;
        x += a;

        /* Function(x)の値をsumに加える。*/
        AddSummation(&sum, Function(x));

        /*
          試行回数と実験的に求めた積分値を表示する。(b - a)をかけている
          のは確率密度の関係（テキストをみてください）。
        */
        printf("%d %f\n", CountOfSummation(&sum),
               (b - a) * AverageOfSummation(&sum));
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
