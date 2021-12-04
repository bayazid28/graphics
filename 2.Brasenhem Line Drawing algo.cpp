#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
int gd=DETECT, gm, x1, y1, x2, y2;
printf("Enter the first and second point where x1<x2: ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

initgraph(&gd, &gm, (char*)"");
int dx, dy, p;

dx=abs(x2-x1);
dy=abs(y2-y1);
p=2*dy - dx;

while(x1<=x2){
putpixel(x1,y1,WHITE);
if(p>=0){
y1=y1+1;
p=p+2*dy-2*dx;
}
else{
p=p+2*dy;
}
x1=x1+1;
delay(50);

}
getch();
closegraph();
return 0;
}
