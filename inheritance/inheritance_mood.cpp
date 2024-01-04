#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

class Parent{

public:
    int x, y;

protected:
    int p,q;

private: 
    int a,b;
};

// here 3 different inheritance mood 
class child1:public Parent{

    // x,y will remain public
    // p,q will remain protected 
    // a,b will not be accessible 
};

class child2:private Parent{
     // x,y will remain private
    // p,q will remain private 
    // a,b will not be accessible 
};

class child2:protected Parent{
     // x,y will remain protected
    // p,q will remain protected 
    // a,b will not be accessible 
};



int main()
{
    AHSAN

    return 0;
}