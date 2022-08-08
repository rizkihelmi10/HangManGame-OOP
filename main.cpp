 /*-----------This Program was written by Rizki Helmi  (154421) and Aloysius Dustin Dealson()----------------
on 16 of June 2021
 this program was made for a hangman game

 PLEASE ENJOY IT
*/
#include <iostream>
#include <stdlib.h>
#include "stackHang.h"
#include "linkedScore.h"
#include "hangGame.h"
using namespace std;

int main() {
  string guess, wordtoGuess,input;
  int tries;
    cout << "--------------------------------------W E L C O M E__T O__H A N G M A N__G A M E S------------------------------------"<<endl;
  cout << "----------------------------------------------Created by Rizki and Dustin---------------------------------------------"<< endl;
  cout << "PLAYER 1 TAKE THE FIRST ROLE."<< endl;
  for(int gim = 1 ; gim<=3 ; gim++)
{
  hangG game;
  wordtoGuess= game.RandomWordp1(input);
  tries = 0;
  bool win = false;
  do
  { 
    system("clear");
    cout << "player 2, its your turn to answer"<<endl;
    char g;
    game.gameFormat("HANG MAN", true, true);
    game.Hangman(tries);
    game.lettersLeft(guess);
    game.gameFormat("GUESS THE WORD",true, true);
    win = game.Check(wordtoGuess,guess);

      if (win)
        break;
        cout << "letter:";
        cin >> g;
      if(guess.find(g) == string::npos)
        guess += g;

      tries = game.TriesLeft(wordtoGuess, guess);
  } while (tries < 10);

  if (win)
  {
    game.gameFormat( "CONGRATULATIONS!",true,true);    cout << "player 2 got 10 points"<< endl;
    linked assg;
    for (int a = 10 ; a<=10; a+=10)
    {
      
     assg.appendScorep2(a);
     cout << "YOUR TOTAL SCORE IS :";
     assg.displayScorep2();
    }
     
  }
  else{
  cout << "YOU LOSE"<< endl;}
  cout << "Player 2 win this round"<< endl <<endl<<endl<<endl;
  string input2, wordtoGuess2,guess2;
  int tries2;
  wordtoGuess2=game.RandomWordp2(input2);
  tries2=0;
  bool won = false;
  do 
  {
     system("clear");
    cout << "player 1, its your turn to answer"<<endl;
    char f;
    game.gameFormat("HANG MAN", true, true);
    game.Hangman(tries2);
    game.lettersLeft(guess2);
    game.gameFormat("GUESS THE WORD",true, true);
    won = game.Check(wordtoGuess2,guess2);

      if (won)
        break;
        cout << "letter:";
        cin >> f;
      if(guess.find(f) == string::npos)
        guess2 += f;

      tries2 = game.TriesLeft(wordtoGuess2, guess2);
  } while (tries2 < 10);

  if (won)
  {
    game.gameFormat( "CONGRATULATIONS!",true,true);    cout << "player 1 got 10 points"<< endl;
    linked assg;
    for (int b = 10 ; b<=10; b+=10)
    {
      
      assg.appendScorep1(b);
     cout << "YOUR TOTAL SCORE IS :";
     assg.displayScorep1();
    }
     
  }
  else{
  cout << "YOU LOSE"<< endl;}
  
}
return 0;

}

