#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // a is a variable can attain different value in c++ by declaring again and again
    // int a=34;
    // cout<<a<<endl;
    // a=43;
    // cout<<a<<endl;
    //we want it to be fixed and constant
    // const int b=34; ##
    // cout<<b<<endl;
    // b=43; //it is wrong to change, b is assignment of read-only variable 'b'
    // cout<<b<<endl;

    //############# MANIPULATORS ###############
    // endl; and setw is manipukators / setw(4) works under imonaip header files
    int a=4,b=34,c=345,d=1232;
    cout<<setw(4)<<a<<endl; // every number will take 4 charchter spaces including that num
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;
    return 0;
}
