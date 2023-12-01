/*
  モンテカルロシミュレーション Buffonの針
  
  buffon.c: 標準入力から乱数を二つずつ読み込み、Buffonの針のアルゴリズムで
  円周率を求める。
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Trial.h"

/*
  関数IsEqualSign: 引数x, yが同符号の場合、真（1）を返す。そうでなければ
  偽（0）を返す。
*/
int IsEqualSign(double x, double y)
{
    return ((x > 0 && y > 0) || (x < 0 && y < 0));
}

int main(int ac, char **av)
{
    int error;
    double a, ell; /* パラメータaとL */
    double y, theta, p;
    Trial cross; /* Trial型についてはTrial.c, Trial.hを参照。*/

    /* コマンドラインからパラメータの値を取得する。*/
    if (ac != 3) {
        /*
          a, Lの指定がなければ、使用法を表示して終了する。
        */
        fprintf(stderr, "usage: %s a L\n", av[0]);
        exit(1);
    }
    /*
      この時点で文字列av[1]とav[2]には、コマンドラインで指定されたaとLが
      文字列として格納されています。数字で構成される文字列（例えば"12.3"）
      を浮動小数点数（12.3）に変換するには、次のようにatof()を使用します。
    */
    a = atof(av[1]);
    ell = atof(av[2]);

    /* 2つずつ乱数をなくなるまで読み込み、試行結果をcrossに格納する。*/
    ClearTrial(&cross);
    while ((error = scanf("%lf %lf", &y, &theta)) == 2) {
        /* 現在はyは0以上1未満。これを-a以上a未満に変換する。*/
        y = a * (2 * y - 1);

        /* 現在thetaは0以上1未満。これを0以上(2 * M_PI)未満に変換する。*/
        theta *= 2 * M_PI;

        /*
          (y - ell * sin(theta))の符号と(y + ell * sin(theta))の符号が
          同じでなければ交差したので真（1）、符号が同じであれば交差しな
          かったので偽（0）をcrossに記録する。
        */
        AddTrial(&cross, !IsEqualSign(y - ell * sin(theta),
                                      y + ell * sin(theta)));

        /*
          試行回数と実験的に求めた円周率を表示する。ただし、交差する
          確率pが0のときは何も表示しない。
        */
        if ((p = ProbabilityOfTrial(&cross)) > 0) {
            printf("%d %f\n", CountOfTrial(&cross), 2 * ell / (a * p));
        }
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
