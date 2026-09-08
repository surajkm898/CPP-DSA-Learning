#include <iostream>
using namespace std;
int main (){
    int a= 10;
    int* ptr = &a;
    int** p =&ptr;
    cout<<a << endl;;
    cout<<ptr<<endl;
    cout<<p<<endl;
}