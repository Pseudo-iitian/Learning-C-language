#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a,b;
    public:
    // creating a constructor
    // constructor is a special member function with same name as of the class. It is automatically invoked
    // wnever the object is created
    // it is used to initialize the object of its class
    Complex(void); // constructor declaration
    Complex(int data,int bata){
        a = data;
        b = bata;
    }
    void printData();
};

Complex:: Complex(){ // this is a default constrcutor, as it does not support any parameters
    a = 10;
    b = 20;
}
// this constructor is automatically invoked

void Complex:: printData(){
    cout<<"the complex number form is : "<<a<<"+"<<b<<"i";
}

int main(){
    // Complex o1;
    // o1.printData();
    Complex o1 = Complex(2,3);
    o1.printData();
    return 0;
}


/*
Properties of constructor
1- It should be declared in the public section of the class
2- They are automatically invoked when the object is created
3- They do not return values and they dont have return types
4- It can have default arguements
5- We can not refer to their address
6- 
*/