#include<stdio.h>
#include<math.h>

struct point{
    double x, y;
};

struct circle{
    struct point center;
    double r;
};

int main(){
    struct circle C1,C2;
    scanf("%lf %lf %lf %lf %lf %lf",&C1.center.x, &C1.center.y, &C1.r, &C2.center.x, &C2.center.y, &C2.r);
    double distance = sqrt(pow(C2.center.x-C1.center.x, 2)+ pow(C2.center.y-C1.center.y, 2));
    if(((distance+C2.r)<C1.r) || ((distance+C1.r)<C2.r)){
        printf("3\n");
    }else if (C1.center.x==C2.center.x && C1.center.y==C2.center.y && C1.r==C2.r){
        printf("2\n");
    }else if (distance<=C1.r+C2.r){
        printf("4\n");
    }else if (distance>C1.r+C2.r){
        printf("1\n");
    }
}