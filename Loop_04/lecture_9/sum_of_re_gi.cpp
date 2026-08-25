#include <iostream>
using namespace std;
int main(){
    int n = 1234;
    int revs = 0;
    int sum = 0;
     while(n != 0){
        int lastdig = n%10;
        sum += lastdig;
        revs *= 10;
        revs += lastdig;
        n/=10;
     }
     cout<<"sum of give or re is "<<2*sum<<" ";
     cout <<revs<<" ";
}