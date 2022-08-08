#include <iostream>
#include <string.h>
#include "stackHang.h"
using namespace std;

stackHangMan::stackHangMan()
{
  top =nullptr;
}
stackHangMan::~stackHangMan()
{
  letterNode *nodeptr, *nextNode;
	// position nodePtr at the top of the stack.
	nodeptr= top;
	// traverse the list deleting each node
	while (nodeptr!= nullptr)
	{
		nextNode = nodeptr->next;
		delete nodeptr;
		nodeptr = nextNode;
	}
}

void stackHangMan::pushLetter(string i)
{
  letterNode *newnode = nullptr; // pointer to newnode as null
	newnode = new letterNode;
	newnode->letter = i;
	if(isEmpty())
	{
		top = newnode;
		newnode->next = nullptr;
	}
	else // otherwise, insert newnode before top.
	{
		newnode->next = top;
		top = newnode;
	}
}

bool stackHangMan::isEmpty()
{
  bool status;
  if (!top)
  
   status = true;
  
  else 
  
    status = false;
  return status;
}