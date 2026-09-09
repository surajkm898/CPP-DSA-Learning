#include <iostream>
using namespace std;
int main (){
    int m = 5;
    int x[] = {4,5,8,2,3};
    int n = sizeof(x)/4;
    bool flag = false ; //not present
    for(int i=0;i<=n-1;i++){
        if (x[i]==m){
            flag = true ;
            break;
        }
    }
    if (flag == true ){
        cout<<" element found";
    }else cout << " not found";
}