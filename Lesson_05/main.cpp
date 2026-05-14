#include <iostream>
#include  "divisor.h"
#include "multiplier.h"

using namespace std;

int main() {
    const int kMonthsInYear = 12;
    const int percent_denominator = 100;

    double principal = 0.0;
    cout << "Enter the principal amount: ";
    cin >> principal;

    double human_interest = 0.0;
    cout << "Enter the interest rate: ";
    cin >> human_interest;

    double interest = divisor(human_interest, percent_denominator);

    int years_of_loan = 0;
    cout << "Enter years of loan: ";
    cin >> years_of_loan;

    double month_interest =  divisor(interest, kMonthsInYear);
    long months_of_loan = multiplier(years_of_loan, kMonthsInYear);

    cout << "Principal: " << principal << "|" <<  "Interest rate: " << human_interest << "|" << 
        "Loan duration: " << years_of_loan << "|" <<"Monthly interest: " << month_interest << "|" <<
        "Number of payments: " << months_of_loan << endl;

    return 0;
}