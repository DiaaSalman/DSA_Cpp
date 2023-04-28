#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int size, int value) {
  for(int i = 0; i < size; i++) {
    if(arr[i] == value) {
      cout<<"The Value "<<value<<" You Search for is EXIST!"<<endl;
      return;
    }
  }
  cout<<"The Value "<<value<<" You Search for is NOT EXIST ):"<<endl;
}

int main() {
  cout<<"Linear Search Algorithm \n";
  cout<<"------------------------ \n";
  
  int size, value;
  cout<<"Enter Array Size: ";
  cin>>size;
  int arr[size];
  cout<<"Enter The Elemnts of The Array - "<<size<<" Elements \n";
  for(int i = 0; i < size; i++) cin>>arr[i];
  cout<<"Enter The Value you Want to Search For: ";
  cin>>value;

  linearSearch(arr, size, value);
}