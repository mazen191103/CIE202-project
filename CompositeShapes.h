#pragma once
#include "Basicshapes.h"


////////////////////////////////////////////////////  class Sign  ///////////////////////////////////////
//This class reprsents the composite shape "sign"
//The sign is composed of 2 Recatngles
/*				

					 ------------------
					|				   |
					|		 x		   |     x is the reference point of the Sign shape
					|			       |
					 ------------------
						   |   |
						   |   |
						   | . |
						   |   |
						   |   |
							---
*/

//Note: sign reference point is the center point of the top rectangle
class Sign :public shape
{
	Rect* base;
	Rect* top;
public:
	Sign(game* r_pGame, point ref);
	virtual void draw() const;

};

class Icecream :public shape
{
	InvertedTriangle* cone;
	circle* bola;
public:
	Icecream(game* r_pGame, point ref);
	virtual void draw() const;

};

class Car :public shape
{
	Rect* body;
	circle* T1;
	circle* T2;
public:
	Car(game* r_pGame, point ref);
	virtual void draw() const;

};

class Rocket : public shape
{
	circle* wind;
	Rect* body;
	Triangle* top;
	Triangle* tail;

public:
	Rocket(game* r_pGame, point ref);
	virtual void draw() const;

};