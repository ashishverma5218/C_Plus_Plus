// Linked list implementation in C++
#include <bits/stdc++.h>
#include <iostream>
 using namespace std;
// Creating a nodeclass Node
class Node
 {
    public:
    int value;
    Node* next;
};

int main() {

  Node* head;
  Node* one = NULL;
  Node* two = NULL;
  Node* three = NULL;
  Node* four  = NULL;
  // allocate 3 nodes in the heap

  one = new Node();
  two = new Node();
  three = new Node();
  four =  new Node();
  // Assign value values

  one->value = 15;
  two->value = 22;
  three->value = 33;
  four-> value = 44;
  // Connect nodes

  one->next = two;
  two->next = four;
  three->next = one;
  four->next = NULL;
  // print the linked list value

  head = three;
  while (head != NULL) {
    cout << head->value<<endl;
    head = head->next;
  }
}