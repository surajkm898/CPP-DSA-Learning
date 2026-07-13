#include <iostream>
using namespace std;
int main (){
    int n ;
    cout << " enter your number : " ;
    cin >> n;
        if ( n%5 == 0 && n%3 == 0){
            cout << " anuj";
        }else if ( n%5 == 0){
            cout << " kartikey ";}
            else if ( n%3 == 0){
            cout << " saksh ";}
            else cout << "hitesh ";
}