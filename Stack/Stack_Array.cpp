#include<bits/stdc++.h>
using namespace std;

#define size 5
int arr[size], top = -1;

void push(int value) {
  if (top == size - 1 ) {
    cout<<"Stack Overflow \" Is Full \" \n";
  } else {
    top++;
    arr[top] = value;
  }
}

void pop() {
  if (top == -1) {
    cout<<"The Stack is Empty \n";
  } else { 
    top--;
  }
}

void display() {
  if (top == -1) {
    cout<<"The Stack is Empty \n";
  } else {
    while (top != -1) {
      cout<<arr[top]<<endl;
      top--;
    }
  }
}

int getTop() {
  if (top == -1) {
    return -1;
  } else {
    return arr[top];
  }
}

int main() {
  display();
  push(10);
  push(20);
  push(60);
  pop();
  push(40);
  push(30);
  display();
  getTop() == -1 
  ? cout<<"TOP!!!! The Stack is Empty"<<endl 
  : cout<<"The Top Elemenet "<<getTop()<<endl;

  cout<<'\n';

  push(10);
  push(20);
  pop();
  push(60);
  push(40);
  push(30);
  display();
}