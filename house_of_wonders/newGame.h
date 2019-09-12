#ifndef NEWGAME_H_INCLUDED
#define NEWGAME_H_INCLUDED
#include "variables.h"


struct character{

	int height;
	int width;

	character(){

	}

	character(int _height, int _width){

		height=_height;
		width=_width;
	}

};

typedef struct character Character;


void newGamePage(){

		background backGround(y, z);

		storyImage = iLoadImage("Story page.jpg");
		iShowImage(0, 0, backGround.width, backGround.height, storyImage);
		iSetColor(255, 255, 255);
		iText(90, 500, "Amy is escaping from some enemies. She runs for a long time. Then she enters into a large jungle. ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 450, "The jungle has few fantasy houses. As she is in the middle of the jungle, she searches for a house",  GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 400, "to hide from the enemies. Finally, she is able to find one. But it is not as easy as she thought to hide", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 350, "in that house. As it is a very old house, nobody has lived there for a long time. So, Amy needs to", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 300, "complete all the tasks inside the house and conquer it. She needs to use her skills to finish the tasks", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(90, 250, "assingned in each room. Help her conquer the house......", GLUT_BITMAP_TIMES_ROMAN_24); 
		iShowImage(1000, 50, 200, 120, buttonBorder);
		iSetColor(128, 0, 0);
		iText(1060, 100, "START", GLUT_BITMAP_TIMES_ROMAN_24);
		showBackbutton();
}

void enterName(){

		background backGround(y, z);

		enterNameImage=iLoadImage("Enter Name.PNG");
		iShowImage(0, 0, backGround.width, backGround.height, enterNameImage);
		iSetColor(255, 255, 255);
		iText(555, 400, "Enter Your Name", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 255, 255);
		iRectangle(515, 320, 260, 30);

}


void showWelcomeScreen(){

		background backGround(y, z);
		Character ch(p, q);

		iSetColor(0,0,0);
		iFilledRectangle(0, 0, backGround.width, backGround.height);

		characterImage = iLoadImage("Character.png");
		iShowImage(250, 0, 100, 200, characterImage);
}

void showHelpScreen(){

		gameState=3;
}

void showAdventureScreen(){

		gameState=4;
}

void showEntrance(){

		gameState=5;
		doorBackgroundImage = iLoadImage("Door.PNG");
		doorImage = iLoadImage("Door.JPG");
}

//Loading hero Rightside run image
void loadHeroImage(){

		run[0]=iLoadImage("Run_000.png");
		run[1]=iLoadImage("Run_001.png");
		run[2]=iLoadImage("Run_002.png");
		run[3]=iLoadImage("Run_003.png");
		run[4]=iLoadImage("Run_004.png");
		run[5]=iLoadImage("Run_005.png");
		run[6]=iLoadImage("Run_006.png");
		run[7]=iLoadImage("Run_007.png");
		run[8]=iLoadImage("Run_008.png");
		run[9]=iLoadImage("Run_009.png");
		
		//obstacleBackground = iLoadImage("ObstacleBackground.png");

		//coinBackground = iLoadImage("coinBackgroundImage.PNG");
		
}

void showCoinBackground(){

		gameState=6;
		coinBackground = iLoadImage("coinBackgroundImage.PNG");
		imageCoin = iLoadImage("coin.png");
		
}


void showObstacleBackground(){

		obstacleBackground = iLoadImage("ObstacleBackground.png");
		obstacle = iLoadImage("obstacle.png");
		obstacle1 = iLoadImage("obstacle.png");
		obstacle2 = iLoadImage("obstacle.png");
		//gameState=8;

}


//Showing image by isetTimer
void coinShowingTime()
{
			coinX=rand()%1100;
			coinY=rand()%100 + heroY;
			count++;
}


void houseObjectShowing()
{
	blood1 = iLoadImage("blood1.png");
	blood2 = iLoadImage("blood2.png");
	blood3 = iLoadImage("blood3.png");
	blood4 = iLoadImage("blood4.png");
	book1 = iLoadImage("book1.png");
	book2 = iLoadImage("book2.png");
	chair = iLoadImage("chair.png");
	coin1 = iLoadImage("coin1.png");
	coin2 = iLoadImage("coin2.png");
	diary=iLoadImage("diary.png");
	fan=iLoadImage("fan.png");
	iron=iLoadImage("iron.png");
	mirror=iLoadImage("mirror.png");
	mirror2=iLoadImage("mirror2.png");
	vase=iLoadImage("vase.png");
	vase2=iLoadImage("vase2.png");
	vase3=iLoadImage("vase3.png");
	pen=iLoadImage("pen.png");
}




void runChange(){

		runIndex++;
		if(runIndex>=9)
		{
			runIndex=0;
			
		}
}
//RunChange function for Right side run

#endif