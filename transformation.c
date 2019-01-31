#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int x1,y1,x2,y2;
void translation()
{
int tx,ty,xn1,xn2,yn1,yn2;
printf("Enter the Translation Vector:");
scanf("%d\n%d",&tx,&ty);
cleardevice();
outtextxy(400,100,"TRANSLATION");
xn1=x1+tx;
yn1=y1+ty;
xn2=x2+tx;
yn2=y2+ty;
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();



}
void scaling()
{
int xn1,yn1,xn2,yn2;
float sx,sy;
printf("Enter the Sacling Factor:");
scanf("%f\n%f",&sx,&sy);
cleardevice();
outtextxy(300,200,"SCALING");
xn1=x1*sx;
yn1=y1*sy;
xn2=x2*sx;
yn2=y2*sy;
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}
void rotation()
{
int r;
float rx,xn1,yn1,xn2,yn2;
printf("Enter the Angle for Rotation:");
scanf("%d",&r);
cleardevice();
outtextxy(500,200,"ROTATION");
rx=(r*3.14)/180;
xn1=x1*cos(rx)-y1*sin(rx);
yn1=y1*cos(rx)+x1*sin(rx);
xn2=x2*cos(rx)-y2*sin(rx);
yn2=y2*cos(rx)+x2*sin(rx);
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}
void shearing()
{
int sh;
float xn1,yn1,xn2,yn2;
printf("Enter the value of Shearing");
scanf("%d",&sh);
cleardevice();
outtextxy(500,100,"SHEARING");
xn1=x1+sh*y1;
yn1=y1;
xn2=x2+sh*y2;
yn2=y2;
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}
void reflection()
{
int xn1,yn1,xn2,yn2;
cleardevice();
outtextxy(300,100,"REFLECTION");
if((x1<y1)^(x2<y2))
{
xn1=x1+50;
xn2=x2+50;
yn1=y1;
yn2=y2;
}
else
{
xn1=x1;
xn2=x2;
yn1=y1+50;
yn2=y2+50;
}
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}
void get()
{
int xn1,yn1,xn2,yn2;
printf("Enter the Co-ordinates x1,y1,x2,y2:");
scanf("%d\n%d\n%d\n%d\n",&x1,&y1,&x2,&y2);
cleardevice();
outtextxy(200,100,"ORIGINAL OBJECT");
line(x1,y1,x2,y2);
line(xn1,yn1,xn2,yn2);
getch();
}
void main()
{
int ch,gd=DETECT,gm;
initgraph(&gd,&gm,"C:/tc/bgi");
get();
do
{
cleardevice();
outtextxy(10,10,"1.Translation");
outtextxy(10,20,"2.Scaling");
outtextxy(10,30,"3.Rotation");
outtextxy(10,40,"4.Shearing");
outtextxy(10,50,"5.Reflection");
outtextxy(10,60,"6.Exit");
outtextxy(10,70,"Enter Your Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
translation();
break;
}
case 2:
{
scaling();
break;
}
case 3:
{
rotation();
break;
}
case 4:
{
shearing();
break;
}
case 5:
{
reflection();
break;
}
case 6:
{
exit(0);
break;
}
}
}
while(ch<6);
}
