#include<bits/stdc++.h>
using namespace std;
class Complex{
    float real,img;
    public:
        Complex(){}
        Complex(float r,float i){
            real=r,img=i;
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
        friend Complex operator/(Complex,Complex);
        float getReal(){
            return real;
        }
        float getImg(){
            return img;
        }
};
Complex operator+(Complex c1,Complex c2){
    Complex c; 
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}
Complex operator-(Complex c1,Complex c2){
    Complex c; 
    c.real = c1.real - c2.real;
    c.img = c1.img - c2.img;
    return c;
}
Complex operator*(Complex c1,Complex c2){
    Complex c;
    c.real = c1.real*c2.real - c1.img*c2.img;
    c.img = c1.real*c2.img + c1.img*c2.real;
    return c;
}

Complex operator/(Complex c1,Complex c2){
    Complex c;
    c.real = (c1.real*c2.real + c1.img*c2.img)/(c2.real*c2.real + c2.img*c2.img);
    c.img = (c1.img*c2.real - c1.real*c2.img)/(c2.real*c2.real + c2.img*c2.img);
    return c;
}
int main(){ 
    Complex c1(7,3),c2(4,6),c;
    c = c1 + c2;
    cout<<"\nAddition of two complex no. is : "<<c.getReal()<<" + "<<c.getImg()<<"i";
    c = c1 - c2;
    cout<<"\nSubtraction of two complex no. is : "<<c.getReal()<<" + "<<c.getImg()<<"i";
    c = c1 * c2;
    cout<<"\nMultiplication of two complex no. is : "<<c.getReal()<<" + "<<c.getImg()<<"i";
    c = c1 / c2;
    cout<<"\nDivision of two complex no. is : "<<c.getReal()<<" + "<<c.getImg()<<"i";

}