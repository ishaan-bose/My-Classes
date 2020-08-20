#include "Position.hpp"

void Position::Move(int x, int y)
{
	world_x += x;
	world_y += y;
}

bool Position::checkBoundaries()
{
	//just checking if the position is inside game window or not
	if ((world_x > screen_width) || (world_x < 0))
		return false;
	else if ((world_y > screen_width) || (world_y < 0))
		return false;

	//return true by default
	return true;
}

Position Position::left()
{
	Position a;
	a.world_x = world_x - 1;
	a.world_y = world_y;

	return a;
}

Position Position::right()
{
	Position a;
	a.world_x = world_x + 1;
	a.world_y = world_y;

	return a;
}

Position Position::up()
{
	Position a;
	a.world_x = world_x;
	a.world_y = world_y + 1;

	return a;
}

Position Position::down()
{
	Position a;
	a.world_x = world_x;
	a.world_y = world_y - 1;

	return a;
}

Position::Position(int x, int y)
	:world_x{ x }, world_y{ y }
{
}

//Q: Why do I have this function over here?
//A: CUZ I SAID SOOOOO!!!!!
bool Position::operator==(const Position& rhs)
{
	return (world_x == rhs.world_x && world_y == rhs.world_y);
}

//Note that this is a friend function and not part of the class
//also it is for debugging only
std::ostream& operator<<(std::ostream& os, Position& obj)
{
	//only diplays world position, wether its visible or not
	os << "world position x: " << obj.world_x << " world position y: " << obj.world_y;

	return os;
}
