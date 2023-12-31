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

    // destructure syntax
    ~Area(){
        cout<<"Destructor called\n";
    }
};


int main()
{
    AHSAN

    Area *r2= new Area(11,45);
    cout << r2->length << " " << r2->width << endl; 
    delete r2;

    Area r1(5,4);
    cout << r1.length << " " << r1.width<< endl;
    Area r3(15,41);
    cout << r3.length << " " << r3.width<< endl;
    Area r4(55,34);
    cout << r4.length << " " << r4.width<< endl;
    return 0;
}