#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14
class arc
{
    float x[10],y[10],theta,ref[10][10],ang;
           float p[10][10],p1[10][10],x1[10],y1[10],xm,ym;
    int i,k,j,n;
    public:
    void get();
    void cal ();
    void map ();
    void graph ();
    void plot ();
    void plot1();
};
void arc::get ()
{
    cout<<"\n ENTER ANGLE OF LINE INCLINATION AND Y INTERCEPT";
    cin>> ang >> b;
    cout <<"\n ENTER NO OF VERTICES";
    cin >> n;
    cout <<"\n ENTER";
    for (i=0; i<n; i++)
    {
        cout<<"\n x["<<i<<"] and y["<<i<<"]";
    }
    theta =(ang * pi)/ 180;
    ref [0] [0] = cos (2 * theta);
    ref [0] [1] = sin (2 * theta);
    ref [0] [2] = -b *sin (2 * theta);
    ref [1] [0] = sin (2 * theta);
    ref [1] [1] = -cos (2 * theta);
    ref [1] [2] = b * (cos (2 * theta)+1);
    ref [2] [0]=0;
    ref [2] [1]=0;
    ref [2] [2] = 1;
}
void arc :: cal ()
{
    for (i=0; i < n; i++)
    {
        p[0] [i] = x [i];
        p [1] [i] = y [i];
        p [2] [i] = 1;
    }
    for (i=0; i<3;i++)
    {
        for (j=0; j<n; j++)
        {
            p1 [i] [j]=0;
            for (k=0;k<3; k++)
        }
        p1 [i] [j] + = ref [i] [k] * p [k] [j];
             }
for (i=0; i<n; i++)
   {
    x1 [i]=p1[0] [i];
    y1 [i] = p1 [1] [i];
    }
}
void arc :: map ()
{
    int gd = DETECT,gm;
    initgraph (&gd, &gm, " ");
            int errorcode = graphresult ();
    /* an error occurred */
    if (errorcode ! = grOK)
    {
        printf ("Graphics error: %s \n", grapherrormsg (errorcode));
        printf ("Press any key to halt:");
        getch ();
        exit (1); /* terminate with an error code */
    }
}
void arc :: graph ()
{
    xm=getmaxx ()/2;
    ym=getmaxy ()/2;
    line (xm, 0, xmm 2*ym);
}
void arc :: plot 1 ()
{
    for (i=0; i <n-1; i++)
    {
        circle (x1[i]+xm, (-y1[i]+ym), 2);
        line (x1[i]+xm, (-y1[i]+ym), x1[i+1]+xm, (-y1[i+1]+ym));
    }
        line (x1[n-1)+xm, (-y1[n-1]+ym), x1[0]+xm, (-y1[0]+ym));
        getch();
}
void arc :: plot ()
{
    for (i=0; i <n-1; i++)
    {
        circle (x1[i]+xm, (-y1[i]+ym, 2);
        line (x1[i]+xm, (-y1[i]+ym), x[i+1]+xm, (-y1[i+1]+ym));
    }
        line (x[n-1]+xm, (-y1[n-1]+ym), x[0]+xm, (-y[0]+ym));
        getch();
}
void main ()
{
    class arc a;
    clrscr();
    a.map();
    a.graph();
    a.get();
    a.cal();
    a.plot();
    a.plot1();
    getch();
}
