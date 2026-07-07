#include <iostream>
using namespace std;
int main (){
    float p ,r , t;
    cout << "enter amount ";
        cin >> p ;
    cout << "enter rate of inters ";
        cin >> r ;
    cout << "enter time in year ";
        cin >> t ;
    float si =(p*r*t)/100 ;
    cout << " simple interest " << si ;
}