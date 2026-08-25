#include <iostream>
using namespace std;
int main(){
    int n = 1234;
    int revs = 0;
     while(n != 0){
        int lastdig = n%10;
        revs *= 10;
        revs += lastdig;
        n/=10;
     }
     cout <<revs;
}