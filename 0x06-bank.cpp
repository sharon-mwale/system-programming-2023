#include <iostream>
#include "0x06-bank.h"
#include <string.h>

using namespace std;

void bank::withdraw() // withdrawing an amount
{
    int wamt1;
    cout << "\n Enter Withdraw Amount = ";
    cin >> wamt1;
    if (wamt1 > bal)
        cout << "\n Cannot Withdraw Amount";
    bal -= wamt1;
}
void bank::display() // displaying the details
{
    cout << "\n ----------------------";
    cout << "\n Accout No. : " << acno;
    cout << "\n Name : " << nm;
    cout << "\n Account Type : " << acctype;
    cout << "\n Balance : " << bal;
}
int main()
{
    int acc_no;
    char name[100], acc_type[100];
    float balance;
    cout << "\n Enter Details: \n";
    cout << "-----------------------";
    cout << "\n Accout No. ";
    cin >> acc_no;
    cout << "\n Name : ";
    cin >> name;
    cout << "\n Account Type : ";
    cin >> acc_type;
    cout << "\n Balance : ";
    cin >> balance;

    bank b1(acc_no, name, acc_type, balance); // object is created
    b1.deposit();                             //
    b1.withdraw();                            // calling member functions
    b1.display();                             //
    return 0;
}
