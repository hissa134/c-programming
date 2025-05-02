#include <stdio.h>

int main() {
    int i=1;
    for (int j = 1; j <= 9; j++) {
        printf(" %d×%d=%d\n",i,j, i * j);
    }// 1の段：1×1〜1×9まで表示
    return 0;
}