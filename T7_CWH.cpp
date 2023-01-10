#include<iostream>
using namespace std;
int main()
{
    //***********REFERENCE VARIABLE*************
    // rohan das ---> monty ----> rohu 
    //one person with different names
    int a=32;
    int &b=a; // a reference variable 'b' points to a;
    cout<<a<<endl;
    cout<<b<<endl;
    // reference variable means ki 'a' ko 'b' name se pukar rhe hai

    //****************TYPE CASTING**************** 
    // cnverting one datat type to another datatype
    int c =34.344;
    cout<<"intger to float "<<(float)c<<endl;
    cout<<"intger to float "<<float(c)<<endl;
    float d = 34.2233;
    cout<<"intger to float "<<(int)d<<endl;
    cout<<"intger to float "<<int(d)<<endl;
    int e = int(d);
    
    return 0;
}
