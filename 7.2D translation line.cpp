#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
int gd=DETECT,gm,tx,ty,x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2>>tx>>ty;
initgraph(&gd,&gm,(char*)"");
line(x1,y1,x2,y2);
x1=x1+tx;
y1=y1+ty;
x2=x2+tx;
y2=y2+ty;
setcolor(GREEN);
line(x1,y1,x2,y2);
getch();
closegraph();
return 0;
}
