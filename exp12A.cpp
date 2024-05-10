#include <bits/stdc++.h>
using namespace std;

class Date
{
    int day, mon, year;

public:
    Date() {}
    void setDate(int, int, int);
    int leap();
    void mistake()
    {
        cout << "\nEnter correct date.....";
    }
};
int Date::leap()
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}
void Date::setDate(int d, int m, int y)
{
    day = d, mon = m, year = y;
    try
    {
        if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
        {
            if (day > 0 && day <= 31)
            {
                throw day;
            }
            else
                mistake();
        }
        else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
        {
            if (day > 0 && day < 31)
            {
                throw day;
            }
            else
                mistake();
        }
        else if (mon == 2)
        {
            if (leap() == 1 && day > 0 && day < 30)
            {
                throw day;
            }
            else if (leap() == 0 && day > 0 && day < 29)
            {
                throw day;
            }
            else
                mistake();
        }
        else
            mistake();
    }
    catch (int day)
    {
        cout<<"\nEntered date is correct....";
    }
}
int main()
{
    Date d1,d2;
    d1.setDate(29,2,2003);
    
}