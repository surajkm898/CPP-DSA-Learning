#include <iostream>
using namespace std;
int main (){
    int n;
    cout << " enter your number " ;
    cin>> n;
    
    for (int i=1;i<=n;i++){
        int z=65;
        for (int j=1;j<=n;j++){
              cout<<(char)z;
            z++;
        }
        cout << endl;
    }
}