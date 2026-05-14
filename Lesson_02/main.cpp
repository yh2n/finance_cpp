#include <iostream>

using namespace std;

int main() {
    // naming convention https://google.github.io/styleguide/cppguide.html#Variable_Names
    const int kMonthInYear = 12;
    double principal = 100000.0;
    double interest = 0.005;
    int years_of_loan = 30;
    
    double month_interest = interest/kMonthInYear;
    long months_of_loan = years_of_loan * kMonthInYear;

    cout << principal << " " << interest << " " << 
        years_of_loan << " " << month_interest << " " <<
        months_of_loan << endl;

    return 0;
}