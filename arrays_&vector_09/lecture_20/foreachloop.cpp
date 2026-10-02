#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> v = { 5,6,8,4};
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            v[i] *= 2;
        } 
    }
    for (int ele : v){
        cout<<ele<<" ";
    }
}
