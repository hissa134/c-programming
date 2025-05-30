#include <stdio.h>

int main() {
    int score;
    scanf("%d",&score);
    if (score >= 80) {
    printf("合格");
    }else{ 
        printf("不合格"); 
    }
    // scoreが80以上なら「合格」と表示しよう
    return 0;
         
}