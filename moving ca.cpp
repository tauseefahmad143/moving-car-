#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
    int x;
    initwindow(1000,500);
    setbkcolor(15);
    for(x=0;x<420;x=x+4)
    {
       setcolor(4);
       rectangle(50+x,110,190+x,200);
       rectangle(189+x,160,250+x,200);
       rectangle(189+x,130,230+x,160);
       rectangle(195+x,135,225+x,150);
       arc(232+x,160,0,90,20);
       setcolor(5);
       outtextxy(60+x,150,"Rahul's");
       settextstyle(7,0,4);
       setcolor(5);
       circle(90+x,220,20);
       circle(220+x,220,20);
       setcolor(0);
       line(0,240,639,240);
       delay(120);
       cleardevice();
    }
	getch();
	closegraph();
	return 0;
}
