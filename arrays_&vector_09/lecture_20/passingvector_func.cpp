#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void change(vector<int>& v) {  //pass by value without & using than
    v[2] = 99;
}

int main (){
    vector<int> v = { 5,6,8,7,4};
        change(v);
        cout<<v[2]<<endl;
}
