#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int i;
    initwindow(500,500,"CAR");
    //int p[]= {300,150,400,300,250,300,300,150};
    //setbkcolor(2);
   // cleardevice();
    //setcolor(5);
    //line(50,50,50,400);
    //line(50,50,200,200);
    //line(50,200,200,200);
    circle(150,150,40);
    circle(130,140,7);
    circle(170,140,7);
    line(50,100,50,100);
    rectangle(100,200,200,300);
    //line(50,200,250,300);
    //line(50,300,250,300);
    //arc(150,150,180,200,90);
    //drawpoly(4,p);
    getch();
    closegraph();
}
