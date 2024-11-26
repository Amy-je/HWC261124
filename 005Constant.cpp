#include <iostream>
using namespace std;

int main(){
    const int Pi=3.14;//const
    const float Pii=3.14;//float ทศนิยม
    int r;
    cout << Pi << endl;
    cout << Pii << endl;
    cout <<"..........................................\n";
    cout <<"\n";


    cout << "Enter value of redious =";
    cin >> r;
    cout << "Area of circle = " << Pii*r*r << endl;
    cout << "Area of circle = " << Pi*r*r << endl;
    cout <<"Circumference   = " << 2*Pii*r << endl;



    return 0;

}