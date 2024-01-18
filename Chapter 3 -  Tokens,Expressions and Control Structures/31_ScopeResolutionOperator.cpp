#include <bits/stdc++.h>
using namespace std;
int x = 10; // global
int main()
{
    int x = 20; // local to main
    {
        int y = x;
        int x = 30;
        // Local scope of the block
        cout << "Value of x in inner block: " << x << endl;
        cout << "Value of y in inner block: " << y << endl;
        cout << "Value of ::x = " << ::x << endl;
    }
    cout << "\nValue of x after outer block: " << x << endl;
    cout << "Value of ::x = " << ::x << endl;
    return 0;
}