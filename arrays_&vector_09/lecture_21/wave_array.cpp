#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void sortInWave(vector<int> &arr){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    for(int i=0;1+i<n;i +=2){
        
            swap(arr[i],arr[i+1]);
        
    }

}


int main(){
    
    vector<int> arr = {1, 3, 2, 4, 5};
    sortInWave(arr);
    for (int i=0; i<arr.size(); i++)
       cout << arr[i] << " ";
    return 0;
}