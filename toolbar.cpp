#include "toolbar.h"
#include "game.h"
//#include "grid.h"


////////////////////////////////////////////////////  class toolbar   //////////////////////////////////////////////
toolbar::toolbar(game* pG)
{	
	height = config.toolBarHeight;
	width = config.windWidth;
	this->pGame = pG;
	window* pWind = pGame->getWind();
	
	//You can draw the tool bar icons in any way you want.

	//First prepare List of images for each toolbar item
	toolbarItemImages[ITM_SIGN] = "images\\toolbarItems\\toolbar_sign.jpg";
	toolbarItemImages[ITM_ICECREAM] = "images\\toolbarItems\\toolbar_Icecream.jpg";
	toolbarItemImages[ITM_CAR] = "images\\toolbarItems\\toolbar_Car.jpg";
	toolbarItemImages[ITM_ROCKET] = "images\\toolbarItems\\toolbar_Rocket.jpg";
	toolbarItemImages[ITM_INC] = "images\\toolbarItems\\toolbar_Increase.jpg";
	toolbarItemImages[ITM_DEC] = "images\\toolbarItems\\toolbar_Decrease.jpg";
	toolbarItemImages[ITM_SAVE] = "images\\toolbarItems\\toolbar_Save.jpg";
	toolbarItemImages[ITM_LOAD] = "images\\toolbarItems\\toolbar_Load.jpg";
	toolbarItemImages[ITM_EXIT] = "images\\toolbarItems\\toolbar_Exit.jpg";

	//TODO: Prepare image for each toolbar item and add it to the list

	//Draw toolbar item one image at a time
	for (int i = 0; i < ITM_CNT; i++)
		pWind->DrawImage(toolbarItemImages[i], i * config.toolbarItemWidth, 0, config.toolbarItemWidth, height);


	//Draw a line under the toolbar

	pWind->SetPen(DARKBLUE, 3);
	pWind->DrawLine(0, height,width , height);

	pWind->SetPen(BLACK, 30);
	pWind->SetFont(15, BOLD, BY_NAME, "Arial");
	pWind->DrawString(config.toolbarItemWidth * ITM_CNT, 15, "Score = 0");
	pWind->DrawString(config.toolbarItemWidth * ITM_CNT, 30, "Level = 1");
}



//handles clicks on toolbar icons, returns ITM_CNT if the click is not inside the toolbar
toolbarItem toolbar::getItemClicked(int x)
{
	
	if (x > ITM_CNT * config.toolbarItemWidth)	//click outside toolbar boundaries
		return ITM_CNT;
	
	
	//Check whick toolbar item was clicked
	//==> This assumes that toolbar items are lined up horizontally <==
	//Divide x coord of the point clicked by the icon width (int division)
	//if division result is 0 ==> first item is clicked, if 1 ==> 2nd item and so on

	return (toolbarItem)(x / config.toolbarItemWidth);

}

