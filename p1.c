#include<stdio.h>
#include<graphics.h>
int main()
{
	int x1,x2,y1,y2;
	printf("type the end points of coordinate\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	
	printf("type the translation factor\n");
	int tx,ty;
	scanf("%d%d",&tx,&ty);
	int x3=x1+tx;
	int x4=x2+tx;
	int y3=y1+ty;
	int y4=y2+ty;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int dx,dy;
	dx=x2-x1;
	dy=y2-y1;
	int step=(dx>dy)?dx:dy;
	
	float xin,yin;

	xin=dx/((float)step);
	yin=dy/((float)step);

	int x=x1,y=y1;
	int i;
	for(i=0;i<=step;i++)
	{	
	putpixel(x,y,WHITE);
	 x=x+xin;
	 y=y+yin;		
	delay(100);
	}


	dx=x4-x3;
	dy=y4-y3;
	step=(dx>dy)?dx:dy;
	
	 xin,yin;

	xin=dx/((float)step);
	yin=dy/((float)step);

	x=x3,y=y3;
	 i;
	for(i=0;i<=step;i++)
	{	
	putpixel(x,y,WHITE);
	 x=x+xin;
	 y=y+yin;		
	delay(100);
	getchar();
	}
}
