#include<stdio.h>

struct House{
    int roof;
    int door;
    int window;
};

int main(){
    struct House HouseInput;
    scanf("%d %d %d",&HouseInput.roof, &HouseInput.door, &HouseInput.window);
    int DoorCan,RoofCan,WinCan;
    DoorCan = HouseInput.door/2;
    RoofCan = HouseInput.roof/1;
    WinCan = HouseInput.window/6;
    int CanBuild = 0;
    if (DoorCan<RoofCan){
        CanBuild = DoorCan;
    }else{
        CanBuild = RoofCan;
    } 
    if (CanBuild>WinCan){
        CanBuild = WinCan;
    }
    printf("%d\n",CanBuild);
}