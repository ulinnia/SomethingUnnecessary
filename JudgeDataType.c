#include <stdio.h>
#include <string.h>

int main() {
    char input[50]; // 假設輸入的字串長度不超過50

    // 提示用戶輸入字串
    printf("請輸入一個資料型態: ");
    scanf("%s", input);

    // 比對字串
    if (strcmp(input, "int") == 0) {
        printf("%lu\n", sizeof(int));
    } else if (strcmp(input, "short int") == 0) {
        printf("%lu\n", sizeof(short int));
    } else if (strcmp(input, "_Bool") == 0) {
        printf("%lu\n", sizeof(_Bool));
    } else if (strcmp(input, "float") == 0) {
        printf("%lu\n", sizeof(float));
    } else if (strcmp(input, "double") == 0) {
        printf("%lu\n", sizeof(double));
    } else if (strcmp(input, "char") == 0) {
        printf("%lu\n", sizeof(char));
    } else {
        printf("Invalid value\n");
    }

    return 0;
}
