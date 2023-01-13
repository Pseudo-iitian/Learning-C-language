#include<iostream>
using namespace std;

float Money(int money, float si=1.0){
    return money*si;
}

// inline will replace mult(a,b) in main with this code
inline int mult(int a,int b){
    // do not recomeneded below functions to use with inline
    static int c=0; // this will run once only and then forgetable
    c=c+1; // this time when it run again then value of c will retained
    return a*b+c;
}

// it is calling the function 
// int mult(int a,int b){
// static int c=0;
// return a*b+c;
// }
int main(){
    int a,b;
    // cout<<"Enter a and b : "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is : "<<mult(a,b)<<endl;
    // if we want these piece of code to be repeat 10 times then we need to apply inline function operator
    // it is good with small line of code 
    // inline function is not recomended with recursion or big code as it will replace the function by the code due to which we dont need to call again and again but for big code, it will capture a lot of space.

    int money=100000;
    cout<<"FOR NORMAL ONE : Money for all of 1 lakh deposit after 1 year will become : "<<Money(money)<<endl;
    cout<<"FOR VIP : Money for all of 1 lakh deposit after 1 year will become : "<<Money(money,2.0)<<endl;

    return 0;
}