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
6. <details>
<summary> Example </summary>

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
    User user1,user2,user3; //create 3 user user1,user2 and user3
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

</details>

Example:



### 5.4 Defining Member Functions

- Several different classes can use same function name. to resolve their scope we justify 'membership label'.
- Member Function can access private data of class.
- A member function can call another member function directly.
- Member function can be defined in two places.
  - Outside the clsss definition
  - Inside the class definition

#### <details> 
<summary> Definition outside of the class </summary>

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
</details>

#### <details>
<summary>Defination inside of the class </summary>

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
</details>
### 5.6 Function Inline

<div>
    <img src="https://media.geeksforgeeks.org/wp-content/uploads/20221229112934/Inline-Function-in-Cpp.png" alt="">
</div>

An inline function is one for which the compiler copies the code from the function definition directly into the code of the calling function rather than creating a separate set of instructions in memory. Its good only for short function.

<details>
<summary>Example</summary>

```
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
```

In the above example <code> `void display()` </code> is made as an inline function because it contains simple operations

</details>

### 5.7 Nesting of Member Functions

- In C++, member functions can be nested inside another member function or outside the class definition.
- If they are nested, then control goes to that inner member function when called from outer one and comes back once execution is done.
- The scope of variables in nested member functions is limited only within them. They cannot access any variable
- The scope of variables in nested member functions is limited only within them.

<details>
<summary> Example </summary>

```
#include<bits/stdc++.h>
using namespace std;

class collection{
    public:
    float x,y,z;

    void input();
    float average();
    void display();
};

// defining functions
void collection::input(){
    cout << "Enter three numbers : ";
    cin >> x >> y >> z;
}
float collection::average(){
   return ((x+y+z)/3);
}
void collection::display(){ // in this function we call another function  of this class
    cout << "Average of " << x << " " <<  y << " " << z << " is: " << average() << endl;
}

int main()
{

    collection p; // create new object
    p.input();
    p.display();
    return 0;
}
```

<blockquote>
Output:
Average of 56 78 23 is: 52.3333
</blockquote>
</details>

### 5.8 Private Member Functions
- A private member function can be called only within the class and its friends (classes or functions declared)
- A member function can be declared as private if it needs to access the private members of a class
- In C++, all member data are by default private unless they are explicitly declared as protected or public
- If you declare a member function as private and try to access it from outside the class, the compiler will generate an error because there is no way for code access that member function
- To allow code outside the class to access a private member function, you need to use friend keyword (friend declaration) or you can use nested member function.


### 5.11 Static Data Members
- If a variable inside a class is declared static, then it belongs to the class itself rather than an instance of that class. It is shared among all objects of the same class.  
- The value of a static variable remains unchanged even after the program ends and restarts again.
- It retains its value between different instances of the class.
- Static members can be accessed using the class name followed by the scope resolution operator (::), while normal members are accessed using the dot operator (.) on an object of the class.
- Static Variable are non-inline member funtion.
- The main characteristics of static data members are-
  - **Shared Memory**: Static data members are shared among all instances(objects) of a class.
  - **Memory Allocation** : Memory for a static data member is allocated only once for the entire class, not for each instance of the class. It is allocated when the program starts and deallocated when the program ends.
  - <b>Access Control</b>: Static data members can be private, protected, or public. The access specifier determines their visibility and accessibility from outside the class.
  - <b> Initialization </b>: Static data members are typically initialized outside the class definition.
  
<details>
<summary>Example.</summary>

```
#include <bits/stdc++.h>
using namespace std;

class User
{

public:
    static int serial; // declaration of static data member. The initial value of static data members is 0. Important!! You cant initialize there.

    string name;
    User()
    {
        cin >> name;
        serial++;
        cout << serial << " " << name << endl;
    }
};

// Accessing static data member using class name and fefining and initializing it. To initialize outside the main function,you have to use type of this data.(eg. int,string)
int User::serial = 115; //defining and initializing

int main()
{
    User::serial=55; // this will be used as initial value,though we have declared globally 5.
    User u1, u2, u3;

    return 0;
}

```
</details>
  

### 5.12 Static Member functions

Static member function can access only static data members not non-static data members. They can also access non-static member functions but cannot call them because they don't have a object to call on (they are called without an object).

<details>
<summary>A static member function is independent of any object of the class.It can be called even if no objects of the class exist. </summary>

```
#include<bits/stdc++.h>
using namespace std;

class StaticMem{

    public:
    static int count;
    static void staticFunction(){
        count++;
        cout<<"This is a static function"<< " " << count << endl;
    }
};

int StaticMem::count; //defining static members


int main()
{
    StaticMem::staticFunction(); // calling static member function without creating an instance.

    StaticMem Member1;
    Member1.staticFunction(); // calling after creating instance.

    StaticMem::staticFunction();

    return 0;
}

// Output:
// This is a static function 1
// This is a static function 2
// This is a static function 3
```
</details>

<details>
<summary>Example </summary>

```
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

```
</details>


