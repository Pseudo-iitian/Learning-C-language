#include<iostream>
using namespace std;

int c = 34; // global declarations
int main()
{
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    c=a+b;
    cout<<"Sum is "<<c<<endl; 
    cout<<"Printimg global value i.e. Sum is "<<::c<<endl; //:: is scope resolution operator
    // we want to printf globar value =34 but local precedence is more then use scope resolution operator :: before c

    float d=34.4f; // if we pass 34.4 then it behaves as a double , it is must to have a 'f' to make it floating point

    long double e = 34.4l; // C++ assumes 34.4 as a double not as a float by default but we can make it float by adding 34.4f 
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    //sizeof(); it can vary from computer to computer by 64 or 32 bit operator
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
   return 0;
}
