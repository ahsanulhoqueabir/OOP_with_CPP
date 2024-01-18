#include <bits/stdc++.h>
using namespace std;

class Complex
{
    float real, img;

public:
    // default constructor
    Complex(){};
    // constructor for value asking
    Complex(float real, float img)
    {
        this->real = real;
        this->img = img;
    }
    // display function to display the complex number
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
    // binary operator overloading function declaration
    Complex operator +(Complex);
    // friend function declaration - if you want to write it using friend function
    // friend Complex operator -(Complex, Complex); 
};

// definition of binary operator overloading
Complex Complex :: operator+(Complex c)
{
    Complex temp;
    temp.real =real + c.real;
    temp.img = img + c.img;
    return(temp);
}

// for friend function

// Complex operator +(Complex c1, Complex c2)
// {
//     Complex temp;
//     temp.real = c1.real + c2.real;
//     temp.img = c1.img + c2.img;
//     return(temp);
// }


int main()
{
    Complex c1, c2, c3;
    c1 = Complex(2.5, 3.5);
    c2 = Complex(1.6, 2.7);
    c1.display();
    c2.display();
    c3 = c1 + c2;
    c3.display();

    return 0;
}