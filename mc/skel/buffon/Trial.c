/*
  モンテカルロシミュレーション Buffonの針
  
  Trial.c: 標本から確率を求めるための関数。
*/

#include "Trial.h"

/* 関数ClearTrial: Trial型を初期化する。*/
void ClearTrial(Trial *t)
{
    t->k = 0;
    t->n = 0;
}

/* 関数AddTrial: Trial型へ標本を追加する。sは論理値。*/
void AddTrial(Trial *t, int s)
{
    if (s) {
        /* sが真なら `表が出た'。*/
        ++(t->k);
    }
    ++(t->n);
}

/* 関数ProbabilityOfTrial: Trial型から `表が出る' 確率を返す。*/
double ProbabilityOfTrial(Trial *t)
{
    return ((double)t->k / t->n);
}
