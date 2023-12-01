/*
  モンテカルロシミュレーション 乱数の度数分布
  
  average.c: 標準入力から実数（浮動小数点数）を読み込み、その平均を出力する。
*/

#include <stdio.h>
#include <stdlib.h>
#include "Summation.h"

int main(int ac, char **av)
{
    int error;
    double x;
    Summation sum; /* Summation型についてはSummation.c, Summation.hを参照。*/
    
    /* 実数xをなくなるまで読み込み、その合計をsumに格納する。*/
    ClearSummation(&sum);
    while ((error = scanf("%lf", &x)) == 1) {
        AddSummation(&sum, x);

        /* 加えた回数と平均を標準出力に表示する。*/
        printf("%d %f\n", CountOfSummation(&sum), AverageOfSummation(&sum));
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
