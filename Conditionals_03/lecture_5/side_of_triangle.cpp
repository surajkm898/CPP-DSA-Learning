#include <iostream>
using namespace std;
int main (){
    float n ,y ,x ;
    cout << " enter your 1 side of triangle : ";
    cin >> n ;
    cout << " enter your 1 side of triangle : ";
    cin >> y ;
    cout << " enter your 1 side of triangle : ";
    cin >> x ;
        if ( n+y>x && n+x>y && x+y>n)
        cout << " three side of triangle " ;
        else cout << " not three side of triangle " ;
} 