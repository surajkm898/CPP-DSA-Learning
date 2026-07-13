#include <iostream>
using namespace std;
int main (){
    int x ,y,z ;
    cout << " enter your 1 number " ;
    cin>> x;
    cout << " enter your 2 number " ;
    cin>> y;
    cout << " enter your 3 number " ;
    cin>> z;
        if (x < y && x<z){ 
            cout <<" 1 number is least ";}
             else if ( y< x && y<z){
                cout << " 2 number is least  " ;}
                else {cout << " 3  number is least  " ;
             } 
} 