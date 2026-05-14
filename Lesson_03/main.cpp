#include <iostream>

using namespace std;

int main() {
    const int kMonthInYear = 12;

    double principal = 0.0;
    cout << "Enter the principal amount: ";
    cin >> principal;

    double interest = 0.0;
    cout << "Enter the interest rate: ";
    cin >> interest;

    int years_of_loan = 0;
    cout << "Enter years of loan: ";
    cin >> years_of_loan;

    double month_interest = interest/kMonthInYear;
    long months_of_loan = years_of_loan * kMonthInYear;

    cout << principal << " " << interest << " " << 
        years_of_loan << " " << month_interest << " " <<
        months_of_loan << endl;

    return 0;
}