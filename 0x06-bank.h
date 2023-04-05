#ifndef BANK_H
#define BANK_H

using namespace std;

class bank
{
    int acno;
    char nm[100], acctype[100];
    float bal;

public:
    bank(int acc_no, char *name, char *acc_type, float balance) // Parameterized Constructor
    {
        acno = acc_no;
        strcpy(nm, name);
        strcpy(acctype, acc_type);
        bal = balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank::deposit() // depositing an amount
{
    int damt1;
    cout << "\n Enter Deposit Amount = ";
    cin >> damt1;
    bal += damt1;
}
#endif;