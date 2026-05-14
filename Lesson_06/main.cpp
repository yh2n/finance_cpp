#include <iostream>
#include <cmath>
#include <iomanip>
#include "divisor.h"
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

    double payment = 0.0;
    payment = principal * (month_interest / (1 - (pow(1 + month_interest, - months_of_loan))));

    // if error message: "call to 'pow' is ambiguous" => need to "cast" to make sure 'pow' takes same type of values
    // payment = principal * (month_interest / (1 - (pow((double)1 + month_interest, - (double)months_of_loan))));

    cout << "Payment: " << setiosflags(ios::fixed) << setprecision(2) << payment << endl;

    return 0;
}