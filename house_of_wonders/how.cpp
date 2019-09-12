#include "iGraphics.h"
#include "cover.h"
#include "variables.h"
#include "newGame.h"

//calles the loading pages one by one
void loadingPage(){

	x++;

}


//writes the player name in a text file
void writeName(char *userName){

	FILE *fp=fopen("name.txt","a");
	fprintf(fp,"%s\n", userName);
	fclose(fp);
}


 void setPos(int obstacle){

      if(obstacleY<=0)
	  {
		  obstacleX = rand()%240 + 300;
		  obstacleY=800;
	  }
	  else
	  {
		  obstacleY -= obstacleSpeed;
	  }
 }

  void setPos1(int obstacle1){

      if(obstacleY1<=0)
	  {
		  obstacleX1 = rand()%240 + 700;
		  obstacleY1=800;
	  }
	  else
	  {
		  obstacleY1 -= obstacleSpeed1;
	  }
 }


void setPos2(int obstacle2){

      if(obstacleY2<=0)
	  {
		  obstacleX2 = rand()%240 + 700;
		  obstacleY2=800;
	  }
	  else
	  {
		  obstacleY2 -= obstacleSpeed2;
	  }
 }

/*
 function iDraw() is called again and again by the system.

 */
void iDraw()
{
	iClear();


	background backGround(y, z);

	iShowImage(0, 0, backGround.width, backGround.height, firstImage);
	iSetColor(0,255,0);
	iRectangle(650, 100, 600, 20);

	if(x==0)
		loadingPage1();
	else if(x==1)
		loadingPage2();
	else if(x==2)
		loadingPage3();
	else if(x==3)
		loadingPage4();
	else if(x==4)
		loadingPage5();
	else if(x==5)
	{
	    showMenuImage();
		iPauseTimer(a);
	}


	//The activities inside the new game button is started calling here
	if(newGame==1){
		iClear();
		menu=0;
		start=1;
		newGamePage();
	}


	//The page inside the instructions button is called here
	if(instructions==1){

		iClear();
		menu=0;
		showinstructionsImage(); 
	
	}


	//The page inside the settings button is called here
	if(settings==1){

		iClear();
		menu=0;
		showsettingsImage();
		
	}


	//The page inside the settings button is called here
	if(highScore==1){

		iClear();
		menu=0;
		showhighScoreImage();
		
	}


	//The page inside the about button is called here
	if(about==1){

		iClear();
		menu=0;
		showaboutImage(); 
		
	}


	//Go back to menu page
	if(back==1)
	{
		showMenuImage();
	}


	//new game button blink
	if(newGameColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(203, 404, 194, 53);
		iSetColor(128, 0, 0);
		iText(230, 420, "NEW GAME", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//instructions button blink
	if(instructionsColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(203, 324, 194, 53);
		iSetColor(128, 0, 0);
		iText(210, 340, "INSTRUCTIONS", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//settings button blink
	if(settingsColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(203, 244, 194, 53);
		iSetColor(128, 0, 0);
		iText(240, 260, "SETTINGS", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//high Score button blink
	if(highScoreColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(203, 164, 194, 53);
		iSetColor(128, 0, 0);
		iText(230, 180, "HIGH SCORE", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//credits button blink
	if(creditsColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(203, 84, 194, 53);
		iSetColor(128, 0, 0);
		iText(250, 100, "CREDITS", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//backButton button blink
	if(backButtonColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(52, 583, 146, 53);
		iSetColor(128, 0, 0);
		iText(90, 600, "MENU", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//quit button blink
	if(quitColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(1003, 84, 194, 53);
		iSetColor(128, 0, 0);
		iText(1070, 100, "QUIT", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//start button blink
	if(startColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(1003, 84, 194, 53);
		iSetColor(128, 0, 0);
		iText(1060, 100, "START", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//music is started
	if(musicOn==1 && settings==1){

		iSetColor(222,184,135);
		iFilledRectangle(503,385,144,50);
		iSetColor(128, 0, 0);
		iText(555, 400, "ON", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	//music is stopped
	if(musicOff==1 && settings==1){

		iSetColor(222,184,135);
		iFilledRectangle(703,385,144,50);
		iSetColor(128, 0, 0);
		iText(750, 400, "OFF", GLUT_BITMAP_TIMES_ROMAN_24);
	}

	//from name input page
	if(newGame==2){

		iClear();
		start=0;
		menu=0;
		enterName();
	}
	
	if(newGame==3){

		iClear();
		start=0;
		menu=0;
		gameState=7;
		heroRunright = false;
		heroStand = true;
		
	}

	if(newGame==4){

		iClear();
		start=0;
		menu=0;
		gameState=8;
		
	}

	if(newGame==5){

		iClear();
		start=0;
		menu=0;
		gameState=9;
		
	}

	//after taking name input
	if(gameState==2){

		takeNameInput=0;
		
		showWelcomeScreen(); 

		iSetColor(255,255,255);
		iText(500, 350, "WELCOME !",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(650, 350, str1, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1050, 50, "Press enter to continue.", GLUT_BITMAP_8_BY_13);

	}

	if(gameState==3){

		showWelcomeScreen(); 

		iSetColor(255,255,255);
		iText(450, 350, "I AM AMY. I NEED YOUR HELP.",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1050, 50, "Press enter to continue.", GLUT_BITMAP_8_BY_13);

	}

	if(gameState==4){

		showWelcomeScreen(); 

		iSetColor(255,255,255);
		iText(450, 350, "LET'S START THE ADVENTURE.....",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1050, 50, "Press enter to continue.", GLUT_BITMAP_8_BY_13);

	}


	if(gameState==5){

		background backGround(y, z);
		Character ch(p, q);

		iShowImage(0, 0, backGround.width, backGround.height, doorBackgroundImage);
		iShowImage(615, 138, 220, 600, doorImage); 
		iShowImage(600, 100, 100, 200, characterImage);
		//showBackbutton();

		iSetColor(255,255,102);
		iFilledRectangle(680, 400, 120, 35);
		iSetColor(128,0,0);
		iText(690, 410, "UNLOCK", GLUT_BITMAP_TIMES_ROMAN_24);

	}

// house object showing
	if(gameState==6){

		background backGround(y, z);
		Character ch(p, q);

		showCoinBackground();
		//loadHeroImage();
		iShowImage(0, 0, backGround.width, backGround.height, coinBackground);

		//iShowImage(70, 70, ch.height, ch.width, characterImage);
		//showBackbutton();
		state=6;

		iShowImage(coinX,coinY,25,25,imageCoin);
		//count++;

		if(heroRunright){

			iShowImage(heroX, heroY, 100, ch.width, run[runIndex]);
			heroX+=dx;
			if(heroX>=coinX && heroX<=coinX+50){

				heroRunright=false;
				coinX=-100;
			}
			else if(heroX>=coinX && heroX<=backGround.width)
				heroRunright=false;

		}
		else
			iShowImage(heroX, heroY, ch.height, ch.width, characterImage);



		/*if(heroRunright){

			iShowImage(heroX, heroY, 100, ch.width, run[runIndex]);
			heroX+=dx;
			if(heroX>=coinX && heroX<=coinX+50){

				heroRunright=false;
				coinX=-100;
			}
			else if(heroX>=coinX && heroX<=backGround.width)
				heroRunright=false;

		}
		else
			iShowImage(heroX, heroY, ch.height, ch.width, characterImage);*/
	}

	if(gameState==7){


		background backGround(y, z);
		Character ch(p, q);

		iShowImage(0, 0, backGround.width, backGround.height, coinBackground); 
		iShowImage(600, heroY, ch.height, ch.width, characterImage);

		iSetColor(255,255,102);
		iFilledRectangle(640, 370, 120, 35);
		iSetColor(128,0,0);
		iText(650, 380, "UNLOCK", GLUT_BITMAP_TIMES_ROMAN_24);
		state=7;
		
	}

	if(gameState==8){

		background backGround(y, z);
		Character ch(p, q);

		showObstacleBackground();
		iShowImage(0, 0, backGround.width, backGround.height, obstacleBackground);
		state=8;
		count=0;
		
		setPos(obstacle);
		setPos1(obstacle1);
		setPos2(obstacle2);
		iShowImage(obstacleX,obstacleY,25,25,obstacle);
		iShowImage(obstacleX1,obstacleY1,25,25,obstacle1);
		iShowImage(obstacleX2,obstacleY2,25,25,obstacle2);

		if(heroRunright){

			iShowImage(heroX1, heroY1, 100, ch.width, run[runIndex]);
			heroX1+=dx;

			if(heroX1>=950)
			{
				heroRunright=false;
				newGame=5;
			}
		}

		else
			iShowImage(heroX1, heroY1, ch.height, ch.width, characterImage);
	}


	if(gameState==9){


		background backGround(y, z);
		Character ch(p, q);

		iShowImage(0, 0, backGround.width, backGround.height, obstacleBackground); 
		iShowImage(heroX1, heroY1, ch.height, ch.width, characterImage);

		iSetColor(255,255,102);
		iFilledRectangle(1010, 370, 120, 35);
		iSetColor(128,0,0);
		iText(1020, 380, "UNLOCK", GLUT_BITMAP_TIMES_ROMAN_24);
		state=9;

	}


	if(count>=100)
	{                      
		iPauseTimer(b);
		newGame=3;
		

	}


	if(state==3){

		showHelpScreen();
	}


	if(state==4){

		showAdventureScreen();
	}


	if(state==5){

		showEntrance();

	}

	/*if(state==8){

		newGame=4;
		//showObstacleBackground();
	}*/


	//name of the player is given
	if(takeNameInput==1){

		iSetColor(222,184,135);
		iFilledRectangle(515, 320, 260, 30);
		iSetColor(0,0,0);
		iText(525, 325, str,  GLUT_BITMAP_TIMES_ROMAN_24);
		
	}


	//name of the player is written in a text file
	if(writeNameinFile==1){

		gameState=2;
		writeName(str1);
		writeNameinFile=0;
	}

	//unlock button blink
	if(unlockColorChange==1){

		iSetColor(222,184,135);
		iFilledRectangle(680, 400, 120, 35);
		iSetColor(128,0,0);
		iText(690, 410, "UNLOCK", GLUT_BITMAP_TIMES_ROMAN_24);

	}


	if( unlockColorChange2==1){

		iSetColor(222,184,135);
		iFilledRectangle(640, 370, 120, 35);
		iSetColor(128,0,0);
		iText(650, 380, "UNLOCK", GLUT_BITMAP_TIMES_ROMAN_24);

	}
}

void iPassiveMouse(int mx, int my)
{
	if(mx>=200 && mx<=400 && my>=370 && my<=490 && menu==1){

		 newGameColorChange=1;
		 instructionsColorChange=0;
		 settingsColorChange=0;
		 highScoreColorChange=0;
		 creditsColorChange=0;
		 backButtonColorChange=0;
		 quitColorChange=0;
	}

	else if(mx>=200 && mx<=400 && my>=290 && my<=410 && menu==1){

		 newGameColorChange=0;
		 instructionsColorChange=1;
		 settingsColorChange=0;
		 highScoreColorChange=0;
		 creditsColorChange=0;
		 backButtonColorChange=0;
		 quitColorChange=0;
	}

	else if(mx>=200 && mx<=400 && my>=210 && my<=330 && menu==1){

		 newGameColorChange=0;
		 instructionsColorChange=0;
		 settingsColorChange=1;
		 highScoreColorChange=0;
		 creditsColorChange=0;
		 backButtonColorChange=0;
		 quitColorChange=0;
	}


	else if(mx>=200 && mx<=400 && my>=130 && my<=250 && menu==1){

		 newGameColorChange=0;
		 instructionsColorChange=0;
		 settingsColorChange=0;
		 highScoreColorChange=1;
		 creditsColorChange=0;
		 backButtonColorChange=0;
		 quitColorChange=0;
	}

	else if(mx>=200 && mx<=400 && my>=50 && my<=170 && menu==1){

		 newGameColorChange=0;
		 instructionsColorChange=0;
		 settingsColorChange=0;
		 highScoreColorChange=0;
		 creditsColorChange=1;
		 backButtonColorChange=0;
		 quitColorChange=0;
	}

	
	else if(mx>=1000 && mx<=1200 && my>=50 && my<=170 && menu==1){

		 newGameColorChange=0;
		 instructionsColorChange=0;
		 settingsColorChange=0;
		 highScoreColorChange=0;
		 creditsColorChange=0;
		 backButtonColorChange=0;
		 quitColorChange=1;
	}

	else{

		 newGameColorChange=0;
		 instructionsColorChange=0;
		 settingsColorChange=0;
		 highScoreColorChange=0;
		 creditsColorChange=0;
		 backButtonColorChange=0;
		 quitColorChange=0;
	}

	if(mx>=50 && mx<=200 && my>=550 && my<=670 && menu==0){

		 newGameColorChange=0;
		 instructionsColorChange=0;
		 settingsColorChange=0;
		 highScoreColorChange=0;
		 creditsColorChange=0;
		 backButtonColorChange=1;
		 quitColorChange=0;
	}


	if(mx>=1000 && mx<=1200 && my>=50 && my<=170 && start==1)
		startColorChange=1;

	else
		startColorChange=0;



	if(mx>=680 && mx<=800 && my>=400 && my<430 && gameState==5){

		unlockColorChange=1;
	}

	else
		unlockColorChange=0;


	if(mx>=640 && mx<=760 && my>=370 && my<=405 && gameState==7){

		 unlockColorChange2=1;
	}

	else
		 unlockColorChange2=0;


}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	

}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		//Newgame button
		if(mx>=200 && mx<=400 && my>=370 && my<=490 && menu==1)
		{
			newGame=1;
			instructions=0;
			settings=0;
			highScore=0;
			about=0;
			back=0;
		}


		//instructions button
		else if(mx>=200 && mx<=400 && my>=290 && my<=410 && menu==1)
		{
			newGame=0;
			instructions=1;
			settings=0;
			highScore=0;
			about=0;
			back=0;
		}


		//Settings button
		else if(mx>=200 && mx<=400 && my>=210 && my<=330 && menu==1)
		{
			newGame=0;
			instructions=0;
			settings=1;
			highScore=0;
			about=0;
			back=0;
		}


		//Highscore button
		else if(mx>=200 && mx<=400 && my>=130 && my<=250 && menu==1)
		{
			newGame=0;
			instructions=0;
			settings=0;
			highScore=1;
			about=0;
			back=0;
		}

		

		//about button
		else if(mx>=200 && mx<=400 && my>=50 && my<=170 && menu==1)
		{
			newGame=0;
			instructions=0;
			settings=0;
			highScore=0;
			about=1;
			back=0;
		}


		//Quit button
		else if(mx>=1000 && mx<=1200 && my>=50 && my<=170 && menu==1)
			exit(0);


		//Back button
		if(mx>=50 && mx<=200 && my>=550 && my<=670 && menu==0)
		{
			newGame=0;
			instructions=0;
			settings=0;
			highScore=0;
			about=0;
			back=1;
		}
		

		if(mx>=500 && mx<=650 && my>=350 && my<=470 && settings==1){

			musicOn=1;
			musicOff=0;
		}

		else if(mx>=700 && mx<=850 && my>=350 && my<=470 && settings==1){

			musicOff=1;
			musicOn=0;
		}

		if(mx>=1000 && mx<=1200 && my>=50 && my<=170 && start==1){

			newGame=2;

		}

		if(mx>=515 && mx<=775 && my>=320 && my<=350 && newGame==2){

			takeNameInput=1;
		}

		if(mx>=680 && mx<=800 && my>=400 && my<430 && gameState==5){

			gameState=6;
		
		}

		if(mx>=640 && mx<=760 && my>=370 && my<=405 && gameState==7){

			newGame=4;
			//gameState=8;
		}

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
			
	}
}

/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	
	int i;
	if(takeNameInput == 1)
	{
        if(key == '\r')
		{
			mode = 0;
			strcpy(str1, str);
			for(i = 0; i < len; i++)
				str[i] = 0;
			len = 0;
			writeNameinFile=1;
			//gameState = 2;
			takeNameInput=0;
		}

		else if(key == '\b'){

			if(len > 0){

			str[len-1] = '\0';
			len--;

			}
		}
		
		else
		{
			str[len] = key;
			len++;
		}
	}

	if(gameState==2)
	{

		if(key == '\r'){

			state=3;
		}
	}


	if(gameState==3)
	{

		if(key == '\r'){

			state=4;
		}
	}


	if(gameState==4)
	{

		if(key == '\r'){

			state=5;
		}
	}
}

/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */

void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_RIGHT){

		if(gameState==6 || gameState==8){

			heroRunright=true; // for hero right side run

		}

	}

	if(key == GLUT_KEY_LEFT){

		if(gameState==8 && heroRunright==true){

			heroRunright=false; // for hero right side run stop

		}

	}

}

int main()
{

	iInitialize(1265, 700, "House of Wonders");

	//characterImage[0] = iLoadImage("Character.png");
	showfirstImage();
	loadHeroImage();
    a=iSetTimer(1500, loadingPage);
    b=iSetTimer(1000,coinShowingTime);
	c=iSetTimer(100,runChange);
	houseObjectShowing();
	

	iStart(); // it will start drawing

	return 0;
}

