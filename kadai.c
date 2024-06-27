/*#include <stdio.h>

int main() {
    int input, sum = 0, count = 0;
    double average;

    while (1) {
        printf("整数を入力してください（終了するには-999）：");
        scanf("%d", &input);

        if (input == -999) {
            break;
        }

        sum += input;
        count++;
    }

    if (count != 0) {
        average = (double)sum / count;
        printf("合計値は%d、平均値は%.3fです。\n", sum, average);
    }
    else {
        printf("値が入力されていません。\n");
    }

    return 0;
}*/

/* 082



#include <stdio.h>

int main() {
    int sum = 0, count = 0;
    int num;

    while (1) {
        printf("整数を入力してください(-999で終了): ");
        scanf("%d", &num);

        if (num == -999) {
            break;
        }
        else if (num < 0) {
            continue;
        }
        else {
            sum += num;
            count++;
        }
    }

    printf("合計: %d\n", sum);
    if (count > 0) {
        printf("平均: %.3f\n", (double)sum / count);
    }
    else {
        printf("平均: 0.000\n");
    }

    return 0;
}


     084

#include <stdio.h>

main() 
{
    int num1, num2;

    while (1) { // 無限ループ
        printf("Enter two numbers:\n");
        scanf("%d%d", &num1, &num2);

        if (num1 == -999 || num2 == -999) {
            printf("Exiting program...\n");
            break; // ループを抜ける
        }
        else if (num2 == 0) {
            printf("Cannot divide by 0. Skipping calculation...\n");
            continue; // ループの先頭に戻る
        }
        else {
            printf("Result: %d / %d = %d, %d %% %d = %d\n", num1, num2, num1/num2, num1, num2, num1%num2);
        }
    }

    return 0;
}                                                    

                                        091

#include<stdio.h>

int main() {
    double a[10] = { 0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size; i++) {
        printf("a[%d]=%.6f\n", i, a[i]);
    }
    return 0;
}*/

                                        

#include<stdio.h>

int main() {
    int a[10] = { 10,20,30,40,50,60,70,80,90 };
    int c[10];
    printf("配列aから配列cにコピー\n");

    // 配列aの各要素を配列cにコピーするforループ
    for (int i = 0; i < 10; i++) {
        c[i] = a[i];
    }

    printf("配列a=");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("配列c=");
    for (int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}