#include<bits/stdc++.h>
using namespace std;

// Create node
struct node {
  int data;
  node* next;
};

node* top = NULL;

// Push to Stack
void push(int value);
// Display Stack Elements
void display();
// Delete The Top Element
void pop();
// Get Top Element
int peek();

int main() {
  cout<<"Stack With Linked List \n";
  push(15);
  push(25);
  push(35);
  pop();
  push(5);
  push(55);
  display();
  cout<<"The Top Element in The Stack "<<peek();
}

void push(int value)  {
  node* new_node = new node;
  new_node -> data = value;
  new_node -> next = top;
  top = new_node;
}

void pop() {
  if (top == NULL) {
    cout<<"The Stack is Empty!!!";
  } else { 
    node* current = top;
    top = top -> next;
    delete(current);
  }
}

void display() {
  if (top == NULL) {
    cout<<"The Stack is Empty!!!";
  } else {
    node* current = top;
    while(current != NULL) {
      cout << current -> data<<endl;
      current = current -> next;
    }
  }
}

int peek() {
  if (top == NULL) {
    cout<<"The Stack is Empty!!!";
    return -1;
  } else {
    return top -> data;
  }
}