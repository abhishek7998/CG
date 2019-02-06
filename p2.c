#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	delay(1000);
	setcolor(6);

	printf("type the coordinate respectively\n");
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	outtextxy (100,88,"Object.");
	line(x1,y1,x2,y2);
	line(x3,y3,x2,y2);
	line(x1,y1,x4,y4);
	line(x3,y3,x4,y4);
	delay(1000);
	cleardevice();

	int sx,sy;
	setcolor(2);
	outtextxy(240,10,"SCALING");
	outtextxy(238,20,"--------");
	printf("type scaling factor\n");
	scanf("%d%d",&sx,&sy);
	cleardevice();

	line(x1,y1,x2,y2);
	line(x3,y3,x2,y2);
	line(x1,y1,x4,y4);
	line(x3,y3,x4,y4);
	printf("after scaling\n");
	line(x1*sx,y1*sy,x2*sx,y2*sy);
	line(x3*sx,y3*sy,x2*sx,y2*sy);
	line(x1*sx,y1*sy,x4*sx,y4*sy);
	line(x3*sx,y3*sy,x4*sx,y4*sy);
	delay(1000);
	closegraph();
}

