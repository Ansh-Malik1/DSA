#include <iostream>
using namespace std;

int main() {
  int arr[] = {1,2,3,4,5,6,7,8};
  int flag=0;
  int position=0;
  int key=6;
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<size;i++){
    if(arr[i]==key){
      flag=1;
      position=i+1;
      break;
    }
  }
  flag? (cout<<"Element found at "<<position<<" position") : (cout<<"Element not found");
  return 0;
}