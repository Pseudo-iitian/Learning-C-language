//  Array of Objects & Passing Objects as Function Arguments in C++
#include<bits/stdc++.h>
using namespace std;
class Employee{
    int id;
    int salary;
    public : 
        void setId();
        void getId();
};
void Employee:: setId(){
    salary=122;
    cout<<"Enter the id : ";
    cin>>id;
}
void Employee :: getId(){
    cout<<"The id of this employee is : "<<id<<endl;
}
int main(){
    // Employee harry, lovish, aditya, shruti; 
    // harry.setId() ;
    // harry.getId();
    // creating an array of object of facebook company
    Employee fb[4];
    for(int i=0;i<4;i++){
        fb[i].setId();
    }
    for(int i=0;i<4;i++){
        fb[i].getId();
    }   
    return 0;
}