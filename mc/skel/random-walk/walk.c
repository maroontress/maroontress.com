/*
  モンテカルロシミュレーション 酔歩問題
  
  walk.c: n回の酔歩後の座標を出力することをN回試行する。
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef RAND_MAX /* ここの計算機センターではstdlib.hで定義されていない。*/
#define RAND_MAX 0x7fffffff
#endif

/*
  関数RandomWalk: 座標0から引数nの回数だけ酔歩した後の座標を返す。
*/
int RandomWalk(int n)
{
    int x;

    /* 座標xを0で初期化し、乱数にしたがってxをn回増減させる。*/
    for (x = 0; n > 0; --n) {
        if ((double)rand() / (RAND_MAX + 1u) < 0.5)
            --x; /* 0以上1未満の一様乱数が0.5未満であれば、負の方向に移動する。*/
        else
            ++x; /* そうでなければ、正の方向に移動する。*/
    }

    /* 座標xを返す。*/
    return (x);
}

int main(int ac, char **av)
{
    int k, large_n, n;

    /* コマンドラインからNとnの値を取得する。*/
    if (ac != 3) {
        /*
          Nとnの指定がなければ、使用法を表示して終了する。
        */
        fprintf(stderr, "usage: %s N n\n", av[0]);
        exit(1);
    }
    /*
      この時点で文字列av[1]とav[2]には、コマンドラインで指定されたNとnが
      文字列として格納されています。数字で構成される文字列（例えば"123"）
      を整数（123）に変換するには、次のようにatoi()を使用します。
    */
    large_n = atoi(av[1]);
    n = atoi(av[2]);

    /* nの値を確認する。*/
    if (n <= 0) {
        /*
          nが不正な値であれば、警告して終了する。
        */
        fprintf(stderr, "%s: `n' is invalid parameter %s.\n", av[0], av[2]);
        exit(1);
    }

    /* 「n回の酔歩後の座標を表示する」をN回繰り返す。*/
    for (k = 0; k < large_n; ++k)
        printf("%d\n", RandomWalk(n));

    /* プログラムの実行を終了する。*/
    exit(0);

    /* ここには決して到達しない。*/
    return (0);
}
