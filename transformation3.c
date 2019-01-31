
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define pi 3.14
int p1[3][3]={0,0,0,0,0,0,0,0,0};
int p[3][3]={0,0,0,0,0,0,1,1,1};
void translate(int p[3][3],int,int);
void scaling(int p[3][3],int,int);
void rotate(int p[3][3],double);
void main()
{
            int gd,gm,x1,x2,y1,y2,i,j,choice;
            int tx,ty,sx,sy;
            double theta;
            clrscr();
            detectgraph(&gd,&gm);
            initgraph(&gd,&gm,"c:\\tc\\bgi");
            printf("Enter the co-ordinates of the line\n");
            printf("Values of x1 and y1\n");
            scanf("%d%d",&p[0][0],&p[1][0]);
            printf("Values of x2 and y2\n");
            scanf("%d%d",&p[0][1],&p[1][1]);
            line(p[0][0],p[1][0],p[0][1],p[1][1]);
            while(1)
            {
                        printf("Enter your choice\n");
                        printf("1. Translation\n2. Rotation\n3. Scaling\n4. Exit\n");
                        scanf("%d",&choice);
                        switch(choice)
                        {
                                    case 1:
                                                printf("Enter value of tx and ty\n");
                                                scanf("%d%d",&tx,&ty);
                                                translate(p,tx,ty);
                                                printf("%d %d %d %d",p[0][0],p[0][1],p[1][0],p[1][1]);
                                                line(p[0][0],p[1][0],p[0][1],p[1][1]);
                                                break;
                                    case 2:
                                                printf("Enter values of angle of rotation\n");
                                                scanf("%lf",&theta);
                                                rotate(p,theta);
                                                line(p[0][0],p[1][0],p[0][1],p[1][1]);
                                                break;
                                    case 3:
                                                printf("Enter values of scaling factors\n");
                                                scanf("%d%d",&sx,&sy);
                                                scaling(p,sx,sy);
                                                line(p[0][0],p[1][0],p[0][1],p[1][1]);
                                                break;
                                    case 4:
                                                exit(0);
                                    default:
                                                printf("You entered wrong choice\n");
                        }
            }
}
void copy(int p1[3][3])
{
            int i,j;
            for(i=0;i<3;i++)
            {
                        for(j=0;j<3;j++)
                        {
                                    p[i][j]=p1[i][j];
                        }
            }
}
//Scaling
void scaling(int p[3][3],int sx,int sy)
{
            int i,j,k;
            int s[3][3]={0,0,0,0,0,0,0,0,1};
            s[0][0]=sx;
            s[1][1]=sy;
            for(i=0;i<3;i++)
            {
                        for(j=0;j<3;j++)
                        {
                                    p1[i][j]=0;
                                    for(k=0;k<3;k++)
                                    {
                                                p1[i][j]+=s[i][k]*p[k][j];
                                    }
                        }
            }
            copy(p1);
}


//Translation
void translate(int p[3][3],int tx,int ty)
{
            int i,j,k;
            int t[3][3]={1,0,0,0,1,0,0,0,1};
            t[0][2]=tx;
            t[1][2]=ty;
            for(i=0;i<3;i++)
            {
                        for(j=0;j<3;j++)
                        {
                                    p1[i][j]=0;
                                    for(k=0;k<3;k++)
                                    {
                                                p1[i][j]+=t[i][k]*p[k][j];
                                    }
                                    printf("%d\t",p1[i][j]);
                        }
                        printf("\n");
            }
            copy(p1);
}
//Rotation
void rotate(int p[3][3],double theta)
{
            int i,j,k;
            double st,ct;
            double r[3][3]={0,0,0,0,0,0,0,0,1};
            st=sin((theta*pi)/180);
            ct=cos((theta*pi)/180);
            r[0][0]=r[1][1]=ct;
            r[0][1]=-st;
            r[1][0]=st;
            for(i=0;i<3;i++)
            {
                        for(j=0;j<3;j++)
                        {
                                    p1[i][j]=0;
                                    for(k=0;k<3;k++)
                                    {
                                                p1[i][j]+=r[i][k]*p[k][j];
                                    }
                        }
            }
            copy(p1);
}
