#include<bits/stdc++.h>
using namespace std;
class Employee{
    int id; // ny default it is private
    static int count; // static int is intialized with 0 and shared with class not wiht objects
    // saare object ke liye ek count hoga jo baar baar increment hoga
    // static variable are also known as class variable
    public :
        void setData(void);
        void printData(void);
        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};
int Employee :: count; // default value is 0, we cam initailize it with 1000 too
// int Employee :: count = 10;


void Employee :: setData(){
    cout<<"Enter the id"<<endl;
    cin>>id;
    count++;
}
void Employee :: printData(){
    cout<<"The id of this employee "<<id<<"this is employee"<<count<<endl;
}
int main(){
    Employee harry,abhi,lovish;
    // harry.id=2;  invalid because it is private declared here
    harry.setData();
    harry.printData();
    harry.getCount();
    abhi.setData();
    abhi.printData();
    abhi.getCount();
    lovish.setData();
    lovish.printData();
    lovish.getCount();

    return 0;
}