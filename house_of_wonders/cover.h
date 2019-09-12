#ifndef COVER_H_INCLUDED
#define COVER_H_INCLUDED
#include "variables.h"


struct backgroundImage{

	int height;
	int width;

	backgroundImage(){

	}

	backgroundImage(int _height, int _width){

		height=_height;
		width=_width;
	}

};

typedef struct backgroundImage background;


void showfirstImage(){

        firstImage = iLoadImage("House.jpg");

}

void showMenuImage(){

		background backGround(y, z);

		menu=1;
		start=0;
		mainMenu = iLoadImage("Main menu.jpeg");
	    iShowImage(0, 0, backGround.width, backGround.height, mainMenu);
		iSetColor(128, 0, 0);
		buttonBorder = iLoadImage("button-border2.png");
		iShowImage(550, 550, 250, 150, buttonBorder);
		iText(600, 620, "MAIN MENU", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(200, 50, 200, 120, buttonBorder);
		iText(250, 100, "CREDITS", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(200, 130, 200, 120, buttonBorder);
		iText(230, 180, "HIGH SCORE", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(200, 210, 200, 120, buttonBorder);
		iText(240, 260, "SETTINGS", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(200, 290, 200, 120, buttonBorder);
		iText(210, 340, "INSTRUCTIONS", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(200, 370, 200, 120, buttonBorder);
		iText(230, 420, "NEW GAME", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(1000, 50, 200, 120, buttonBorder);
		iText(1070, 100, "QUIT", GLUT_BITMAP_TIMES_ROMAN_24);

}



void showBackbutton(){
		
		iShowImage(50, 550, 150, 120, buttonBorder);
		iSetColor(128, 0, 0);
		iText(90, 600, "MENU", GLUT_BITMAP_TIMES_ROMAN_24);
}

void showinstructionsImage(){

		background backGround(y, z);

		instructionsImage=iLoadImage("instructions.jpg");
		iShowImage(0, 0, backGround.width, backGround.height, instructionsImage);
		iSetColor(255, 255, 255);
		iText(200, 490, "Press right, left, up & down keys to move the character.", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(200, 390, "Click right button to fight the enemies.", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(200, 290, "Complete all the tasks assigned in each room to finish the game.", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(200, 190, "Click the new game button to start a new game.", GLUT_BITMAP_TIMES_ROMAN_24);
		showBackbutton();
}


void showsettingsImage(){

		background backGround(y, z);

		settingsImage=iLoadImage("Settings.png");
		iShowImage(0, 0, backGround.width, backGround.height, settingsImage);
		iSetColor(255, 255, 255);
		iText(300, 400, "MUSIC", GLUT_BITMAP_TIMES_ROMAN_24);
		//iText(300, 320, "CHARACTER", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowImage(500, 350, 150, 120, buttonBorder);
		iShowImage(700, 350, 150, 120, buttonBorder);
		/*iShowImage(500, 270, 150, 120, buttonBorder);
		iShowImage(700, 270, 150, 120, buttonBorder);*/
		iSetColor(128, 0, 0);
		iText(555, 400, "ON", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(750, 400, "OFF", GLUT_BITMAP_TIMES_ROMAN_24);
		/*iText(420, 340, "1", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(500, 340, "2", GLUT_BITMAP_TIMES_ROMAN_24);*/
		showBackbutton();
}


void showhighScoreImage(){

		background backGround(y, z);

		highScoreImage=iLoadImage("High Score.jpg");
		iShowImage(0, 0, backGround.width, backGround.height, highScoreImage);
		showBackbutton();

}

void showaboutImage(){

		background backGround(y, z);

		aboutImage=iLoadImage("About.jpg");
		iShowImage(0, 0, backGround.width, backGround.height, aboutImage);
		iSetColor(255, 255, 255);
		iText(200, 380, "GAME DEVELOPED BY", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(520, 300, "NAWRIN TABASSUM", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(520, 250, "MUBINA ASHRAFI", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(520, 200, "KAJI FUAD BIN AKHTER", GLUT_BITMAP_TIMES_ROMAN_24);
		showBackbutton();
}

void loadingPage1(){

	iSetColor(0, 255, 0);
	iFilledRectangle(650, 100 , 50, 20);
	iText(900, 150, "Loading 10 %", GLUT_BITMAP_TIMES_ROMAN_24);
}

void loadingPage2(){

	iSetColor(0, 255, 0);
	iFilledRectangle(650, 100, 150, 20);
	iText(900, 150, "Loading 30 %", GLUT_BITMAP_TIMES_ROMAN_24);
}

void loadingPage3(){

	iSetColor(0, 255, 0);
	iFilledRectangle(650, 100, 250, 20);
	iText(900, 150, "Loading 40 %", GLUT_BITMAP_TIMES_ROMAN_24);
}

void loadingPage4(){

	iSetColor(0, 255, 0);
	iFilledRectangle(650, 100, 400, 20);
	iText(900, 150, "Loading 75 %", GLUT_BITMAP_TIMES_ROMAN_24);
}

void loadingPage5(){

	iSetColor(0, 255, 0);
	iFilledRectangle(650, 100, 600, 20);
	iText(900, 150, "Loading 100 %", GLUT_BITMAP_TIMES_ROMAN_24);
	//iPauseTimer(a);
}



#endif