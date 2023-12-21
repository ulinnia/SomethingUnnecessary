#include<stdio.h>
#include<math.h>

void calculate(int *a, int *b)  //接收a和b的位址(int *)
{
    int temp = *a;              //temp暫存a的值(*)
    *a = pow(*a,*b);            //將兩個位址的值做次方運算
    *b = pow(*b,temp);          //位址的值改變，main函數裡a、b的值跟著改變
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);   //輸入兩個數
    calculate(&a,&b);       //將a的位址b的位址丟進calculate函數運算
    printf("%d %d\n",a,b);  //印出a的b次方，和b的a次方
}