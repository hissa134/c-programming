#include <stdio.h>

int add(int a,int b);//ここに関数を定義しよう

  int main(void) { 
    
     printf("%d+%d=%d",add(3,5));
  }
int add(int a, int b) {// 関数を呼び出そう
    return a + b;
} 
 


    