#include <iostream>
#include <vector>
using namespace std;

// Function to segregate 0s and 1s
void segregate0and1(vector<int>& arr) {
    int zero = 0,ones = 0;
  for(int i=0;i<arr.size();i++){
    if(arr[i]==0) zero++;
    else ones++;
  } 
  for(int i=0;i<zero;i++){
   arr[i]=0;
  } 
  for(int i=zero;i<arr.size();i++){
   arr[i]=1;
  } 
    
}

int main() {
    vector<int> arr = { 0, 1, 0, 1, 1, 1 };

    segregate0and1(arr);
    for(int v: arr){
        cout<<v<<" ";
    }
    return 0;
}