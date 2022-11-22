#include <iostream>
using namespace std;

int main(void){
    cout << (10 / 4) << endl;
    cout << (1 / 3) << endl;
    cout << (10 % 4) << endl;

    cout << (1 + 2 * 3) << endl;
    cout << ((1 + 2) * 3) << endl;
    cout << (1 / 3) << endl;
    cout << (1 / 3.0) << endl;

    cout << (1 < 2) << endl;
    cout << (3 < 2) << endl;

    cout << (1 < 2 && 2 < 3) << endl;
    cout << (1 < 2 && 3 < 2) << endl;
    cout << (2 < 1 || 1 < 2) << endl;
    cout << (!(2 < 1)) << endl;

    cout << (1 < 2 && 0) << endl;
    cout << (0 || 1 < 2) << endl;

    cout << "neko" << endl;

    int a = 5, b = 3;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (~a) << endl;

    cout << "inu" << endl;
    int c = 5;
    cout << (c >> 1) << endl;
    cout << (c >> 2) << endl;
    cout << (c << 1) << endl;
    cout << (c << 2) << endl;

    cout << "tanuki" << endl;
    int d = 0;
    cout << (d = 5) << endl;
    cout << d << endl;

}