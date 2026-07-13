#include <iostream>
using namespace std;
int main (){
    int x,y ;
    cout << " enter your x  ";
    cin >> x ;
    cout << " enter your y  ";
    cin >> y ;
    if (x > 0 && y> 0) cout <<" 1st quadrant ";
    else if  (x < 0 && y> 0) cout <<" 2nd quadrant ";
    else if  (x < 0 && y< 0) cout <<" 3st quadrant ";
    else if  (x > 0 && y< 0) cout <<" 4st quadrant ";
    else if  (x == 0 && y!= 0) cout <<" y-axis ";
    else if  (x != 0 && y== 0) cout <<" x-axis ";
}