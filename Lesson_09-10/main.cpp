#include <iostream>
#include <cmath>
#include <iomanip>
#include "divisor.h"
#include "multiplier.h"
#include "globals.h"


using namespace std;

int main(int argc, char* argv[]) {
    // argc: 'argument count' => how many arguments were entered on command line when program started
    // argv: 'argument vector' => array of pointers to arrays of character objects, e.g: argv[0] name of the program
    cout << "argc: " << argc << endl;
    cout << "argv[0]: " << argv[0] << endl;

    for(int i = 0; i < argc; ++i) {
        cout << "argv[" << i << "]: " << argv[i] << endl;
    }

    double principal = 0.0;
    cout << "Enter the principal amount: ";
    cin >> principal;

    double human_interest = 0.0;
    cout << "Enter the interest rate: ";
    cin >> human_interest;

    double interest = divisor(human_interest, kPercentDenominator);

    int years_of_loan = 0;
    cout << "Enter years of loan: ";
    cin >> years_of_loan;

    double month_interest =  divisor(interest, kMonthsInYear);
    long months_of_loan = multiplier(years_of_loan, kMonthsInYear);

    double payment = 0.0;
    payment = principal * (month_interest / (1 - (pow(1 + month_interest, - months_of_loan))));

    cout << "Payment: " << setiosflags(ios::fixed) << setprecision(2) << payment << endl;

   double curr_interest_payment = 0.0;
   double curr_principal_payment = 0.0;
   double curr_balance = 0.0;

   curr_balance = principal;

   long curr_loan_month = 1;

   while(curr_loan_month <= months_of_loan) {
    AmortizeMonth amort_month;

    curr_interest_payment = curr_balance * month_interest;
    curr_principal_payment = payment - curr_interest_payment;
    curr_balance = curr_balance - curr_principal_payment;

    amort_month.year = 1;
    amort_month.year_month = 1;
    amort_month.loan_month = 1;
    amort_month.payment = payment;
    amort_month.pure_interest = curr_interest_payment;
    amort_month.paid_down_principal = curr_principal_payment;
    amort_month.principal_balance = curr_balance;


    cout << "CM: " << amort_month.loan_month << "| CI: " << 
    amort_month.pure_interest << "| CP: " << amort_month.paid_down_principal <<  
    "| Bal: " << amort_month.principal_balance << endl;

    curr_loan_month++;
   }

    cout << "Loan payments complete." << endl;

    return 0;
}