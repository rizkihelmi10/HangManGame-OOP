#ifndef HGAME_H
#define HGAME_H
#include <string.h>
using namespace std;

class hangG
{
  private :
    string Mes;
    int guessC;
  public :
  hangG();
  ~hangG();
  void gameFormat(string , bool printTop, bool printBottom);
  void Hangman(int);
  string RandomWordp1(string);
  string RandomWordp2(string);
  void printLetters(string,char,char);
  void lettersLeft(string);
  bool Check(string,string);
  int TriesLeft(string,string);
};

#endif