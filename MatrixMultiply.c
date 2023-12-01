#include<stdio.h>
#include<stdbool.h>

void ArrayMultiply(int A_X,int A_Y,int B_X,int B_Y){
    int MatrixA[A_X][A_Y],MatrixB[B_X][B_Y],MatrixC[B_X][A_Y];
    for (int i = 0; i < A_Y; i++){
        for (int j = 0; j < A_X; j++){
            int temp;
            scanf("%d",&temp);
            MatrixA[j][i] = temp;
        }
    }
    for (int i = 0; i < B_Y; i++){
        for (int j = 0; j < B_X; j++){
            int temp;
            scanf("%d",&temp);
            MatrixB[j][i] = temp;
        }
    }
    int sum=0;
    for (int i = 0; i < A_Y; i++){
        for (int j=0; j< B_X; j++){
            for (int k=0; k < A_X; k++){
                sum += MatrixA[k][i]*MatrixB[j][k];
            }
            MatrixC[j][i] = sum;
            sum = 0;
        }
    }
    for (int i=0; i<A_Y; i++){
        for(int j=0; j<B_X; j++){
            printf("%d ",MatrixC[j][i]);
            if (j==(B_X-1)){
                printf("\n");
            }
        }
    }
}

int main(){
    int A_X,A_Y,B_X,B_Y;
    bool CanDo;
    scanf("%d%d%d%d",&A_X,&A_Y,&B_X,&B_Y);
    if(A_X==B_Y){
        CanDo=true;
    }else{
        CanDo=false;
    }
    (CanDo)? ArrayMultiply(A_X,A_Y,B_X,B_Y):printf("Wrong size!\n");
}
