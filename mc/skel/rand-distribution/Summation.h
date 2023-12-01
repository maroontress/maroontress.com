/*
  モンテカルロシミュレーション 乱数の度数分布
  
  Summation.h: 総和、平均、分散を計算するためのデータ型の定義と関数の宣言。
*/

/* Summation型の定義。*/
typedef struct {
    int n;         /* 加算回数を格納する。*/
    double sum;    /* 総和を格納する。*/
    double sq_sum; /* 自乗の総和を格納する。*/
} Summation;

/* マクロCountOfSummation: Summation型の加算回数を返す。*/
#define CountOfSummation(p) ((p)->n)

/* 関数ClearSummation: Summation型を初期化する。*/
void ClearSummation(Summation *);

/* 関数AddSummation: Summation型へ実数値を加算する。*/
void AddSummation(Summation *, double);

/* 関数AverageOfSummation: Summation型から平均を計算して返す。*/
double AverageOfSummation(Summation *);

/* 関数VarianceOfSummation: Summation型から分散を計算して返す。*/
double VarianceOfSummation(Summation *);
