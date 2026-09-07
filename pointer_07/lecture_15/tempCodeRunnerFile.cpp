#include <iostream>
using namespace std;
int sum(int* aptm, int* bptm){
    int c = *aptm+*bptm ;
    return c;
}
int main (){
   int a, b;
   cout << "enter your a and b number";
   cin>>a>>b;
   cout << sum(&a,&b);
}