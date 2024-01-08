#include <bits/stdc++.h>
using namespace std;
static int c;

class Test
{
public:
    Test()
    {
        ++c;
        cout << "Constructor called for object " << c << endl;
    }
    ~Test()
    {
        cout << "Destructor called for object " << c << endl;
        --c;
    }
};

int main()
{
    cout << "We are inside main function" << endl;
    cout << "Creating first object" << endl;
    cout<<endl;
    Test t1;
    {
        cout<<endl;
        cout << "Entering first block" << endl;
        cout << "Creating two more objects" << endl;
        Test t2, t3;
        cout<<endl;
        {
            cout << "Entering inside first block" << endl;
            cout << "Creating two more objects" << endl;
            Test t5, t6;
            cout << "Exiting this block" << endl;
        }
        cout<<endl;
        cout << "Exiting this block" << endl;
    }
    cout << "Exiting main function" << endl;

    return 0;
}