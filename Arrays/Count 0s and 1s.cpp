#include <iostream>
using namespace std;

int main() {
  int arr[] = {0,1,1,1,0,1,0,1,1,0,0,0,1,0,0};
  int oneCount = 0;
  int zeroCount = 0;
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
    if(arr[i]==0){
      zeroCount++;
    }
  }
  oneCount = size-zeroCount; // can also be calculated in loop using another condition if conditions in question changes.
  cout<<"Number of 1s: "<<oneCount<<endl;
  cout<<"Number of 0s: "<<zeroCount<<endl;
  return 0;
}