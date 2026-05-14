const int kMonthsInYear = 12;
const int kPercentDenominator = 100;

struct AmortizeMonth {
    int year;
    int year_month;
    long loan_month;
    double payment;
    double pure_interest;
    double paid_down_principal;
    double principal_balance;
};
