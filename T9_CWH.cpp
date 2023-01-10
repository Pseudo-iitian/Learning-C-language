#include<iostream>
using namespace std;
int main()
{
    int age;
    // if else ################

    cout<<"Enter age ";
    cin>>age;
    // if(age<0){
    // cout<<"you are not yet born";
    // }
    // else if(age<18)
    // cout<<"So sorry! You are no elogible for the party";
    // else if(age==18)
    // cout<<"you are a kid can get a kid pass";
    // else
    // cout<<"You are most welcome to the party ";

    // switch case statement (control selection statement)

    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    default:
        cout<<"No such special case"<<endl;
        break;
    }
    cout<<"Congratulations! You are out of switch statement";
    return 0;
}
