/*#include <stdio.h>

int main() {
    int input, sum = 0, count = 0;
    double average;

    while (1) {
        printf("��������͂��Ă��������i�I������ɂ�-999�j�F");
        scanf("%d", &input);

        if (input == -999) {
            break;
        }

        sum += input;
        count++;
    }

    if (count != 0) {
        average = (double)sum / count;
        printf("���v�l��%d�A���ϒl��%.3f�ł��B\n", sum, average);
    }
    else {
        printf("�l�����͂���Ă��܂���B\n");
    }

    return 0;
}*/

/* 082



#include <stdio.h>

int main() {
    int sum = 0, count = 0;
    int num;

    while (1) {
        printf("��������͂��Ă�������(-999�ŏI��): ");
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

    printf("���v: %d\n", sum);
    if (count > 0) {
        printf("����: %.3f\n", (double)sum / count);
    }
    else {
        printf("����: 0.000\n");
    }

    return 0;
}


     084

#include <stdio.h>

main() 
{
    int num1, num2;

    while (1) { // �������[�v
        printf("Enter two numbers:\n");
        scanf("%d%d", &num1, &num2);

        if (num1 == -999 || num2 == -999) {
            printf("Exiting program...\n");
            break; // ���[�v�𔲂���
        }
        else if (num2 == 0) {
            printf("Cannot divide by 0. Skipping calculation...\n");
            continue; // ���[�v�̐擪�ɖ߂�
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
    printf("�z��a����z��c�ɃR�s�[\n");

    // �z��a�̊e�v�f��z��c�ɃR�s�[����for���[�v
    for (int i = 0; i < 10; i++) {
        c[i] = a[i];
    }

    printf("�z��a=");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("�z��c=");
    for (int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}