#pragma once

class game;
/////////////////////////////////// class operation  //////////////////
//Base class of all operations supported by the application
class operation
{
protected:
	game* pGame;	//pointer to the game class
public:
	operation(game* r_pGame);

	//Function Act:
	//Implements the action that should be taken by this operation
	//Should be overriden by derived classes
	virtual void Act() = 0;
};
/////////////////////////////////// class operAddSign  //////////////////
//Responsible for 
//1- collectign data about a new Sign shape to add
//2- Adding the new shape to the list of shapes (throgh the grid class)
class operAddSign:public operation
{
public:
	operAddSign(game* r_pGame);
	virtual void Act();
};

class operAddIcecream :public operation
{
public:
	operAddIcecream(game* r_pGame);
	virtual void Act();
};

class operAddCar :public operation
{
public:
	operAddCar(game* r_pGame);
	virtual void Act();
};

class operAddRocket :public operation
{
public:
	operAddRocket(game* r_pGame);
	virtual void Act();
};

class operInc :public operation
{
public:
	operInc(game* r_pGame);
	virtual void Act();
};

class operDec :public operation
{
public:
	operDec(game* r_pGame);
	virtual void Act();
};

class operSave :public operation
{
public:
	operSave(game* r_pGame);
	virtual void Act();
};

class operLoad :public operation
{
public:
	operLoad(game* r_pGame);
	virtual void Act();
};

