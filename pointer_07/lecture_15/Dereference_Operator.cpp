#include <iostream>
using namespace std;
int main (){
    int a = 145;
    int* ptr = &a;
        cout <<a<<endl;
        *ptr =10;
        cout <<a;
}