#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);

class Area{
    public:
        int length;
        int width;

    Area(int x,int y){
        length = x;
        width=y;
    }   
    //  copy constructor - initialize an obj by another existing objects
    Area(Area & r){
        length=r.length;
        width=r.width;
    }
};




int main()
{
    AHSAN

    Area r1(5,7);
    cout << r1.length << " " << r1.width<< endl;

    Area r2=r1;
     cout << r2.length << " " << r2.width<< endl;

    return 0;
}