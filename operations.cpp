#include "operations.h"
#include "game.h"
#include "CompositeShapes.h"
/////////////////////////////////// class operation  //////////////////
operation::operation(game* r_pGame)
{
	pGame = r_pGame;
}


/////////////////////////////////// class operAddSign  //////////////////

operAddSign::operAddSign(game* r_pGame):operation(r_pGame)
{
}

void operAddSign::Act()
{
	window* pw = pGame->getWind();

	//TODO:
	// Don't allow adding new shape if there is alreday an active shape

	//align reference point to the nearest grid point
	int xGrid = config.RefX - config.RefX % config.gridSpacing;
	int yGrid = config.RefY - config.RefX % config.gridSpacing;

	//take the aligned point as the sign shape ref point
	point signShapeRef = { xGrid,yGrid };

	//create a sign shape
	shape* psh = new Sign(pGame, signShapeRef);

	//Add the shape to the grid
	grid* pGrid = pGame->getGrid();
	pGrid->setActiveShape(psh);

}

/////////////////////////////////// class operAddIcecream  //////////////////

operAddIcecream::operAddIcecream(game* r_pGame) :operation(r_pGame)
{
}

void operAddIcecream::Act()
{
	window* pw = pGame->getWind();

	//TODO:
	// Don't allow adding new shape if there is alreday an active shape

	//align reference point to the nearest grid point
	int xGrid = config.RefX - config.RefX % config.gridSpacing;
	int yGrid = config.RefY - config.RefX % config.gridSpacing;

	//take the aligned point as the sign shape ref point
	point icecreamShapeRef = { xGrid,yGrid };

	//create a sign shape
	shape* psh = new Icecream(pGame, icecreamShapeRef);

	//Add the shape to the grid
	grid* pGrid = pGame->getGrid();
	pGrid->setActiveShape(psh);

}

/////////////////////////////////// class operAddCar  //////////////////

operAddCar::operAddCar(game* r_pGame) :operation(r_pGame)
{
}

void operAddCar::Act()
{
	window* pw = pGame->getWind();

	//TODO:
	// Don't allow adding new shape if there is alreday an active shape

	//align reference point to the nearest grid point
	int xGrid = config.RefX - config.RefX % config.gridSpacing;
	int yGrid = config.RefY - config.RefX % config.gridSpacing;

	//take the aligned point as the sign shape ref point
	point CarShapeRef = { xGrid,yGrid };

	//create a sign shape
	shape* psh = new Car(pGame, CarShapeRef);

	//Add the shape to the grid
	grid* pGrid = pGame->getGrid();
	pGrid->setActiveShape(psh);

}

/////////////////////////////////// class operAddRocket  //////////////////

operAddRocket::operAddRocket(game* r_pGame) :operation(r_pGame)
{
}

void operAddRocket::Act()
{
	window* pw = pGame->getWind();

	//TODO:
	// Don't allow adding new shape if there is alreday an active shape

	//align reference point to the nearest grid point
	int xGrid = config.RefX - config.RefX % config.gridSpacing;
	int yGrid = config.RefY - config.RefX % config.gridSpacing;

	//take the aligned point as the sign shape ref point
	point RocketShapeRef = { xGrid,yGrid };

	//create a sign shape
	shape* psh = new Rocket(pGame, RocketShapeRef);

	//Add the shape to the grid
	grid* pGrid = pGame->getGrid();
	pGrid->setActiveShape(psh);

}

/////////////////////////////////// class operIncrease  //////////////////

operInc::operInc(game* r_pGame) :operation(r_pGame)
{
}

void operInc::Act()
{
}

/////////////////////////////////// class operDecrease  //////////////////

operDec::operDec(game* r_pGame) :operation(r_pGame)
{
}

void operDec::Act()
{
}

/////////////////////////////////// class opersave  //////////////////

operSave::operSave(game* r_pGame) :operation(r_pGame)
{
}

void operSave::Act()
{
}

/////////////////////////////////// class operload  //////////////////

operLoad::operLoad(game* r_pGame) :operation(r_pGame)
{
}

void operLoad::Act()
{
}