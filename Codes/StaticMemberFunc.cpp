#include<bits/stdc++.h>
using namespace std;

class add{
    static int a,b,c,count;

    public:
    static void getdata(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    static void print(){
        cout<< (++count) << ". Sum is "<<a+b+c<<endl;
    }
};
// defining static members 
int add::count;
int add::a;
int add::b;
int add::c;

// int add::count,add::a,add::b,add::c;

int main()
{
    add item1,item2;
    item1.getdata(30,40,21);
    item1.print();
    item2.getdata(45,65,12);
    item2.print();
    add::getdata(10,20,30);
    add::print();
    return 0;
}