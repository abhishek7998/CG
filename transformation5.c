#include<stdio.h>
#include<graphics.h>
#include<math.h>

void translate();
void shear_x();
void shear_y();
void scale();
void rotate();

void main()
{
	int ch;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");

	setcolor(6);
	outtextxy (100,88,"Object.");
	line(300, 100, 200, 200);
        line(300, 100, 400, 200);
        line(200, 200, 400, 200);
	delay(1000);

	printf("---MENU---");
	printf("\n 1)Translate\n 2)Shear_x\n 3)Shear_y\n 4)Scale\n 5)Rotate");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	cleardevice();

	switch(ch)
	{
		case 1: translate();
			break;
		case 2: shear_x();
			break;
		case 3: shear_y();
			break;
		case 4: scale();
			break;
		case 5: rotate();
			break;
		default: printf("you have enterd wrong choice");
			break;
	}
	getch();
	closegraph();
}

//Translating
void translate()
{
	int tx,ty;
	setcolor(2);
	outtextxy(240,10,"TRANSLATION");
	outtextxy(238,20,"------------");
	printf("\nEnter tx: ");
	scanf("%d",&tx);
	printf("\nEnter ty: ");
	scanf("%d",&ty);
	cleardevice();
	line(300, 100, 200, 200);
        line(300, 100, 400, 200);
        line(200, 200, 400, 200);
	printf("\nAfter Translation");
	line(300+tx, 100+ty, 200+tx, 200+ty);
        line(300+tx, 100+ty, 400+tx, 200+ty);
        line(200+tx, 200+ty, 400+tx, 200+ty);
}

//Shearing along x
void shear_x()
{
	int sh;
	setcolor(2);
	outtextxy(240,10,"SHEARING");
	outtextxy(238,20,"---------");
	printf("\nEnter sh: ");
	scanf("%d",&sh);
	cleardevice();
	line(300, 100, 200, 200);
        line(300, 100, 400, 200);
        line(200, 200, 400, 200);
	printf("\nAfter Shearing along x");
	line(300+sh*100, 100, 200+sh*200, 200);
        line(300+sh*100, 100, 400+sh*200, 200);
        line(200+sh*200, 200, 400+sh*200, 200);
}

//Shearing along y
void shear_y()
{
	int sh;
	setcolor(2);
	outtextxy(240,10,"SHEARING");
	outtextxy(238,20,"---------");
	printf("\nEnter sh: ");
	scanf("%d",&sh);
	cleardevice();
	line(300, 100, 200, 200);
        line(300, 100, 400, 200);
        line(200, 200, 400, 200);
	printf("\nAfter Shearing along y");
	line(300, 100+sh*300, 200, 200+sh*200);
        line(300, 100+sh*300, 400, 200+sh*400);
        line(200, 200+sh*200, 400, 200+sh*200);
}

//Scaling
void scale()
{
	int sx,sy;
	setcolor(2);
	outtextxy(240,10,"SCALING");
	outtextxy(238,20,"--------");
	printf("\nEnter sx: ");
	scanf("%d",&sx);
	printf("\nEnter sy: ");
	scanf("%d",&sy);
	cleardevice();
	line(300, 100, 200, 200);
        line(300, 100, 400, 200);
        line(200, 200, 400, 200);
	printf("\nAfter Scaling");
	line(300*sx, 100*sy, 200*sx, 200*sy);
        line(300*sx, 100*sy, 400*sx, 200*sy);
        line(200*sx, 200*sy, 400*sx, 200*sy);
}

//Rotating
void rotate()
{
	float theta;
	int x1,x2,x3;
	int y1,y2,y3;
	int ax1,ax2,ax3,ax4,ay1,ay2,ay3,ay4;
	int refx,refy;
	printf("\nEnter the angle for rotation: ");
	scanf("%f",&theta);
	theta=theta*(3.14/180);
	cleardevice();
	setcolor(2);
	outtextxy(240,10,"ROTATE");
	outtextxy(238,20,"-------");
	refx=300;
	refy=100;
	
	x1=300;
	y1=100;
	x2=400;
	y2=200;
	x3=200;
	y3=200;

	ax1=refy+(x1-refx)*cos(theta)-(y1-refy)*sin(theta);
	ay1=refy+(x1-refx)*sin(theta)+(y1-refy)*cos(theta);
	
	ax2=refy+(x2-refx)*cos(theta)-(y2-refy)*sin(theta);
	ay2=refy+(x2-refx)*sin(theta)+(y2-refy)*cos(theta);
	
	ax3=refy+(x3-refx)*cos(theta)-(y3-refy)*sin(theta);
	ay3=refy+(x3-refx)*sin(theta)+(y3-refy)*cos(theta);
	
	line(300, 100, 200, 200);
        line(300, 100, 400, 200);
        line(200, 200, 400, 200);
	line(ax1,ay1,ax2,ay2);
	line(ax2,ay2,ax3,ay3);
	line(ax3,ay3,ax1,ay1);
	
}
