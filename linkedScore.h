#ifndef SCORE_H
#define SCORE_H
using namespace std;

class linked
{
  private :
    struct Node
    {
      int score1;
      int score2;
      Node *next;
    };
    Node *head;
  public :
    linked(){
      head = nullptr;
    }
    // destructor
    ~linked ()
    {
    	Node *nodePtr;
    	Node *next;
    	nodePtr = head;
    	
    	while (nodePtr != nullptr)
    	{
    		next = nodePtr->next;
    		delete nodePtr;
    		nodePtr = next;
		}
	}
    void appendScorep1(int);
    void appendScorep2(int);
    void displayScorep1() const;
    void displayScorep2() const;
};


#endif