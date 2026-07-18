#include <iostream>
using namespace std;
int main(){
    int y;
    cout <<" enter your number of table" ;
    cin >> y;
     int j = 10;
    for (int i = 1;i<=j;i++){
        int x = y ;
        x *= i;
        cout <<x <<endl ;
    }
}