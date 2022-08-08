#include <iostream>
#include "hangGame.h"
#include "stackHang.h"
using namespace std;

hangG::hangG()
{
 
  int guessC = 0;
}
hangG::~hangG()
{
  int guessC = 0;
}

void hangG::gameFormat(string message, bool printTop = true, bool printBottom = true)
{
 if (printTop)
    {
        cout << "+---------------------------------+" << endl;
        cout << "|";
    }
    else
    {
        cout << "|";
    }
    bool front = true;
    for (int i = message.length(); i < 33; i++)
    {
        if (front)
        {
            message = " " + message;
        }
        else
        {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();
 
    if (printBottom)
    {
        cout << "|" << endl;
        cout << "+---------------------------------+" << endl;
    }
    else
    {
        cout << "|" << endl;
    } 
}
void hangG::Hangman(int guessCount = 0)
{
    if (guessCount >= 1)
        gameFormat("|", false, false);
    else
        gameFormat("", false, false);
 
    if (guessCount >= 2)
        gameFormat("|", false, false);
    else
        gameFormat("", false, false);
 
    if (guessCount >= 3)
        gameFormat("O", false, false);
    else
        gameFormat("", false, false);
 
    if (guessCount == 4)
        gameFormat("/  ", false, false);
    
    if (guessCount == 5)
        gameFormat("/| ", false, false);
 
    if (guessCount >= 6)
        gameFormat("/|\\", false, false);
    else
        gameFormat("", false, false);
 
    if (guessCount >= 7)
        gameFormat("|", false, false);
    else
        gameFormat("", false, false);
 
    if (guessCount == 8)
        gameFormat("/", false, false);
 
    if (guessCount >= 9)
        gameFormat("/ \\", false, false);
    else
        gameFormat("", false, false);
}
string hangG::RandomWordp1(string w)
{
  cout << "Player 1 please enter a word"<< endl;
  cin >> w;
  stackHangMan st;
  st.pushLetter(w);
  return w;

   
}

string hangG::RandomWordp2(string x)
{
  cout << "Player 2 please enter a word"<< endl;
  cin >> x;
  stackHangMan st;
  st.pushLetter(x);
  return x;
}

void hangG::printLetters(string input, char from, char to)
{
   string s;
    for (char i = from; i <= to; i++)
    {
        if (input.find(i) == string::npos)
        {
            s += i;
            s += " ";
        }
        else
            s += "  ";
    }
    gameFormat(s, false, false);
}
void hangG::lettersLeft(string take)
{
  gameFormat("Available letters");
    printLetters(take, 'A', 'M');
    printLetters(take, 'N', 'Z');
}
bool hangG::Check(string word,string guessed)
{
  bool won = true;
    string s;
    for (int i = 0; i < word.length(); i++)
    {
        if (guessed.find(word[i]) == string::npos)
        {
            won = false;
            s += "_ ";
        }
        else
        {
            s += word[i];
            s += " ";
        }
    }
    gameFormat(s, false);
    return won;
}
int hangG::TriesLeft(string word,string guessed)
{
  int error = 0;
    for (int i = 0; i < guessed.length(); i++)
    {
        if (word.find(guessed[i]) == string::npos)
            error++;
    }
    return error;
}