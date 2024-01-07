#include <bits/stdc++.h>
using namespace std;

class Complex
{
    float real, img;

public:
    Complex(float r, float i) // two-arguments
    {
        real = r;
        img = i;
    }
    Complex(float r)
    { // one arguments
        real = r;
        img = r;
    }
    Complex()
    { // no arguments
        real = 0;
        img = 0;
    }

    friend Complex sum(Complex &c1, Complex &c2);

    friend void Display(Complex);
};

Complex sum(Complex &c1, Complex &c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}
void Display(Complex c)
{
    cout << c.real << " + i" << c.img << endl;
}

int main()
{
    Complex c1(5.2, 2.9), c2(6.1), c3;

    c3 = sum(c1, c2);
    cout<< "A = "; Display(c1); // 2 arg
    cout<< "B = "; Display(c2); // 1 arg
    cout<< "C = "; Display(c3); // no arg
    return 0;
}