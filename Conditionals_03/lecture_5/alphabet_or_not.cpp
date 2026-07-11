#include <iostream>
using namespace std;
int main (){
    char ch ;
    cout << " enter your char " ;
    cin >> ch ;
    int x = (int)ch;
    if ( (65<=x && 90 >= x)|| (97<=x && 122 >=x) )
    cout << " thise is alphabet " ;
        else cout << " thise not a alphabet " ;
} 