#include<bits/stdc++.h>
using namespace std;

class StaticMem{

    public:
    static int count;
    static void staticFunction(){
        count++;
        cout<<"This is a static function"<< " " << count << endl;
    }
};

int StaticMem::count; //defining static members


int main()
{
    StaticMem::staticFunction(); // calling static member function without creating an instance.

    StaticMem Member1;
    Member1.staticFunction(); // calling after creating instance.

    StaticMem::staticFunction();

    return 0;
}

// Output:
// This is a static function 1
// This is a static function 2
// This is a static function 3