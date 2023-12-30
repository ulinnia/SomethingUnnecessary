#include<stdio.h>

void Exchange(){
    char a,b;
    scanf("%hhd%hhd",&a,&b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("After exchange.............\na = %hhd\nb = %hhd\n", a, b);
}

void Exchange2(){
    int a, b;
    a = 8;
    b = 5;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d\n%d\n",a,b);
}

int main(){
    int a = 5428;
    a ^= 123;
    printf("%d\n",a);
    a ^= 123;
    printf("%d\n",a);
    Exchange();
    return 0; 
}