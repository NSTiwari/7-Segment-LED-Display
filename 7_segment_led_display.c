#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
ledcolor();
getch();
cleardevice();
return 0;
}
ledcolor()
{
int a;
printf("Enter a number between 0-9\n");
scanf("%d",&a);
cleardevice();
setcolor(GREEN);
outtextxy(225,430,"7-Segment LED");
if(a==0)
{
setcolor(RED);
line(215,60,335,60);       /*segment a ON*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(205,90,205,210);   /*segment b ON*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(205,250,205,370);   /*segment c ON*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);

line(215,380,335,380);       /*segment d ON*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(345,250,345,370);      /*segment e ON*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);

line(345,90,345,210);   /*segment f ON*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);

setcolor(00);
line(215,220,335,220);       /*segment g OFF*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);

setfillstyle(SOLID_FILL,RED);
floodfill(250,70,RED);        //segment a ON
floodfill(190,150,RED);       //segment b ON
floodfill(195,300,RED);       //segment c ON
floodfill(250,390,RED);       //segment d ON
floodfill(355,300,RED);       //segment e ON
floodfill(355,150,RED);       //segment f ON
}
else if(a==1)
{
setcolor(RED);
line(345,250,345,370);      /*segment e ON*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);

line(345,90,345,210);   /*segment f ON*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);
setfillstyle(SOLID_FILL,RED);
floodfill(355,300,RED);        //segment e ON
floodfill(355,150,RED);        //segment f ON
setcolor(00);
line(215,60,335,60);       /*segment a OFF*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(205,90,205,210);   /*segment b OFF*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(205,250,205,370);   /*segment c OFF*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);

line(215,380,335,380);       /*segment d OFF*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(215,220,335,220);       /*segment g OFF*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);
}
else if(a==2)
{
setcolor(RED);
line(215,60,335,60);       /*segment a ON*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(205,250,205,370);   /*segment c ON*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);

line(215,380,335,380);       /*segment d ON*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(345,90,345,210);   /*segment f ON*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);

line(215,220,335,220);       /*segment g ON*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);
setfillstyle(SOLID_FILL,RED);
floodfill(250,70,RED);         //segment a ON
floodfill(195,300,RED);        //segment c ON
floodfill(250,390,RED);        //segment d ON
floodfill(355,150,RED);        //segment f ON
floodfill(250,230,RED);        //segment g ON
setcolor(00);
line(205,90,205,210);   /*segment b OFF*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(345,250,345,370);      /*segment e OFF*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);
}
else if(a==3)
{
setcolor(RED);
line(215,60,335,60);       /*segment a OFF*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(215,380,335,380);       /*segment d OFF*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(345,250,345,370);      /*segment e OFF*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);

line(365,370,355,380);
line(345,90,345,210);   /*segment f OFF*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);

line(215,220,335,220);       /*segment g OFF*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);
setfillstyle(SOLID_FILL,RED);
floodfill(250,70,RED);         //segment a ON
floodfill(250,390,RED);        //segment d ON
floodfill(355,300,RED);        //segment e ON
floodfill(355,150,RED);        //segment f ON
floodfill(250,230,RED);        //segment g ON
setcolor(00);
line(205,90,205,210);   /*segment b OFF*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(205,250,205,370);   /*segment c OFF*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);
}
else if(a==4)
{
setcolor(RED);
line(205,90,205,210);   /*segment b ON*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(345,250,345,370);      /*segment e ON*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);


line(345,90,345,210);   /*segment f ON*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);

line(215,220,335,220);       /*segment g ON*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);
setfillstyle(SOLID_FILL,RED);
floodfill(190,150,RED);       //segment b ON
floodfill(355,300,RED);       //segment e ON
floodfill(355,150,RED);       //segment f ON
floodfill(250,230,RED);       //segment g ON
setcolor(00);
line(215,60,335,60);       /*segment a OFF*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(205,250,205,370);   /*segment c OFF*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);

line(215,380,335,380);       /*segment d OFF*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);
}
else if(a==5)
{
setcolor(RED);
line(215,60,335,60);       /*segment a ON*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(205,90,205,210);   /*segment b ON*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(215,380,335,380);       /*segment d ON*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(345,250,345,370);      /*segment e ON*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);

line(215,220,335,220);       /*segment g ON*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);
setfillstyle(SOLID_FILL,RED);
floodfill(250,70,RED);        //segment a ON
floodfill(190,150,RED);       //segment b ON
floodfill(250,390,RED);       //segment d ON
floodfill(355,300,RED);       //segment e ON
floodfill(250,230,RED);       //segment g ON
setcolor(00);
line(205,250,205,370);   /*segment c OFF*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);

line(345,90,345,210);   /*segment f OFF*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);
}
else if(a==6)
{
setcolor(RED);
line(215,60,335,60);       /*segment a ON*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(205,90,205,210);   /*segment b ON*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(205,250,205,370);   /*segment c ON*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);

line(215,380,335,380);       /*segment d ON*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(345,250,345,370);      /*segment e ON*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);

line(215,220,335,220);       /*segment g ON*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);
setfillstyle(SOLID_FILL,RED);
floodfill(250,70,RED);         //segment a ON
floodfill(190,150,RED);        //segment b ON
floodfill(195,300,RED);        //segment c ON
floodfill(250,390,RED);        //segment d ON
floodfill(355,300,RED);        //segment e ON
floodfill(250,230,RED);        //segment g ON
setcolor(00);
line(345,90,345,210);   /*segment f OFF*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);
}
else if(a==7)
{
setcolor(RED);
line(215,60,335,60);       /*segment a ON*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(345,250,345,370);      /*segment e ON*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);


line(345,90,345,210);   /*segment f ON*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);
setfillstyle(SOLID_FILL,RED);
floodfill(250,70,RED);         //segment a ON
floodfill(355,300,RED);        //segment e ON
floodfill(355,150,RED);        //segment f ON
setcolor(00);
line(205,90,205,210);   /*segment b OFF*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(205,250,205,370);   /*segment c OFF*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);

line(215,380,335,380);       /*segment d OFF*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(215,220,335,220);       /*segment g OFF*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);
}
else if(a==8)
{
setcolor(RED);
line(215,60,335,60);       /*segment a ON*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);
line(205,90,205,210);   /*segment b ON*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(205,250,205,370);   /*segment c ON*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);

line(215,380,335,380);       /*segment d ON*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(345,250,345,370);      /*segment e ON*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);


line(345,90,345,210);   /*segment f ON*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);

line(215,220,335,220);       /*segment g ON*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);

setfillstyle(SOLID_FILL,RED);
floodfill(250,70,RED);         //segment a ON
floodfill(190,150,RED);        //segment b ON
floodfill(195,300,RED);        //segment c ON
floodfill(250,390,RED);        //segment d ON
floodfill(355,300,RED);        //segment e ON
floodfill(355,150,RED);        //segment f ON
floodfill(250,230,RED);        //segment g ON

}
else if(a==9)
{
setcolor(RED);
line(215,60,335,60);       /*segment a ON*/
line(335,60,350,70);
line(335,80,350,70);
line(215,80,335,80);
line(200,70,215,80);
line(200,70,215,60);

line(205,90,205,210);   /*segment b ON*/
line(205,90,195,80);
line(195,80,185,90);
line(195,220,185,210);
line(185,90,185,210);
line(205,210,195,220);

line(215,380,335,380);       /*segment d ON*/
line(335,380,350,390);
line(335,400,350,390);
line(215,400,335,400);
line(200,390,215,400);
line(200,390,215,380);

line(345,250,345,370);      /*segment e ON*/
line(345,250,355,240);
line(365,250,355,240);
line(365,250,365,370);
line(345,370,355,380);
line(365,370,355,380);


line(345,90,345,210);   /*segment f ON*/
line(345,90,355,80);
line(355,80,365,90);
line(355,220,365,210);
line(365,90,365,210);
line(345,210,355,220);

line(215,220,335,220);       /*segment g ON*/
line(335,220,350,230);
line(335,240,350,230);
line(215,240,335,240);
line(200,230,215,240);
line(200,230,215,220);
setfillstyle(SOLID_FILL,RED);
floodfill(250,70,RED);         //segment a ON
floodfill(190,150,RED);        //segment b ON
floodfill(250,390,RED);        //segment d ON
floodfill(355,300,RED);        //segment e ON
floodfill(355,150,RED);        //segment f ON
floodfill(250,230,RED);        //segment g ON
setcolor(00);
line(205,250,205,370);   /*segment c OFF*/
line(205,250,195,240);
line(185,250,195,240);
line(185,370,195,380);
line(205,370,195,380);
line(185,250,185,370);
}
else
printf("Error");
return 0;
}
