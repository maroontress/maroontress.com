/*
  モンテカルロシミュレーション Buffonの針
  
  Trial.h: 標本から確率を求めるためのデータ型の定義と関数の宣言。
*/

/* Trial型の定義。*/
typedef struct {
    int n; /* 全試行回数を格納する。*/
    int k; /* `表が出た' 回数を格納する。*/
} Trial;

/* マクロCountOfTrial: Trial型の試行回数を返す。*/
#define CountOfTrial(p) ((p)->n)

/* 関数ClearTrial: Trial型を初期化する。*/
void ClearTrial(Trial *);

/* 関数AddTrial: Trial型へ標本を追加する。*/
void AddTrial(Trial *, int);

/* 関数ProbabilityOfTrial: Trial型から `表が出る' 確率を返す。*/
double ProbabilityOfTrial(Trial *);
