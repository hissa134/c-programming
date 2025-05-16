// 長方形の面積を求める関数を作りなさい
//2つの実数を受け取り、その値を掛け算した値を返す関数

#include <stdio.h>

//関数のプロトタイプ宣言
float chohokei(float t, float y);//関数の最初の行をコピペすればいい
//main関数
int main(void) {
 float menseki = chohokei(5.0,3.0);//関数を呼び出すことができる
  
  printf("%f\n", menseki);

  return 0;
}


float chohokei(float t, float y/*引数*/) {
    //長方形の面積を求める内容　→縦と横の掛け算
   float menseki;
   menseki = t * y;
   return menseki;
}