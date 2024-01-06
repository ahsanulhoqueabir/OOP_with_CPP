#include<bits/stdc++.h>
using namespace std;

class Complex{
    float real;
    float img;

    public:
    void Input(float real,float img){
        this->real = real;
        this->img = img;
    }

    friend Complex Add(Complex &c1,Complex &c2); //using pass-by-reference

    void Display(Complex); //declared 
};

Complex Add(Complex &c1,Complex &c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
void Complex::Display(Complex c) {
    cout<<c.real<<" + "<<c.img<<"i"<<endl;
}


int main()
{
    Complex c1,c2,c3;
    c1.Input(1.4,2.3);
    c2.Input(3.24,4.9);
    c3 = Add(c1,c2);
    c3.Display(c3);


    return 0;
}