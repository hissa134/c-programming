#include <stdio.h>

int main() {
    int i=1;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%4d",i*j);
        }
        printf("\n");
    }// 1から10までの掛け算表を表示
    return 0;
}