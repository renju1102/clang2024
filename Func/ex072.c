#include <stdio.h>

void calc_sum_avg(int a, int b, int* sum, float* avg) {
    *sum = a + b;   // 2�̐��̍��v���v�Z����
    *avg = (float)(*sum) / 2;   // ���v���畽�ς��v�Z����
}

int main() {
    int num1, num2, sum;
    float avg;

    printf("1�ڂ̐�����͂��Ă��������F");
    scanf("%d", &num1);
    printf("2�ڂ̐�����͂��Ă��������F");
    scanf("%d", &num2);

    calc_sum_avg(num1, num2, &sum, &avg);  // �֐����Ăяo���č��v�ƕ��ς��v�Z����

    printf("2�̐��̍��v�� %d �ł��B\n", sum);
    printf("2�̐��̕��ς� %f �ł��B\n", avg);

    return 0;
}

�@�@�@�@�@�@�@�@�@�@�@�@�@�@

//  void calc_sum_and_avg() {
//      int num1, num2, sum;
//      float avg;

//     printf("1�ڂ̐�����͂��Ă��������F");
//      scanf("%d", &num1);
//      printf("2�ڂ̐�����͂��Ă��������F");
//      scanf("%d", &num2);

//      sum = num1 + num2;  // 2�̐��̍��v���v�Z����
//      avg = (float)sum / 2;  // ���v���畽�ς��v�Z����

//      printf("2�̐��̍��v�� %d �ł��B\n", sum);
//      printf("2�̐��̕��ς� %f �ł��B\n", avg);
//  }

//  int main() {
//      calc_sum_and_avg();  // �֐����Ăяo����2�̐��̍��v�ƕ��ς��v�Z����

//      return 0;
//  }