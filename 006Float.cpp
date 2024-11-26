#include <iostream>
using namespace std;

int main(){
    float price = 10.0/3.0;
    float scale = 10e6;
    cout.setf(ios_base::fixed, ios_base::floatfield);// ทศนิยม 6 ตำแหน่ง
    cout << price * scale << endl;
    // Float มี 3 แบบ float, double, long double
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;



    return 0;
}