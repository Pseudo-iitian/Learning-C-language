#include<iostream>
using namespace std;
// using pointer reference
// void swapPointer(int* a,int* b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
//using ReferenceVar
int & referenceVar(int &a,int &b){ // int & mean return refernence to main 
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
}
int main(){
    int a,b;
    cout<<"Enter a and b : "<<endl;
    cin>>a>>b;

    // using pointer
    // cout<<"Before swapping number is : "<<a<<" and "<<b<<endl;
    // swapPointer(&a,&b); // using pointer variable
    // cout<<"After swapping number is : "<<a<<" and "<<b<<endl;

    //usijg referneceVAr // using reference variable
    cout<<"Before swapping number is : "<<a<<" and "<<b<<endl;
    referenceVar(a,b)=24;
    cout<<"After swapping naumber is : "<<a<<" and "<<b<<endl;
    return 0;
}