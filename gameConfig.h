#pragma once
#include "CMUgraphicsLib/CMUgraphics.h"


//The folowing struct contains all game configurations
// (MAY be loaded from a configuration file later)
__declspec(selectany) //This line to prevent "redefinition error"
struct 		
{
	int	windWidth=1200, windHeight=600,	//Window width and height
		wx=5, wy=5,			//Window starting coordinates

		//The window is divded into 3 areas: toolbar, Working area, and statusbar
		toolBarHeight=60,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		toolbarItemWidth = 70,			//Width of each icon in toolbar
		statusBarHeight=50;	//Status Bar Height
	
	int remainingHeight = windHeight - toolBarHeight - statusBarHeight;

	int gridHeight = int(remainingHeight * (2 / 3.0)); 		//The grid is where bricks can be drawn

	//Default colors
	color	penColor = RED,			//color used to draw borders/write messages
			fillColor = RED,			//shapes fill color (Default)
			bkGrndColor= LAVENDER,		//Screen Background color
			statusBarColor = LIGHTSEAGREEN;	//background color of the status
	int penWidth=3;			//width of the pen that draws shapes


	color gridDotsColor = RED;
	int gridSpacing=30;	//spacing between grid points

	////// Configuration for the composite shapes //////
	// default Ref Point for any newly created shape 
	int RefX = windWidth *  (2.0 / 3);
	int RefY = windHeight * (0.5);

	////-----  Sign Shape Confoguration ---------////
	// For the Sign shape, define width and height of both rectangles
	struct {
		int baseWdth = 20, baseHeight = 80;
		int topWdth = 100, topHeight = 50;
	}sighShape;

	////-----  IceCream Shape Confoguration ---------////

	struct {
		int CirRed = 70;
		int Tribase = 100, TriHeight = 50 * sqrt(3);

	}icecreamShape;

	////-----  Car Shape Confoguration ---------////

	struct {
		int bodyWdth = 140, bodyHeight = 50;
		int C1Red = 20, C2Red = 20;
		
	}carShape;

	////-----  Rocket Shape Confoguration ---------////

	struct {
		int RectangleHight = 60, RectangleLength = 40;
		int TriangleLength = 60, TrinangleHeight = 40;
		int CircRed = 20;

	}Rocketshape;
	

}config;


enum toolbarItem //The items of the  toolbar (you should add more items)
{
	//Note: Items are ordered here as they appear in the toolbar
	//If you want to change the toolbar items order, just change the order here
	ITM_SIGN,//Sign shape item
	ITM_ICECREAM,
	ITM_CAR,
	ITM_ROCKET,
	ITM_INC,
	ITM_DEC,
	ITM_SAVE,
	ITM_LOAD,

	ITM_EXIT,		//Exit item
	//TODO: Add more items names here

	ITM_CNT		//no. of toolbar items ==> This should be the last line in this enum

};



