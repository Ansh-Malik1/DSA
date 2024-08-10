#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int arr[] = {1,2,4,65,78,-1,-40};
  int max = INT_MIN;
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
    if(arr[i]>=max){
      max=arr[i];
    }
  }
  cout<<"Maximum number is: "<<max<<endl;
  return 0;
}