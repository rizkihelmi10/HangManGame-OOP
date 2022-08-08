#include <iostream>
#include "linkedScore.h"
using namespace std;

void linked::appendScorep1(int value)
{
  Node *newNode;
  Node *nodePtr;

  newNode = new Node;
  newNode->score1=value;
  newNode->next= nullptr;

  if(!head)
  {
    head = newNode;
  }
  else 
  {
    nodePtr=head;
    while(nodePtr->next)
    {
      nodePtr= nodePtr->next;
    }
    nodePtr->next=newNode;
  }
}
void linked::appendScorep2(int val)
{
  Node *newNode;
  Node *nodePtr;

  newNode = new Node;
  newNode->score2=val;
  newNode->next= nullptr;

  if(!head)
  {
    head = newNode;
  }
  else 
  {
    nodePtr=head;
    while(nodePtr->next)
    {
      nodePtr= nodePtr->next;
    }
    nodePtr->next=newNode;
  }
}

void linked::displayScorep1() const
{
    Node *nodePtr;
  nodePtr = head;
  while (nodePtr != nullptr){
    cout << nodePtr->score1 <<endl;
   nodePtr = nodePtr->next;
  }
}

void linked::displayScorep2() const
{
  Node *nodePtr;
  nodePtr = head;
  while (nodePtr != nullptr){
    cout << nodePtr->score2 <<endl;
   nodePtr = nodePtr->next;}
}


