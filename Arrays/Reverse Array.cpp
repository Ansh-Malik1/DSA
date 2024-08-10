#include <iostream>
#include <limits.h>
using namespace std;

int main() {
  int arr[] = {1,2,4,65,78,-1,40};
  int i=0;
  int j = sizeof(arr)/sizeof(arr[0])-1;
  while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
  }
  for(int k=0;k<(sizeof(arr)/sizeof(arr[0]));k++){
    cout<<arr[k]<<endl;
  }
  return 0;
}