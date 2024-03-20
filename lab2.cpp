#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    //int i;
    initwindow(900,900,"lab");
    //for(i=0;i<=15;i++)
    //{
      //  setbkcolor(i);
        //cleardevice();
        //delay(2000);
    //}
    circle(400,320,270);
    circle(400,320,300);
    outtextxy(400,70,"12");
    outtextxy(400,550,"6");
    outtextxy(640,320,"3");
    outtextxy(180,320,"9");
    line(400,320,400,50);
    line(400,320,400,500);

    getch();
    closegraph();
}
