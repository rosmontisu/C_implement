#include <Turboc.h>
#include <stdio.h>

void reflect(char c, int x, int y, int speed);
int dir_x = 1;
int dir_y = 1;

global int g = 10;

int main()
{
	int g = 5;
	char c = '#';
	int x = 20;
	int y = 5;
	int speed = 50;
	
	printf("%d", ::g)
		
	setcursortype(NOCURSOR);
	while(1)
	{	
		x += dir_x;
		y += dir_y;
		reflect(c, x, y, speed);	
	}
}

void reflect(char c, int x, int y, int speed)
{
	gotoxy(x, y);
	putch(c);
	if (x == 1)
	{
		dir_x = 1;
	}		
	if (x == 60)
	{
		dir_x = -1;
	}		
	if (y == 0)
	{
		dir_y = 1;
	}		
	if (y == 20)
	{
		dir_y = -1;
	}
	delay(speed);
}
