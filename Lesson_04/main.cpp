#include <iostream>

using namespace std;

double divisor(double numerator, double denominator) {
    return numerator/denominator;
}

double multiplier(double first_num, double second_num) {
    return first_num * second_num; 
}

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
    long months_of_loan = divisor(years_of_loan, kMonthsInYear);

    cout << "Principal: " << principal << "|" <<  "Interest rate: " << human_interest << "|" << 
        "Loan duration: " << years_of_loan << "|" <<"Monthly nterest: " << month_interest << "|" <<
        "Number of payments: " << months_of_loan << endl;

    return 0;
}