#include <iostream>
#include <typeinfo>

using namespace std;

int main(void){
    using dou = double; 
    dou x = 0;
    dou y = 0;
    cout << x << "neko" << y << typeid(x).name() <<  endl;
}