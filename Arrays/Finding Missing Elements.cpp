#include <iostream>
using namespace std;

int main() {
  int a[] = {3,3,3,3,3};
 
  int size = sizeof(a)/sizeof(a[0]);
  for(int i = 0 ; i<size ; i++){
    int index = abs(a[i]);
    if(a[index-1]>0){
      a[index-1]*=-1;
    }
  }
  for(int j = 0 ; j<size ; j++){
    if(a[j]>0){
      cout<<j+1<<' ';
    }
  }
  return 0;
}