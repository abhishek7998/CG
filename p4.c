#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	printf("type the coordinate respectively\n");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

	printf("type for option\n1.reflection about x-axis\n2.reflection about y-axis\n3.reflection about both\n");
	int op;
	scanf("%d",&op);

	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	printf("before reflection\n");

	line(x1,y1,x2,y2);
	line(x3,y3,x2,y2);
	line(x1,y1,x3,y3);

	
	if(op==1)
	{
		y1=-1*y1 +350;
		y2=-1*y2 +350;
		y3=-1*y3 +350;
	}
	else if(op==2)
	{
		x1=-1*x1 +350;
		x2=-1*x2 +350;
		x3=-1*x3 +350;
	}
	else if(op==3)
	{
		y1=-1*y1 +350;
		y2=-1*y2 +350;
		y3=-1*y3 +350;

		x1=-1*x1 +350;
		x2=-1*x2 +350;
		x3=-1*x3 +350;
	}
	
	
	printf("after reflection\n");
	
	line(x1,y1,x2,y2);
	line(x3,y3,x2,y2);
	line(x1,y1,x3,y3);

	getchar();
	
}
