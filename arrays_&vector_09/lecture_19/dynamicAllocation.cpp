#include<iostream>
using namespace std;
int main (){
    // int x[7] ; //static allocation
    int* brr = new int[7] ; //dynamic allocation
    brr[0] = 3;
    cout<<brr[0];
}