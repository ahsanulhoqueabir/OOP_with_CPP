#include<bits/stdc++.h>
using namespace std;

class Average{
    public:
    float a,b;

    void getdata(float x, float y);
    void display(){
        cout << "Average : " << ((a+b)/2) << endl;
    }
};

inline void Average::getdata(float x, float y){
    a = x;
    b = y;
}

int main()
{
    Average calc;
    calc.getdata(10,21);
    calc.display();
    return 0;
}