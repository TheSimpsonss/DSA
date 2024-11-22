#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate SIP maturity amount
double calculateSIP(double monthlyInvestment, double annualInterestRate, int investmentPeriodInYears)
{
    double monthlyInterestRate = annualInterestRate / 12 / 100;
    int totalMonths = investmentPeriodInYears * 12;

    // Formula to calculate SIP maturity amount
    double maturityAmount = monthlyInvestment * (pow(1 + monthlyInterestRate, totalMonths) - 1) /
                            monthlyInterestRate * (1 + monthlyInterestRate);

    return maturityAmount;
}

int main()
{
    double monthlyInvestment, annualInterestRate;
    int investmentPeriodInYears;

    // Input monthly investment amount, annual interest rate, and investment period
    cout << "Enter monthly investment amount: ";
    cin >> monthlyInvestment;
    cout << "Enter annual interest rate (in percentage): ";
    cin >> annualInterestRate;
    cout << "Enter investment period in years: ";
    cin >> investmentPeriodInYears;

    // Calculate SIP maturity amount
    double maturityAmount = calculateSIP(monthlyInvestment, annualInterestRate, investmentPeriodInYears);

    // Display the maturity amount
    cout << "Your SIP maturity amount after " << investmentPeriodInYears << " years will be: " << maturityAmount << endl;

    return 0;
}
