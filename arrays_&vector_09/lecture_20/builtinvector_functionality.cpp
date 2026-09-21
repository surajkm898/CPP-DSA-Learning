#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    vector<int> v = {3,5,2,6,7,4};
   sort(v.begin(),v.end());
    for( int ele: v) cout<<ele<<" ";
}