#include <bits/stdc++.h>
using namespace std;

int main()
{

    float amount;
    float input(float p, int n, float r = 0.15);
    void output(char ch = '*', int len = 20);
    output();
    amount = input(5240.25,10);
    cout << "\n" << "Final Value " << amount << endl;
    output('-');
    return 0;
}
void output(char ch, int len)
{
    for (int i = 0; i < len; i++)
        cout << ch;
    cout << endl;
}
float input(float p, int n, float r)
{
    int year = 1;
    float sum = p;
    while (year <= n)
    {
        sum = sum * (1 + r);
        year++;
    }
    return sum;
}
