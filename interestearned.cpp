#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double principal, rate, amount, interest;
    int times;

    cout << "Enter the principal: ";
    cin >> principal;
    cout << "Enter the interest rate (as %): ";
    cin >> rate;
    cout << "Enter the number of times compounded per year: ";
    cin >> times;

    amount = principal * pow(1 + (rate / 100) / times, times);
    interest = amount - principal;

    cout << fixed << setprecision(2);
    cout << "Interest Rate:     " << rate << "%" << endl;
    cout << "Times Compounded:  " << times << endl;
    cout << "Principal:        $" << principal << endl;
    cout << "Interest:         $" << interest << endl;
    cout << "Amount in Savings:$" << amount << endl;

    return 0;
}