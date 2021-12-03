#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
int gd=DETECT,gm,tx,ty;
cin>>tx>>ty;
int points[]={320,120,420,300,250,300,320,120};
initgraph(&gd,&gm,(char*)"");
drawpoly(4,points);

for(int i=0;i<8;i=i+2){
    points[i]=points[i]+tx;
    points[i+1]=points[i+1]+ty;
}
setcolor(RED);
drawpoly(4,points);
getch();
closegraph();
return 0;
}
