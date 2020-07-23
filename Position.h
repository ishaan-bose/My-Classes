#pragma once

class Position
{
	//variable name explains the purpose of the variable

	//world position, it stores the position of it regardless if it is on the screen or not
	int world_x = 0;
	int world_y = 0;
	
	//screen position, the position of it on the computer screen
	int screenx = 0;
	int screeny = 0;

	//yes, that's it. Just four variables variables

	int screen_width = 40;
	int screen_height = 20;

	//the above variable are the maximum width and height, because
	//I want the width and height to be constant,case closed.

	//functions:

public:
	//this function only changes the world coordinates of the object
	//it doesn't move it by displaying it moving, it doesn't print 
	//the object to the console
	void Move(int x, int y);
	
	//this function just checks if the object is within boundaries
	void checkBoundaries();	
};
