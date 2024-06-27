#include<stdio.h>
#define SIZE 5 // 配列のサイズ
int main()
{
    int d[SIZE] = { 30, 7, 25, 16, 10 };
    int i, j, k, tmp, left, right, last;

    printf("ソート前\n");
    for (i = 0; i < SIZE; i++) {
        printf("d[%d]:%d\n", i, d[i]);
    }

    left = 0;
    right = SIZE - 1;
    last = right;

    while (left < right) {
        // 右にソート
        for (i = left; i < right; i++) {
            if (d[i] > d[i + 1]) {
                tmp = d[i];
                d[i] = d[i + 1];
                d[i + 1] = tmp;
                last = i;
            }
        }
        right = last;

        // 左にソート
        for (i = right; i > left; i--) {
            if (d[i] < d[i - 1]) {
                tmp = d[i];
                d[i] = d[i - 1];
                d[i - 1] = tmp;
                last = i;
            }
        }
        left = last;
    }

    printf("ソート後\n");
    for (i = 0; i < SIZE; ++i) {
        printf("d[%d]:%d\n", i, d[i]);
    }
    return 0;
}