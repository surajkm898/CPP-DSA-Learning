#include<iostream>
using namespace std;
int main (){
    int x[] ={23,56,48,56,36,78,98,4,57};
    int n =sizeof(x)/4;
    cout<<x<<endl;
    cout <<&x[0]<<endl;
    cout <<&x[1]<<endl;
    cout <<&x[2]<<endl;
}