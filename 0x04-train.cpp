#include <iostream>
#include "0x04-train.h"
#include <ctime>
using namespace std;

void Train::SetData(int yr, int m, int d)
{
    if (yr > 100)
    {
        date.tm_year = yr - 1900;
    }
    else
    {
        date.tm_year = 100 + yr;
    }
    if (m >= 1 && m <= 12)
    {
        date.tm_mon = m - 1;
    }
    else
    {
        date.tm_mon = 0;
    }
    if (d >= 1 && d <= 31)
    {
        date.tm_mday = d;
    }
    else
    {
        date.tm_mday = 1;
    }
}

void Train::Display()
{
    char buf[80];
    cout << "Train:        " << name << endl;
    cout << "From:         " << source << endl;
    cout << "To:           " << destination << endl;
    strftime(buf, 80, "%D", &date);
    cout << "Journay Date: " << buf << endl;
    cout << "Capacity:     " << capacity << endl
         << endl;
}

int main()
{
    Train train;
    train.SetName("Polar Express");
    train.SetSource("Whitehorse");
    train.SetDestination("Skagway");
    train.SetData(2021, 8, 12);
    train.SetCapacity(120);

    train.Display();
}
