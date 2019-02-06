#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
	double x1,x2,x3,x,y1,y2,y3,y;
	printf("type the coordinate respectively\n");
	//printf("%lf",cos(3.14/4.0));
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);

	
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	printf("before reflection\n");

	line(x1,y1,x2,y2);
	line(x3,y3,x2,y2);
	line(x1,y1,x3,y3);

	
		x1-=50;
		y1-=50;

		x2-=50;
		y2-=50;

		x3-=50;
		y3-=50;

		x=x1;
		y=y1;

		x1=cos(3.14/4.0)*x -sin(3.14/4.0)*y;
		y1=sin(3.14/4.0)*x+cos(3.14/4.0)*y;		

		x=x2;
		y=y2;

		x2=cos(3.14/4.0)*x -sin(3.14/4.0)*y;
		y2=sin(3.14/4.0)*x+cos(3.14/4.0)*y;


		x=x3;
		y=y3;
		
		x3= cos(3.14/4.0)*x -sin(3.14/4.0)*y;
		y3=sin(3.14/4.0)*x+cos(3.14/4.0)*y;

		
		x1+=50;
		y1+=50;

		x2+=50;
		y2+=50;

		x3+=50;
		y3+=50;


	printf("after reflection\n");
	
	line(x1,y1,x2,y2);
	line(x3,y3,x2,y2);
	line(x1,y1,x3,y3);

	getchar();
	
}
