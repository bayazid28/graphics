#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
int gd=DETECT,gm,tx,ty;
cin>>tx>>ty;
int points[]={340,150,320,110,360,70,400,110,380,150,340,150};
initgraph(&gd,&gm,(char*)"");
drawpoly(6,points);

for(int i=0;i<12;i=i+2){
    points[i]=points[i]+tx;
    points[i+1]=points[i+1]+ty;
}
setcolor(GREEN);
drawpoly(6,points);
getch();
closegraph();
return 0;
}
