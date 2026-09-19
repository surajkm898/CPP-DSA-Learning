#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>arr(5,-1); // index 0 to 4
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    arr.push_back(5); //add an element
    arr.push_back(4);
    arr.pop_back();  //removes last element
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}