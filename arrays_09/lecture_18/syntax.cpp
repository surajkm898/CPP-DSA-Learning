#include <iostream>
#include <iterator>
using namespace std;
int main (){
    int x[] = {23,4,55,46,23,78};
    //cout<<std::size(x)<<endl; for new c++
    cout <<sizeof(x)/4<<endl;
    cout <<x[2]<<endl;
      x[2] = 10;
    cout <<x[2]<<endl;
    cin >>x[2];
    cout <<x[2]<<endl;
}