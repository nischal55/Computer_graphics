#include<stdio.h>
#include<conio.h>
#include<graphics.h>


int boundaryFill(int x,int y,int fill_color, int boundary_color){
//for four connected

if(getpixel(x,y)!=fill_color && getpixel(x,y)!=boundary_color){

    putpixel(x,y,fill_color);

    boundaryFill(x+1,y,fill_color,boundary_color);
    boundaryFill(x-1,y,fill_color,boundary_color);
    boundaryFill(x,y+1,fill_color,boundary_color);
    boundaryFill(x,y-1,fill_color,boundary_color);
}
}

int main(){

    int r,x,y;
    initwindow(700,700,"Boundary Fill Algorithm");
    printf("Enter the value of x and y");
    scanf("%d%d",&x,&y);
    printf("Enter the radius of circle");
    scanf("%d",&r);
    circle(x,y,r);
    boundaryFill(x,y,4,15);
     //0 dekhi 15 samma hunxa color 0 vaneko black, 4 red
    delay(5000);
    closegraph();
    getch();



}
