#include<bits/stdc++.h>
using namespace std;

// overloading in constructor
// i.e. Constructor overloading

class Complex{
    int a,b;
    public:
        // declaring constructor here
        Complex(int v1,int v2){
            a = v1;
            b = v2;
        }
        Complex(){
            a = 0;
            b = 0;
        }
        Complex(int x){
            a = x;
            b = 0;
        }
        void printNumbers(){
            cout<<"The complex number formed is: "<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){
    Complex c1(4,6);
    c1.printNumbers();

    Complex c2(2);
    c2.printNumbers();

    Complex c3;
    c3.printNumbers();
    return 0;
}