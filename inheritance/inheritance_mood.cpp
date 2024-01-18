#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

class Parent{

public:
    int x=1, y=2;

protected:
    int p=3,q=4;

private: 
    int a=5,b=6;
};

// here 3 different inheritance mood 
class child1:public Parent{

    // x,y will remain public
    // p,q will remain protected 
    // a,b will not be accessible 
    public: 
    // void input(){
    //     cin >> x >> p >> q;
    // }
    // void show(){
    //     cout << x << p << a << "\n";
    // }
    

};

class child2:private Parent{
     // x,y will remain private
    // p,q will remain private 
    // a,b will not be accessible 
    // public:
    //  void show(){
    //     cout << x << p << a << "\n";
    // }
};

class child3:protected Parent{
     // x,y will remain protected
    // p,q will remain protected 
    // a,b will not be accessible 
    public:
     void show(){
        cout << x << p << a << "\n";
    }
};



int main()
{
    AHSAN
    child3 c1;
    c1.show();
    return 0;
}