#include <iostream>
using namespace std;

int main (){
    cout << "My ascii value on my system" << endl;
    for (char i = 0; i < 128; i++)
    {
        cout << i << "=" << (char)i << endl;
    }
    



    return 0;

}