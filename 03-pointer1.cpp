#include <iostream>
using namespace std;

int main (){
    int a = 10;
    int* pA = &a;
    *pA = 20;
    cout << a << endl;
}