#include <iostream>
#include <climits>
using namespace std;
int main (){
    int n , m = INT_MAX;
    cout << " enter your array size ";
    cin >>n;
    int x[n];
    for (int i=0;i<n;i++ ){
        cin>> x[i];
    }
        for (int j=0;j<n;j++){  // for min
            if (m > x[j]){
                m =x[j];
            }
        }
            int se = INT_MAX;
            for (int k=0;k<n;k++){  // for sec min
                if( se > x[k] && x[k] != m){
                    se = x[k];
                }
            }
                cout<<"sec min" <<se;
}