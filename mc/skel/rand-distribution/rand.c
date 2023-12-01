/*
  モンテカルロシミュレーション 乱数の度数分布
  
  rand.c: 0以上1未満の乱数を指定回数だけ発生させて、標準出力に書き出す。
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef RAND_MAX /* ここの計算機センターではstdlib.hで定義されていない。*/
#define RAND_MAX 0x7fffffff
#endif

int main(int ac, char **av)
{
    int k, n;

    /* コマンドラインからnの値を取得する。*/
    if (ac != 2) {
        /*
          nの指定がなければ、使用法を表示して終了する。
        */
        fprintf(stderr, "usage: %s n\n", av[0]);
        exit(1);
    }
    /*
      この時点で文字列av[1]には、コマンドラインで指定されたnが文字列として
      格納されています。数字で構成される文字列（例えば"123"）を整数（123）
      に変換するには、次のようにatoi()を使用します。
    */
    n = atoi(av[1]);

    /* 0以上1未満の乱数の表示をn回繰り返す。*/
    for (k = 0; k < n; ++k) {
        /*
          rand()は0以上RAND_MAX以下の整数を返します。0以上1未満の実数を表示
          するためにはrand()を(RAND_MAX + 1)で割った値をprintf()に渡します。
          ただし、(RAND_MAX + 1)はint型で表現できる値よりも大きい値なので、
          unsigned int型にキャストする目的で(RAND_MAX + 1u)を使用します。
        */
        printf("%f\n", (double)rand() / (RAND_MAX + 1u));
    }

    /* プログラムの実行を終了する。*/
    exit(0);

    /* ここには決して到達しない。*/
    return (0);
}
