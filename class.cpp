#include<bits/stdc++.h>
using namespace std;
#define AHSAN  ios_base::sync_with_stdio(false); cin.tie(NULL);


class Fruit{
    public:
    string name;
    string color;
};


int main()
{
    AHSAN

    Fruit apple;
    apple.name= "Apple";
    apple.color= "Red";
    cout << apple.name << " " << apple.color << endl;

    Fruit *mango = new Fruit();
    mango->name = "Mango";
    mango->color = "Yellow";
    cout << mango->name << " " << mango->color << endl;

    return 0;
}