#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

class ahsan{
    int x;

    public:
    void input(int p){
        x = p;
    }

    int output(){
        return x;
    }

};



int main()
{
    AHSAN

    ahsan obj1;
    obj1.input(5);

    cout << "Value of x in object obj1 is : "<<obj1.output()<<endl;
    return 0;
}