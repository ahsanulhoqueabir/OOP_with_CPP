#include<bits/stdc++.h>
using namespace std;

class FriendClass{
    
    string privateData;

protected:
    string protectedData;

public:
    string publicData;

    void Input(string privateData,string protectedData,string publicData){
        this->privateData = privateData;
        this->protectedData = protectedData;
        this->publicData = publicData;
    }


    friend class FriendClass2;
};

class FriendClass2{
    
    public:
    void display(FriendClass &obj){
        // FriendClass obj;
        cout<<"Private Data: " << obj.privateData << endl;
        cout<<"Protected Data: " << obj.protectedData << endl;
        cout<<"Public Data: " << obj.publicData << endl;
    }
};



int main()
{

    FriendClass example;
    example.Input("Private Data","Protected Data","Public Data");
    // Accessing Private Members Using Normal Methods Will Show Errors

    FriendClass2 example2;
    example2.display(example);
    return 0;
}
