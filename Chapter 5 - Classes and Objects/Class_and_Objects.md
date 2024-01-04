# Class and Objects

### 5.2 C Structure Revised

<table>
      <small>Structure in C and C++</small>
      <thead>
        <td><strong>C Structures</strong></td>
        <td><strong>C++ Structures</strong></td>
      </thead>
      <tbody>
        <tr>
          <td>
            Only data members are allowed, it cannot have member functions.
          </td>
          <td>Can hold both: member functions and data members.</td>
        </tr>
        <tr>
          <td>Cannot have static members.</td>
          <td>Can have static members.</td>
        </tr>
        <tr>
          <td>Cannot have a constructor inside a structure.</td>
          <td>Constructor creation is allowed.</td>
        </tr>
        <tr>
          <td>Direct Initialization of data members is not possible.</td>
          <td>Direct Initialization of data members is possible.</td>
        </tr>
        <tr>
          <td>
            Writing the <code>struct</code> keyword is necessary to declare structure-type variables.
           <details>
      <summary>Example</summary>
      <pre>
        <code>
          // declare a variable: 
          struct structName a;
        </code>
      </pre>
    </details>
          </td>
          <td>
            Writing the <code>struct</code> keyword is not necessary to declare structure-type variables.
           <details>
      <summary>Example</summary>
      <pre>
        <code>
          // declare a variable: 
        structName a;
        </code>
      </pre>
    </details>
          </td>
        </tr>
        <tr>
          <td>Do not have access modifiers.</td>
          <td>Supports access modifiers.</td>
        </tr>
        <tr>
          <td>Only pointers to structs are allowed.</td>
          <td>Can have both pointers and references to the struct.</td>
        </tr>
        <tr>
          <td>Sizeof operator will generate 0 for an empty structure.</td>
          <td>Sizeof operator will generate 1 for an empty structure.</td>
        </tr>
        <tr>
          <td>Data Hiding is not possible.</td>
          <td>Data Hiding is possible.</td>
        </tr>
      </tbody>
</table>


> [!NOTE]
> Now,C++ programmers tend to use the structures for holding data and classes to hold both the data and funtions.
> by default all memebers of class is private wherease members of structure are public.


### 5.3 Specifying a Class

1. A <code> Class </code> is a abstract data type.
2. It can contain member functions (methods) as well as member variables or attributes.
3. Member function called method, which can perform some operation on object's attribute.
4. Member variable called attribute, which holds value related to object.
5. Class specification has 2 parts.
    - Class declaration
    - Class function definition
6. Example:
```
#include<bits/stdc++.h>
using namespace std;
#define dash for(int i=0;i<30;i++) cout << "-"; cout << "\n";
class User
{

private:
    string nid;
    string BankAcc;

public:
    string name;
    int age;

    void getType1(string a, string b, string c, int d) // if the property name and parameter names are different,then you can assigned data this way!
    {

        nid = a;
        BankAcc = b;
        name = c;
        age = d;
    }
    void getType2(string nid, string BankAcc, string name, int age) // if you are not sured to matching of parameter and property name, then this way is best.
    {

        this->nid = nid;
        this->BankAcc = BankAcc;
        this->name = name;
        this->age = age;
    }
    void getType3() // it's the ingeneral brute force way
    {
        cout << "Enter NID : ";
        // getchar();
        cin >> nid;
        cout << "Enter Bank Account : ";
        getchar();
        cin >> BankAcc;
        cout << "Enter Name : ";
        getchar();
        getline(cin,name,'\n');
        // cin >> name;
        cout << "Enter Age : ";
        cin >> age;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "NID : " << nid << endl;
        cout << "Bank Account : " << BankAcc << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    User user1,user2,user3;
    // take input 
    user1.getType1("1524210305040", "IFIC293862348512", "Ahsanul Hoque", 23);
    user2.getType2("9125488522455", "BCB28951435751", "Amanul Hoque", 31);
    user3.getType3();

    // display data 
    user1.display(); dash
    user2.display(); dash
    user3.display();

    return 0;
}

```


### 5.4 Defining Member Functions

- Several different classes can use same function name. to resolve their scope we justify 'membership label'.
- Member Function can access private data of class.
- A member function can call another member function directly.
- Member function can be defined in two places.
    - Outside the clsss definition
    - Inside the class definition

#### Definition outside of the class
```
#include<bits/stdc++.h>
using namespace std;

class student{

public:
    string name;
    int age;
    string id;
    string dept;
    string uni;

// declare functions 
     void getinfo(string name, int age, string id, string dept, string uni);
     void displayInfo(void); // As display function dont take any parameter thats why we gave void as default,even doesn't matter it.  

};

// defining the functions 
void student::getinfo(string name, int age, string id, string dept, string uni){  // here used :: is called scope resolution operator
    this->name = name;
    this->age = age;
    this->id = id;
    this->dept = dept;
    this->uni = uni;
}
void student::displayInfo(void){
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "ID : " << id << endl;
    cout << "Dept : " << dept << endl;
    cout << "University : " << uni << endl;
}

int main()
{
    student abir;
    abir.getinfo("Ahsanul Hoque Abir", 22, "B21305040", "CSE", "Jagannath University");
    abir.displayInfo();
    return 0;
}
```

#### Defination inside of the class
```
#include<bits/stdc++.h>
using namespace std;

class student
{

public:
    string name;
    int age;
    string id;
    string dept;
    string uni;

    // declare and difining functions
    void getinfo(string name, int age, string id, string dept, string uni)
    { // here used :: is called scope resolution operator
        this->name = name;
        this->age = age;
        this->id = id;
        this->dept = dept;
        this->uni = uni;
    };
    void displayInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "ID : " << id << endl;
        cout << "Dept : " << dept << endl;
        cout << "University : " << uni << endl;
    };
};

int main()
{
    student abir;
    abir.getinfo("Ahsanul Hoque Abir", 22, "B21305040", "CSE", "Jagannath University");
    abir.displayInfo();
    return 0;
}
```


























