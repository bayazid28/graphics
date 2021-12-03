#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
int gd=DETECT,gm,tx,ty,x,y;
cin>>x>>y>>tx>>ty;
initgraph(&gd,&gm,(char*)"");
putpixel(x,y,WHITE);
x= x+tx;
y= y+ty;
putpixel(x,y,WHITE);
getch();
closegraph();
return 0;
}
