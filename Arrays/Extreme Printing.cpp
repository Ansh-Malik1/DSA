#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int arr[] = {1,2,4,65,78,-1};
  int i=0;
  int max = INT_MIN;
  int j = sizeof(arr)/sizeof(arr[0])-1;
  while(i<=j){
    if(i==j){
      cout<<arr[i]<<endl;
      break;
    }
    cout<<arr[i++]<<endl;
    cout<<arr[j--]<<endl;
  }
  return 0;
}