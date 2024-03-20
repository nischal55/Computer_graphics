#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
    initwindow(900,900,"Watch");
    circle(350,180,10);
    circle(450,180,10);
    circle(400,200,100);
    rectangle(300, 300, 500, 600);
    line(250,375,300,400);
    line(250,375,300,350);
    line(550,375,500,400);
    line(550,375,500,350);
    getch();
    closegraph();
}

