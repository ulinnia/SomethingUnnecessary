#include<stdio.h>
#include<math.h>

void calculate(int *a, int *b)
{
    int temp = *a;
    *a = pow(*a,*b);
    *b = pow(*b,temp);
}

int main(){
    int a,b;
    int *ptr = &a;
    scanf("%d %d",&a,&b);
    calculate(&a,&b);
    printf("%d %d\n",a,b);
}