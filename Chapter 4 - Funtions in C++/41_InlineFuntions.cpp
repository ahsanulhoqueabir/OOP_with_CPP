#include <bits/stdc++.h>
using namespace std;

inline float Mul(float x, float y)
{
    return x * y;
}
inline float Div(float x, float y)
{
    if (y == 0)
        cout << "Error! Division by zero.";
    else
        return x / y;
}

int main()
{
    float m=5.08, n=5.5584;
    cout << Mul(m,n) << endl << Div(m,n) << endl;
    return 0;
}