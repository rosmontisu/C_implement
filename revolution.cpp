#include <Turboc.h>
#include <math.h>
#define PI 3.1416

int main()
{
	setcursortype(NOCURSOR);
    double angle;
    int x=-1,y=-1;
    
    int first_pos[] = {30, 12};

    clrscr();
    gotoxy(first_pos[0],first_pos[1]);
    putch('x');
    
    int dir[] = {1, 1};

    for (angle=0;;angle+=10) 
	{
		
		if (first_pos[0] == 40)
			dir[0] = -1;
		else if (first_pos[0] == 30)
			dir[0] = 1;
		
		/*
		if (first_pos[1] == 24)
			dir[1] = -1;
		else if (first_pos[1] == 12)
			dir[1] = 1;
			*/
		
			
        if (angle==360)
		{
			angle=10;
			gotoxy(first_pos[0],first_pos[1]);putch(' ');
			first_pos[0] += dir[0];
        	first_pos[1] += dir[1];
        	gotoxy(first_pos[0],first_pos[1]);putch('x'); 			
		} 
        if (kbhit()) break;
        //gotoxy(first_pos[0]+x,first_pos[1]+y);putch(' ');
        
   		
        x=int(cos(angle*PI/180)*20); // x = r * cos
        y=int(sin(angle*PI/180)*10); // y = r * sin
        gotoxy(first_pos[0]+x,first_pos[1]+y);putch('o');
        delay(1);
        
    }
}
