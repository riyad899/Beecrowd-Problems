#include<stdlib.h>
#include <math.h>
#include<graphics.h>
#include<dos.h>
void tree(float x,float y,float len, float a,float b)
if (len<20)
{
}
delay(50);
setcolor (14);
circle(x,y,5);
setcolor (100);
circle(x,y,6);
return;
float x1,y1;
settextstyle (1,0,1);
setcolor (14);
outtextxy (150,5, "CREATED BY: SANTU THACH ")
setcolor(10);
x1=x+len*cos(3.1428*a/180);
y1=y-len*sin(3.1428*a/180);
line(x,y,x1, y1);
tree (x1, y1, len*0.75,a-b,b);
tree (x1,y1, len*0.75,a-b,-b);
void main()
{
}
int gd=0,gm, i, rd;
float x=320,y=550,t=140;
clrscr();
initgraph(&gd,&gm, "C://TurboC3)"
for(i=0;i<=3; i++)

{
tree(x+i,y,t, 90,30);
tree(x+i,y,t,90,-30);
}
getch();
closegraph();_