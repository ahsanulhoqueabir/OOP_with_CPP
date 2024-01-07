#include <bits/stdc++.h>
using namespace std;

class FixedDeposit
{
    int PrincipalAmount, Years;
    float RateOfInterest, ReturnValue;

public:
    FixedDeposit() {}
    FixedDeposit(int p, int y, float r = 0.12);
    FixedDeposit(int p, int y, int r);
    void display();
};
FixedDeposit::FixedDeposit(int p, int y, float r)
{
    PrincipalAmount = p;
    Years = y;
    RateOfInterest = r;
    ReturnValue = PrincipalAmount;
    for (int i = 1; i <= Years; i++)
    {
        ReturnValue = ReturnValue * (1 + RateOfInterest);
    }
}
FixedDeposit::FixedDeposit(int p, int y, int r)
{
    PrincipalAmount = p;
    Years = y;
    RateOfInterest = float(r) / 100;
    ReturnValue = PrincipalAmount;
    for (int i = 1; i <= Years; i++)
    {
        ReturnValue = ReturnValue * (1 + RateOfInterest);
    }
}
void FixedDeposit::display()
{
    cout << "Principal Amount : " << PrincipalAmount << endl;
    cout << "Years : " << Years << endl;
    cout << "Rate Of Interest : " << RateOfInterest << endl;
    cout << "Return Value : " << ReturnValue << endl;
}
int main()
{
    FixedDeposit fd1, fd2, fd3, fd4;
    int p, y, r;
    float R; // for percent form

    
    cout << "Enter Principal Amount : ";
    cin >> p;
    cout << "Enter Years : ";
    cin >> y;
    cout << "Enter Rate Of Interest : ";
    cin >> R;
    fd1 = FixedDeposit(p, y, R);
    fd1.display();
    cout << endl;

    cout << "----------------- " << endl;
    cout << "Enter Principal Amount : ";
    cin >> p;
    cout << "Enter Years : ";
    cin >> y;
    cout << "Enter Rate Of Interest : ";
    cin >> r;
    fd2 = FixedDeposit(p, y, r);
    fd2.display();
    cout << endl;

    cout << "----------------- " << endl;
    cout << "Enter Principal Amount : ";
    cin >> p;
    cout << "Enter Years : ";
    cin >> y;
    fd3 = FixedDeposit(p, y);
    fd3.display();
    cout << endl;

    cout << "----------------- " << endl;
    cout << "Enter Principal Amount : ";
    cin >> p;
    cout << "Enter Years : ";
    cin >> y;
    fd4 = FixedDeposit(p, y);
    fd4.display();
    cout << endl;

    return 0;
}