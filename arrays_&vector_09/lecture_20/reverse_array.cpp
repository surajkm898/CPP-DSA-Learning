#include <iostream>
#include <vector>
#include <algorithm>

 using namespace std;
void print(vector<int>& v){
    for(int ele : v) cout<<ele<<" ";
    cout<<endl;
}
int main (){
    vector<int> v = {10,20,30,40,50,60,70};
    int i = 0, j = v.size()-1;
    print(v);
    while (i<j)
    {
        int temp = v[i];  // m2 => swap(a[i],b[j]);
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    print(v);
}
