// There are two types of header files 
// 1- System header files : It comes wiht th ecompiler
#include<iostream>
// 2- User defined header files : it defined by programmer
#include "this.h" // it will produce error if and only if "this.h" is not present in the directory
using namespace std;
int main()
{
    int a=4,b=5;
    cout<<"Operators in c++"<<endl; // endl is used to end in new line
    cout<<"Types of PPerator in c++";
    // Arithmatic Operators in c++ : +, -, *, /, %
    cout<<"The value of a+b is "<<a+b<<endl;  
    cout<<"The value of a*b is "<<a*b<<endl; 
    cout<<"The value of a%b is "<<a%b<<endl; 
    cout<<"The value of a/b is "<<a/b<<endl; 
    cout<<"The value of a-b is "<<a-b<<endl; 
    cout<<"The value of a-- is "<<a--<<endl; 
    cout<<"The value of --a is "<<--a<<endl; 
    cout<<"The value of a++ is "<<a++<<endl; 
    cout<<"The value of ++a is "<<++a<<endl; 
    cout<<endl;
    // Assignment Operator --> used to assigne value to given variable like
    int d=5;

    //Comparison Operator
    cout<<"Is a==b :"<<(a==b)<<endl;
    cout<<"Is a!=b :"<<(a!=b)<<endl;
    cout<<"Is a<=b :"<<(a<=b)<<endl;
    cout<<"Is a>=b :"<<(a>=b)<<endl;
    cout<<"Is a>b  :"<<(a>b)<<endl;
    cout<<"Is a<b  :"<<(a<b)<<endl;

    //Logical Operator
    // &&, ||, !
    cout<<"Is a==b and a<=b: "<<((a==b) && (a<=b))<<endl;
    cout<<"Is a==b or  a<=b: "<<((a==b) || (a<=b))<<endl;
    cout<<"Is a==b and a<=b: "<<(!(a==b))<<endl;
    return 0;
}
// www.cppreference.com