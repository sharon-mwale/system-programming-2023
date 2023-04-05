#include <iostream>
using namespace std;

void swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
    int num1, num2;
    cout << "\nEnter the first number : ";
    cin >> num1;
    cout << "\nEnter the Second number : ";
    cin >> num2;
    swap(&num1, &num2);
    cout << "\nFirst number : " << num1;
    cout << "\nSecond number: " << num2;
};
