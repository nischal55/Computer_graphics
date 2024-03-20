#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
int x,y,x1,x2,y1,y2,dx,dy,step,m;
initwindow(900,900, "DDA Line Drawing Algorithm");
    printf("enter the value of 1st point\n");
    scanf("%d%d",&x1,&x2);
    printf("enter the value of 2nd point\n");
    scanf("%d%d",&y1,&y2);

    dx=abs(x2-x1);
    dy=abs(y2-y1);

    x=x1;
    y=y1;
    m=dy/dx;

    if(dx>dy){
        step = dx;
    }
    else{
        step = dy;
    }
    int i;
    for(i=0; i<step;i++){
        x=x+1;
        y=y+m;
        putpixel(x,y,WHITE);
    }
getch();
closegraph();

}
