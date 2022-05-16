#ifndef Q_H
#define Q_H

// include this library to use NULL, otherwise use nullptr instead
#include <cstddef>
#include <iostream>

/* Struct which will be the building block of our list */
struct node {
  int val;
  node *next;
};

/* Linked list class definition */
class Queue {
public:
  Queue();
  void enq(int);
  bool deq();
  bool isEmpty();
  node *getFront();
  void print();
  node *makeNode(int, node *);

private:
  node *front;
  node *back;
};

#endif
