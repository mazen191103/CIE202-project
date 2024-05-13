//Header file for Basic shapes in the game
#pragma once
#include "shape.h"

////////////////////////////////////////////////////  class Rect  ///////////////////////////////////////
//Rectanle class
/*							wdth
					---------------------
					|					|
			hght    |		 x			|     x is the reference point of the rectangle
					|					|
					--------------------
*/


class Rect:public shape
{
	int hght, wdth;	//height and width of the recangle
public:
	Rect(game* r_pGame, point ref, int r_hght, int r_wdth);
	virtual void draw() const;


};


////////////////////////////////////////////////////  class circle  ///////////////////////////////////////
//Reference point of the circle is its center
class circle :public shape
{
	//Add data memebrs for class circle
	int rad;
public:	
	circle(game* r_pGame, point ref, int r);	//add more parameters for the constructor if needed
	virtual void draw() const;
};

////////////////////////////////////////////////////  triangle class  ///////////////////////////////////////

class Triangle : public shape      //ref point is the middle point of the base 
{
	int base, height;
public:
	Triangle(game* r_pGame, point ref, int B, int H);
	virtual void draw() const;
};

////////////////////////////////////////////////////  inverted triangle class  ///////////////////////////////////////
class InvertedTriangle : public shape      //ref point is the middle point of the base 
{
	int base, height;
public:
	InvertedTriangle(game* r_pGame, point ref, int B, int H);
	virtual void draw() const;
};