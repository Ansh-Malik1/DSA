#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> arr {0,0,1,1,0,1,0,1,0,1,1,0,0,1,0};
  int i,start = 0;
  int end = arr.size()-1;
  while(start<end){
    if(arr[i]==0){
      int temp = arr[i];
      arr[i]=arr[start];
      arr[start] = temp;
      start++;
      i++;
    }
    else{
      int temp = arr[i];
      arr[i]=arr[end];
      arr[end] = temp;
      end--;
    }
  }
  for(int j = 0 ; j<arr.size();j++){
    cout<<arr[j]<<" ";
  }
  return 0;
}