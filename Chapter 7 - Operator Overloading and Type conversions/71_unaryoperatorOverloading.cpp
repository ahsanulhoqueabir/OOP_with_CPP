#include <bits/stdc++.h>
using namespace std;

class MakeNegetive
{
    int value=0;

public:
    MakeNegetive(int value)
    {
        this->value = value;
    }

    void operator -(){
        value = -value;
    };
    void display(){
        cout << "Value is: " << value << endl;
    }
};
int main()
{
    MakeNegetive number(10);
    number.display();
    -number;
    number.display();
    return 0;
}