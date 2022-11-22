#include <iostream>
using namespace std;

int main (){
    int a = 10;
    int* pA = &a;
    int** ppA = &pA;
    cout << **ppA << endl;

    using uint = unsigned int;
    uint x = 0;
    cout << x << endl;
}