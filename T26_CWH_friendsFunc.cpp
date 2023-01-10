#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a;
    int b;
    public :
        void setData(int a1,int b1){
            a=a1;
            b=b1;
        }
        friend Complex sumComplex(Complex o1, Complex o2); // it allows sumcomplex function to access private information from the class Complex.
        void getData(){
            cout<<"the complex number is : "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex s3;
    s3.setData((o1.a+o2.a),(o1.b+o2.b));
    return s3;
}
int main(){
    Complex s1,s2,sum;
    s1.setData(1,2);
    s1.getData();

    s2.setData(4,5);
    s2.getData();

    sum = sumComplex(s1,s2);
    sum.getData();

    return 0;
}

// properties of friend functions
// 1- Not in the scope of class
// 2- since it is not in the scope of class, it cann not be called from the object of the class
// c1.sumComplex() -> invalid
// 3- can be invoked wihtout the help of any object
// 4- usually conatins the object as arguements
// 5- can be decalred in public and private section of the class 
// 6- iy cannot access the member direclty by their name and need object_name.member_name to access any member