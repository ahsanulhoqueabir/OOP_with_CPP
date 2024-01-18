#include <bits/stdc++.h>
using namespace std;

const int size = 3;
class Vector
{
    int v[size];

public:
    Vector();
    Vector(int *x);
    friend Vector operator*(int a, Vector b);
    friend Vector operator*(Vector b, int a);
    friend istream &operator>>(istream &din, Vector &b);
    friend ostream &operator<<(ostream &dout, Vector &b);
};

Vector ::Vector()
{
    for (int i = 0; i < size; i++)
        v[i] = 0;
}

Vector ::Vector(int *x)
{
    for (int i = 0; i < size; i++)
        v[i] = x[i];
}

Vector operator*(int a, Vector b)
{
    Vector c;
    for (int i = 0; i < size; i++)
        c.v[i] = a * b.v[i];
    return c;
}

Vector operator*(Vector b, int a)
{
    Vector c;
    for (int i = 0; i < size; i++)
        c.v[i] = a * b.v[i];
    return c;
}

istream &operator>>(istream &din, Vector &b)
{
    for (int i = 0; i < size; i++)
        din >> b.v[i];
    return din;
}

ostream &operator<<(ostream &dout, Vector &b)
{
    for (int i = 0; i < size; i++)
        dout << b.v[i] << " ";
    return dout;
}

int x[size] = {2, 4, 6};

main()
{
    Vector v1;
    Vector v2 = x;
    cout << "Enter elements of Vector v1: ";
    cout << "\n";
    cin >> v1;
    cout << "\n";
    cout << "v1 = " << v1 << "\n";

    Vector p, q;
    p = 2 * v1;
    q = v2 * 2;
    cout << "\n";
    cout << "p = " << p << "\n";
    cout << "q = " << q << "\n";

    return 0;
}