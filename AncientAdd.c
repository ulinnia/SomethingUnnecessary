#include<stdio.h>

void CountFunction(char *str, int *TenDigit, int *Digit){
    *TenDigit = 0;
    *Digit = 0;

    int sum = 0;
    while (*str != '\0'){
        if (*str == '+'){
            sum += (10*(*TenDigit)+*Digit);
            printf("%d + ",10*(*TenDigit)+*Digit);
            *TenDigit = 0;
            *Digit = 0;
        }else if (*str == '<'){
            (*TenDigit)++;
        }else if (*str == '/'){
            (*Digit)++;
        }
        str++;
    }
    sum += 10*(*TenDigit)+*Digit;
    printf("%d = %d\n", 10*(*TenDigit)+*Digit, sum);
}

int main(){
    char input[100];
    fgets(input, sizeof(input), stdin);

    int TenDigit, Digit;
    CountFunction(input, &TenDigit, &Digit);
    return 0;
}