/*
  モンテカルロシミュレーション 乱数の度数分布
  
  count.c: 標準入力から読み込んだの実数の度数分布を表示する。
*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int error, count;
    double begin, end, x;

    /* コマンドラインから範囲を取得する。*/
    if (ac != 3) {
        /*
          範囲の指定がなければ、使用法を表示して終了する。
        */
        fprintf(stderr, "usage: %s begin end\n", av[0]);
        exit(1);
    }
    /*
      この時点で文字列av[1]とav[2]には、コマンドラインで指定された範囲の
      始まりと終りが文字列として格納されています。数字で構成される文字列
      （例えば"12.3"）を浮動小数点数（12.3）に変換するには、次のように
      atof()を使用します。
    */
    begin = atof(av[1]);
    end = atof(av[2]);

    /*
      実数xをなくなるまで読み込み、xの値が範囲にあればcountの数を一つ増やす。
    */
    count = 0;
    while ((error = scanf("%lf", &x)) == 1) {
        if (begin <= x && x < end) {
            ++count;
        }
    }

    /* この時点で、もし読み込みが正常に終了した場合はerrorがEOFになっている。*/
    if (error != EOF) {
        fprintf(stderr, "%s: invalid input.\n", av[0]);
        exit(1);
    }

    /* 整数countを標準出力に書き出す。*/
    printf("%d\n", count);

    /* プログラムの実行を終了する。*/
    exit(0);

    /* ここには決して到達しない。*/
    return (0);
}
