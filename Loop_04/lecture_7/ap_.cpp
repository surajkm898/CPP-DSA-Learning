#include <iostream>
using namespace std;
int main (){
    int a ,d ,n;
    cout <<" enter fist term" ;
    cin >> a;
    cout <<" enter com  diff" ;
    cin >>d ;
    cout <<" enter  number of terms" ;
    cin >> n;
     int j = 10;
    for (int i = a;i<=n;i+=d){
        cout<<i<<" ";
    }
}