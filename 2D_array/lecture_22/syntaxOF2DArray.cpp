#include <iostream>
using namespace std;
int main (){
    int arr[][4] = {{5,6,1,3},{2,5,4,6,},{2,3,5,4}} ;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}