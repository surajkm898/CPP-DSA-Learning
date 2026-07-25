#include <iostream>
using namespace std;
void pattern (int n){
     for(int i=1; i<=n;i++){
        for (int j=1;j<=i;j++){
        cout<<"* ";}
        cout<<endl;
    }
}
int main (){
    int n =3,y=4,z=5;
    pattern(n);
    pattern(y);
    pattern(z);
}