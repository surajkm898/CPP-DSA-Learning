#include <iostream>
using namespace std;
int main (){
    float n ;
    cout << " enter your number ";
    cin >> n ;
    if (n >=1000 && n<= 9999)   cout << "four digit number";
    else cout << "not a four digit number ";
}