#include <stdio.h>

void calc_sum_avg(int a, int b, int* sum, float* avg) {
    *sum = a + b;   // 2つの数の合計を計算する
    *avg = (float)(*sum) / 2;   // 合計から平均を計算する
}

int main() {
    int num1, num2, sum;
    float avg;

    printf("1つ目の数を入力してください：");
    scanf("%d", &num1);
    printf("2つ目の数を入力してください：");
    scanf("%d", &num2);

    calc_sum_avg(num1, num2, &sum, &avg);  // 関数を呼び出して合計と平均を計算する

    printf("2つの数の合計は %d です。\n", sum);
    printf("2つの数の平均は %f です。\n", avg);

    return 0;
}

　　　　　　　　　　　　　　

//  void calc_sum_and_avg() {
//      int num1, num2, sum;
//      float avg;

//     printf("1つ目の数を入力してください：");
//      scanf("%d", &num1);
//      printf("2つ目の数を入力してください：");
//      scanf("%d", &num2);

//      sum = num1 + num2;  // 2つの数の合計を計算する
//      avg = (float)sum / 2;  // 合計から平均を計算する

//      printf("2つの数の合計は %d です。\n", sum);
//      printf("2つの数の平均は %f です。\n", avg);
//  }

//  int main() {
//      calc_sum_and_avg();  // 関数を呼び出して2つの数の合計と平均を計算する

//      return 0;
//  }