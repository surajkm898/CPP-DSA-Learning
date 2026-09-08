#include<iostream>
using namespace std;
int main (){
    int x[] ={23,56,48,56,36,78,98,4,57};
    int n =sizeof(x)/4;
    for (int i=0;i<=n-1;i++){
        cout<<x[i]<<" ";
    }
}