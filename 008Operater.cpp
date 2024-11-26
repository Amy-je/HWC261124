#include <iostream>
using namespace std;

int main(){
    float boymoney;
    float girlmoney;
    cout << "Enter Boy money = ";
    cin >> boymoney;
    cout << "Enter Girl money  = ";
    cin >> girlmoney;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(15);
    cout << "\noperater + = " << boymoney + girlmoney;
    cout << "\noperater - = " << boymoney - girlmoney;
    cout << "\noperater * = " << boymoney * girlmoney;
    cout << "\noperater / = " << boymoney / girlmoney;

    return 0;
}