#include <iostream>
using namespace std;

int main() {
  int arr[]={1,2,3,-1,-21,9,-12,92,-81,4,-41,-2};
  int i=0;
  int j=sizeof(arr)/sizeof(arr[0])-1;
  while(i<j){
    if(arr[j]>=0){
      j--;
    }
    else if(arr[i]<0){
      i++;
    }
    else{
      int temp = arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
    }
  }
  for(int k = 0 ; k < sizeof(arr)/sizeof(arr[0]) ; k++){
    cout<<arr[k]<<" ";
  }
  return 0;
}