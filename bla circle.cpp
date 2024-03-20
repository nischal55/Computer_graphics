//BLA circle drawing algo

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){

int h,k,r,x,y,pi;
initwindow(900,900,"BLA circle");


printf("enter the value of h:\n");
scanf("%d",&h);

printf("Enter the value of k:\n");
scanf("%d",&k);

printf("enter the value of radius:\t");
scanf("%d",&r);


x=0;
y=r;
pi=3-2*r;

while(x<=y)
{
if(pi<0){
        /* pi =2*x+3 x ko increment navako value rakhne*/
    x=x+1;
    y=y;
    pi=pi+4*x+6;
}
else{
    x=x+1;
    y=y-1;
    pi=pi+4*(x-y)+10;
}
/* purai circle draw garna lai 8 ota coord chainxa*/
putpixel(x+h,y+k,WHITE);// x,y
putpixel(y+h,x+k,WHITE);//y,x
putpixel(y+h,-x+k,WHITE);//y,-x
putpixel(x+h,-y+k,WHITE);//x,-y
putpixel(-x+h,-y+k,WHITE);//-x,-y
putpixel(-y+h,-x+k,WHITE);//-y,-x
putpixel(-y+h,x+k,WHITE);//-y,x
putpixel(-x+h,y+k,WHITE);//-x,y
}
getch();
closegraph();

//change formula for



}
