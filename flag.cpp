#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int i;
    initwindow(500,500,"CAR");
    int p[]= {300,150,400,300,250,300,300,150};
    setbkcolor(2);
    cleardevice();
    setcolor(5);
    line(50,50,50,400);
    line(50,50,200,200);
    line(50,200,200,200);
    line(50,200, 220,350);
    line(50,350, 220,350);



     getch();
    closegraph();
}
