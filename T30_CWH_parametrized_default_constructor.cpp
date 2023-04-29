#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(void); // constructor declaration
    Complex(int, int);
    void printNum(){
        cout<<"the complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};

// defualt constructor
Complex:: Complex(){
    a = 10;
    b = 32;
}

// parametrized constructor 
Complex:: Complex(int x,int y){
    this->a = x;
    this->b =y;
}
int main(){
    Complex o1;
    o1.printNum();

    // implicit call
    Complex o2(2,3);
    o2.printNum();

    // explicit call
    Complex a = Complex(3,4);
    a.printNum();

    return 0;
}