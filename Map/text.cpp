#include <graphics.h>
#include <conio.h>

main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(300,200,80);
    getch();
    closegraph();
}
