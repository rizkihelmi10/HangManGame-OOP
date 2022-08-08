#ifndef STHANGMAN_H
#define STHANGMAN_H
#include <string>
using namespace std;

class stackHangMan 
{
	private :
		//const int MAX_CHANCE = 3;
		//string hidden word;
		struct letterNode
		{
			string letter;
			letterNode *next;
			
		};
		letterNode *top;
	
	public :
		stackHangMan();
		~stackHangMan();
		void pushLetter(string);
		void popLetter(char);
    bool isEmpty();
};

#endif