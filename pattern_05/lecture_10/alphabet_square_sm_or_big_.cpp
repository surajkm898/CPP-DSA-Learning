#include <iostream>
using namespace std;
int main (){
      int n;
    cout << " enter your number " ;
    cin>> n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j%2!=0){
                cout <<(char)(j+96)<<" ";
            }else{
                cout<<(char)(j+64)<<" ";
            }
        }
        cout << endl;
    }
}