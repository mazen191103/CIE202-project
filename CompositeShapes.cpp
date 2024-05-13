#include "CompositeShapes.h"
#include "gameConfig.h"

////////////////////////////////////////////////////  class Sign  ///////////////////////////////////////
Sign::Sign(game* r_pGame, point ref):shape(r_pGame, ref)
{
	//calc the ref point of the Sign base and top rectangles relative to the Sign shape
	point topRef = ref;	//top rect ref is the same as the sign
	point baseRef = { ref.x, ref.y + config.sighShape.topHeight / 2 + config.sighShape.baseHeight / 2 };
	top = new Rect(pGame, topRef, config.sighShape.topHeight, config.sighShape.topWdth);
	base = new Rect(pGame, baseRef, config.sighShape.baseHeight, config.sighShape.baseWdth);
}

void Sign::draw() const
{
	base->draw();
	top->draw();
}

////////////////////////////////////////////////////  class Icecream  ///////////////////////////////////////

Icecream::Icecream(game* r_pGame, point ref):shape(r_pGame,ref)
{
	point CirRef = ref;
	point TriRef = { ref.x,ref.y + 2 * config.icecreamShape.CirRed / 3 };

	bola = new circle(pGame, CirRef, config.icecreamShape.CirRed);
	cone = new InvertedTriangle(pGame, TriRef, config.icecreamShape.Tribase, config.icecreamShape.TriHeight);

}

void Icecream::draw()const
{
	bola->draw();
	cone->draw();
}

////////////////////////////////////////////////////  class Car  ///////////////////////////////////////

Car::Car(game* r_pGame, point ref):shape(r_pGame,ref)
{
	point BodyRef = ref;
	point T1Ref = { ref.x - 3 * config.carShape.bodyWdth / 10 , ref.y + config.carShape.bodyHeight / 2 + config.carShape.C1Red };
	point T2Ref{ ref.x + 3 * config.carShape.bodyWdth / 10 , ref.y + config.carShape.bodyHeight / 2 + config.carShape.C1Red };

	body = new Rect(pGame, BodyRef, config.carShape.bodyHeight, config.carShape.bodyWdth);
	T1 = new circle(pGame, T1Ref, config.carShape.C1Red);
	T2 = new circle(pGame, T2Ref, config.carShape.C2Red);
}

void Car::draw() const
{
	body->draw();
	T1->draw();
	T2->draw();
}

////////////////////////////////////////////////////  class rocket   ///////////////////////////////////////

Rocket::Rocket(game* r_pGame, point ref) :shape(r_pGame, ref)
{
	point bodyRef = ref;
	point topRef = { ref.x, ref.y - config.Rocketshape.RectangleHight / 2 };
	point tailRef = { ref.x, ref.y + config.Rocketshape.RectangleHight / 2 };
	point windowRef = { ref.x,ref.y + 6 };

	wind = new circle(pGame, windowRef, config.Rocketshape.CircRed);
	body = new Rect(pGame, bodyRef, config.Rocketshape.RectangleHight, config.Rocketshape.RectangleLength);
	top = new Triangle(pGame, topRef, config.Rocketshape.TriangleLength, config.Rocketshape.TrinangleHeight);
	tail = new Triangle(pGame, tailRef, config.Rocketshape.TriangleLength, config.Rocketshape.TrinangleHeight);
}

void Rocket::draw() const
{
	body->draw();
	top->draw();
	tail->draw();
	wind->draw();
}