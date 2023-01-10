#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter n ";
    cin>>n;
    do{
       cout<<n<<" X "<<setw(2)<<i<<" = "<<setw(2)<<n*i<<endl;
       i++;
    }while(i<=10);
    return 0;
}