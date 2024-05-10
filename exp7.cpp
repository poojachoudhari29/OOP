#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
class circle
{
public:
    float centerX, centerY, radius, circumference, area;
    circle()
    {
        centerX = 0;
        centerY = 0;
        radius = 0;
    }
    circle(float centerX, float certerY)
    {
        this->centerX = centerX;
        this->centerY = centerY;
    }
    circle(float centerX, float certerY, float radius)
    {
        this->centerX = centerX;
        this->centerY = centerY;
        this->radius = radius;
    }
    void calcArea()
    {
        area = 3.14 * (radius * radius);
    }
    void getArea()
    {
        cout << "The area is  " << area << endl;
    }

    void calcircumference()
    {
        circumference = (2 * 3.14) * radius;
    }
    void getcircumference()
    {
        cout << "The circumference is  " << circumference << endl;
    }
};
class line : public circle
{
private:
    float x1, y1, x2, y2, slope, intercept;
    float a, d1, d2, c, d, final;

public:
    line(float x1, float x2, float y1, float y2)
    {
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
    }
    void setRadius(float radius)
    {
        this->radius = radius;
    }
    void isTangent()
    {
        d1 = (x2 - x1);
        d2 = (y2 - y1);
        a = ((y1 * d1) - (x1 * d2));
        c = abs(((d1 * centerY) - (d2 * centerX) - a));
        d = sqrt((d1 * d1) + (d2 * d2));
        final = c / d;
        if (final == radius)
        {
            cout << "This is tangent" << endl;
        }
        else
            cout << "This is not a tangent" << endl;
    }
};
int main()
{
     circle c(0, 0, 1);
    c.calcArea();
    c.getArea();
    c.calcircumference();
    c.getcircumference();
    line l1(1, 1, 2, -2);
    line *ptr = &l1;
    ptr->centerX = 0;
    ptr->centerY = 0;
    ptr->radius = 1;
    l1.isTangent();

    return 0;
}
