#include<iostream>
using namespace std;
union emp{
    int salary;
    char name[10];
};
int main(){
    union emp e1;
    //memroy is sharing among the members of union 
    cout<<"Enter Salary: ";
    cin>>e1.salary; //memory is formed for salary first
    cout<<"Enter name ";
    cin>>e1.name; //memeory is then destroyed for salart and created or shared with name then
    cout<<"Salary is "<<e1.salary<<endl; // it will give an garbage value
    cout<<"Name is "<<e1.name<<endl; 
    return 0;
}