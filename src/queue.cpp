#include "queue.h"

Queue::Queue() {
  this->front = NULL;
  this->back = NULL;
}

void Queue::enq(int num) {
  // Get a reference to front
  node **dblNodePtr = &(this->front);

  // Traverse while node is not null
  while (*dblNodePtr) {
    dblNodePtr = &(*dblNodePtr)->next;
  }

  // Append node to the end of the list
  *dblNodePtr = this->makeNode(num, NULL);
}

bool Queue::deq() {
  // Return if no front
  if (!this->front) {
    return false;
  }

  // Remove the front node
  node *toDeq = this->front->next;
  delete this->front;
  this->front = toDeq;

  return true;
}

node *Queue::makeNode(int val, node *nextNode = NULL) {
  node *madeNode = new node;

  madeNode->val = val;
  madeNode->next = nextNode;

  return madeNode;
}

node *Queue::getFront() { return this->front; }

bool Queue::isEmpty() {
  // If the front is null, the list is empty
  return (this->front != NULL);
}

void Queue::print() {
  node *nodePtr = this->front;

  // Traverse, printing each node's value
  while (nodePtr) {
    std::cout << nodePtr->val << " -> ";
    nodePtr = nodePtr->next;
  }

  std::cout << "NULL" << std::endl;
}
