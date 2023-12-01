/*
  モンテカルロシミュレーション 求積問題
  
  Function.c: 定積分の披積分関数の定義。
*/

#include <math.h>
#include "Function.h"

/* 求積問題の披積分関数の定義。*/
double Function(double x)
{
    return (sqrt(1.0 - x * x));
}
