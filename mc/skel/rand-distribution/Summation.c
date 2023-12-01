/*
  モンテカルロシミュレーション 乱数の度数分布
  
  Summation.c: 総和、平均、分散を計算するための関数。
*/

#include "Summation.h"

/* 関数ClearSummation: Summation型を初期化する。*/
void ClearSummation(Summation *p)
{
    p->n = 0;
    p->sum = 0;
    p->sq_sum = 0;
}

/* 関数AddSummation: Summation型へ実数値を加算する。*/
void AddSummation(Summation *p, double x)
{
    p->sum += x;
    p->sq_sum += x * x;
    ++(p->n);
}

/* 関数AverageOfSummation: Summation型から平均を計算して返す。*/
double AverageOfSummation(Summation *p)
{
    return (p->sum / p->n);
}

/* 関数VarianceOfSummation: Summation型から分散を計算して返す。*/
double VarianceOfSummation(Summation *p)
{
    double average = p->sum / p->n;

    return (p->sq_sum / p->n - average * average);
}
