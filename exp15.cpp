#include <iostream>
using namespace std;
class employee
{
public:
    virtual int raiseSalary() = 0;
};
class engineer : public employee
{
    float salary = 100;

    int raiseSalary()
    {
        float percentage;
        cout << "Give the increment percentage" << endl;
        cin >> percentage;

        salary = salary + (salary * (percentage / 100));
        return salary;
    }
};
class Teamleader : public employee
{
    float salary = 100;

    int raiseSalary()
    {
        float percentage;
        cout << "Give the increment percentage" << endl;
        cin >> percentage;

        salary = salary + (salary * (percentage / 100));
        return salary;
    }
};
class Maneger : public employee
{
    float salary = 100;

    int raiseSalary()
    {
        float percentage;
        cout << "Give the increment percentage" << endl;
        cin >> percentage;

        salary = salary + (salary * (percentage / 100));
        return salary;
    }
};

int main()
{
    employee *p[3];
    engineer a;
    Teamleader b;
    Maneger c;
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    int total = p[0]->raiseSalary();
    cout<<"the total salary of enginerr is  "<<total<<endl;
    total = p[1]->raiseSalary();
    cout<<"the total salary of Teamleader is  "<<total<<endl;
     total = p[2]->raiseSalary();
    cout<<"the total salary of enginerr is  "<<total<<endl;
   

    return 0;
}