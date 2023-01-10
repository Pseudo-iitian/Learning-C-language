#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int i=10;
    //for loop syntax
    // for(initialization; condition; updation){
    //     code;
    // }

    // printing 1 to 10 digits **********
    // for(int i=1;i<=10;i++){
    //     cout<<i<<endl;
    // }

    //printing 1 to 40 using while loop
    // while(i<=40){
    //     if(i/10==0){
    //     cout<<setw(1)<<"0"<<i<<endl;
    //     }
    //     else{
    //         cout<<setw(2)<<i<<endl;
    //     }
    //     i++;
    // }

    //do while loop
    do{
        cout<<i<<endl;
        i++;
    }while(i<=5);

    return 0;
} 