#include <iostream>
using namespace std;
int A;
class Date
{
public:
    int date, month, year;
    string arr[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    void setdata(int, int, int);
    void Display(int b);
    void leap(int year);
    void difference();
    void incerment(int, int, int, int);
};
void Date::setdata(int a, int b, int c)
{
    date = a;
    month = b;
    year = c;
}
void Date::Display(int b)
{

    cout << date << ":" << month << ":" << year << endl;
    cout << date << ":" << arr[b - 1] << ":" << year << endl;
}
void Date::leap(int year)
{
    int a = year % 4;
    int b = year % 400;
    if (a == 0 || (b == 0 && year % 100 != 0))
    {
        A = 0;
        cout << "This is leap Year" << endl;
    }
    else
    {
        cout << "This is not a leap Year" << endl;
        A = 1;
    }
}
void Date::difference()
{
    int date1, month1, year1;
    int date2, month2, year2;
    int a, b, c;
    cout << "Enter first date" << endl;
    cin >> date1 >> month1 >> year1;
    cout << "Enter second date" << endl;
    cin >> date2 >> month2 >> year2;
    c = year2 - year1;
    b = month2 - month1;
    a = date2 - date1;
    if (b < 0)
    {
        c = c - 1;
        b = b + 12;
    }
    if (a < 0)
    {
        b = b - 1;
        if (month2 == 1 || month2 == 3 || month2 == 5 || month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12)
        {
            a = a + 31;
        }
        else if (month2 == 2 && A == 0)
        {
            a = a + 29;
        }
        else if (A == 1)
            a = a + 28;
        else
            a = a + 30;
    }

    cout << "  The difference between two dates is  " << a << "  Days  " << b << "  Months  " << c << "  Years  " << endl;
}
void Date::incerment(int day, int month, int year, int days)
{
    int a;
    a = day + days;
    for (int i = 0; a > 28; i++)
    {
        if (a > 28)
        {
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                if (a > 31)
                {
                    if (a == 31)
                    {
                        a = a;
                    }
                    else
                    {
                        a = a - 30;
                        month = month + 1;
                        if (month > 12)
                        {
                            month - 11;
                            year = year + 1;
                        }
                    }
                }
            }
            else if (month == 2)
            {
                if (A = 0)
                {
                    if (a > 29)
                    {
                        if (a == 29)
                        {
                            a = a;
                        }
                        else
                        {

                            a = a - 28;
                            month = month + 1;
                            if (month > 12)
                            {
                                month - 11;
                                year = year + 1;
                            }
                        }
                    }
                }
                else if (A == 1)
                {
                    if (a > 28)
                    {
                        if (a == 28)
                        {
                            a = a;
                        }
                        else
                        {

                            a = a - 27;
                            month = month + 1;
                            if (month > 12)
                            {
                                month - 11;
                                year = year + 1;
                            }
                        }
                    }
                }
                else
                {
                    if (a > 30)
                    {
                        if (a == 30)
                        {
                            a = a;
                        }
                        else
                        {

                            a = a - 29;
                            month = month + 1;
                            if (month > 12)
                            {
                                month - 11;
                                year = year + 1;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "The new date is  " << a << " " << month << " " << year << endl;
}
int main()
{
    Date D1;
    D1.setdata(15, 03, 2022);
    D1.Display(3);
    D1.leap(2022);
    //  D1.difference();
    D1.incerment(15, 02, 2023, 13);
    return 0;
}