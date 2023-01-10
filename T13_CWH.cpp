#include<iostream>
using namespace std;
int main(){
    int marks[]={45,33,43,54,54};
    // using for loop ******
    // for(int i=0;i<5;i++){
    //     cout<<marks[i]<<endl;
    // }
    // using while loop *****
    int i=0; 
    // while(i<4){
    //     cout<<marks[i]<<endl;
    //     i++;
    // }

    //using do while loop ******
    // do{
    //     cout<<marks[i]<<endl;
    //     i++;
    // }while(i<5);

    int* ptr = marks; // marks is itself address so we dont use & operator
    cout<<"the address of first var in marks i.e. marks[0] : "<<ptr<<endl;
    cout<<"value at marks[0] is: "<<*ptr<<endl;
    ptr++;
    cout<<"adress of secon var i.e. marks[1]"<<ptr<<endl;
    cout<<"value at marks[1]: "<<*(ptr)<<endl;
    //ptr= address + size x i
    return 0;
}