#pragma once

#include <iostream>

class Position
{
	//variable name explains the purpose of the variable

	int world_x = 0;
	int world_y = 0;

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
	bool checkBoundaries();

	//returns a position left , right , up ,or down of this position
	Position left();
	Position right();
	Position up();
	Position down();

	//constructor to initialize Position
	Position(int x, int y);

	//default Position Constructor
	Position() = default;

	//overloaded equality check operator
	bool operator==(const Position& rhs);

	//this function is for debugging purposes only
	friend std::ostream& operator<<(std::ostream& os, Position& obj);
};
