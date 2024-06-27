#include <stdio.h>

int main() {
    int number;
    printf("”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
    scanf("%d", &number);

    int sum = 0;
    while (sum < 1000) {
        for (int i = 0; i < number; i++) {
            printf("*");
            sum++;
            if (sum >= 1000) {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}