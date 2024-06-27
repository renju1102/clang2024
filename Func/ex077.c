#include <stdio.h>
#include <string.h>

int swapChars(char* str1, char* str2) {
    int count = 0;
    int len1 = strlen(str1), len2 = strlen(str2);
    int len = len1 < len2 ? len1 : len2; // 2つの文字列の長さのうち、短い方に合わせる
    for (int i = 0; i < len; i++) {
        if (str1[i] != str2[i]) {
            // 2つの文字が異なる場合、入れ替える
            char temp = str1[i];
            str1[i] = str2[i];
            str2[i] = temp;
            count++;
        }
    }
    if (len1 != len2) {
        // 2つの文字列の長さが異なる場合、残りの文字列を入れ替える
        char* longer = len1 > len2 ? str1 : str2;
        for (int i = len; i < strlen(longer); i++) {
            char temp = longer[i];
            if (longer == str1) {
                str1[i] = str2[len + i];
                str2[len + i] = temp;
            }
            else {
                str2[i] = str1[len + i];
                str1[len + i] = temp;
            }
            count++;
        }
    }
    return count;
}

int main() {
    char str1[100], str2[100];
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    int count = swapChars(str1, str2);
    printf("Number of swapped characters: %d\n", count);
    printf("%s %s\n", str1, str2);
    return 0;
}