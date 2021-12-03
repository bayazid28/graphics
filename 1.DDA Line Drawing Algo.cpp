#include<graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
int gd=DETECT, gm;
float dx,dy,x1,y1,x2,y2,m;
printf("Enter the value of x1,y1,x2,y2 where x1<x2: ");
scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
initgraph(&gd,&gm,(char*)"");
dx=abs(x2-x1);
dy=abs(y2-y1);
m=dy/dx;

while(x1<=x2 && y1<=y2){
putpixel(x1,y1,WHITE);
delay(50);
if (m>1){
y1=y1+1;
x1=x1+1/m;
}
else{
x1=x1+1;
y1=y1+m;
}
}
getch();
closegraph();
return 0;
}
