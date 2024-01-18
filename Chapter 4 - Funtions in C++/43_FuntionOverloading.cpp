#include <bits/stdc++.h>
using namespace std;

// Function with two integer parameters
int add(int a, int b)
{
    return a + b;
}

// Function with two double parameters
double add(double a, double b)
{
    return a + b;
}

// Function with three integer parameters
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{

    cout << "Result of add(int, int): " << add(5, 8) << endl;
    cout << "Result of add(double, double): " << add(4.5, 4.485) << endl;
    cout << "Result of add(int, int, int): " << add(10, 23, 69) << endl;

    return 0;
}