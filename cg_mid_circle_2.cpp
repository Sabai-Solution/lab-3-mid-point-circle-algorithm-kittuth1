//mid point circle algorithm
//#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void drawcircle_mp(int,int,int);


main()
{
/* request auto detection */
//int gdriver = DETECT, gmode, errorcode;
int xc,yc,r;
/* initialize graphics and local
variables */
//initgraph(&gdriver, &gmode, "\\tc\\bgi");
/* read result of initialization */
//errorcode = graphresult();
//if (errorcode != grOk) /* an error
//occurred */

printf("Enter the center co-ordinates:");
scanf("%d%d",&xc,&yc);
printf("Enter the radius");
scanf("%d",&r);

drawcircle_mp(xc,yc,r);

getch();
//closegraph();
}



void drawcircle_mp(int xc,int yc,int r)
{
int x = 0, y=r, p = 1-r;
printf("\nO1: x=%d \t y=%d ",x,y);
printf("\nO2: x=%d \t y=%d ",y,x);
printf("\nO3: x=%d \t y=%d",y,x);


while(x<y)
{
x++;
if(p<0)
p += 2*x+1;
else
{
y--;
p += 2*(x-y)+1;
}
printf("\n x=%d \t y=%d",x,y);
}
}




