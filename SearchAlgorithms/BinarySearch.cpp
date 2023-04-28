#include<bits/stdc++.h>
using namespace std;

void binarySearch (int arr[], int size, int value) {
  int left = 0, right = size - 1;
  int mid;

  while (left <= right) {
    mid = (left + right) / 2;

    if (arr[mid] == value) {
      cout<<"The Value "<<value<<" You Search for is EXIST!"<<endl;
      return;
    } else if (arr[mid] > value) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  cout<<"The Value "<<value<<" You Search for is NOT EXIST ):"<<endl;
}

int main() {
  cout<<"Binary Search Algorithm \n";
  cout<<"------------------------ \n";

  int size, value;
  cout<<"Enter Array Size: ";
  cin>>size;
  int arr[size];
  cout<<"Enter The Elemnts of The Array - "<<size<<" Elements \n";
  for(int i = 0; i < size; i++) cin>>arr[i];
  sort(arr, arr + size);
  cout<<"Enter The Value you Want to Search For: ";
  cin>>value;

  binarySearch(arr, size, value);
}