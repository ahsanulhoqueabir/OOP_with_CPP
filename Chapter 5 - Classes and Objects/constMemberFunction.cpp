#include <bits/stdc++.h>
using namespace std;

class Example
{
    int x;

public:
    void input(int x);
    int output();
};

void Example::input(int x)
{
    this->x = x;
}
int Example::output()
{
    return x;
}

int main()
{
    Example e1;
    e1.input(40);
    cout << e1.output() << endl;
    return 0;
}