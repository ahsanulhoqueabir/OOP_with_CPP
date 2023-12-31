#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

class Area{
    public:
        int length;
        int width;
    //  parameterized constructor- arg passed
    Area(int x,int y){
        length=x;
        width=y;
    }
};


int main()
{
    AHSAN

    Area r1(5,4);
    cout << r1.length << " " << r1.width<< endl;
    return 0;
}