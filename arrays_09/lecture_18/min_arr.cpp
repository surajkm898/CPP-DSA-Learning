#include <iostream>
#include <climits>
using namespace std ;
int main (){
    int n , m = INT_MAX;
    int x[n];
    cout << " enter your arrar size ";
    cin >> n ;
    for (int i=0;i<n;i++){
        cin >>x[i];
    }
        for (int i=0;i<n;i++){
            if( m>x[i]){
                m =x[i];
            }
        }
        cout <<m;
}