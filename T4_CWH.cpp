#include<iostream> // stream represent the sequence of data or the flow of data
// input stream means the bytes is flowing from input device to main memory
// output stream means the bytes us flowing from main memory to screen
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter the value of n1: "; /* << is insertion operator means jo bhi cout ke under hai use screen per insert ker do*/
    cin>>n1;
    // >> is Extraction Operator means jo bhi input diya jaaye use rkh lo
    cout<<"Enter the value of n2: ";
    cin>>n2;
    cout<<"The sum of n1 and n2 is "<<n1+n2;
    return 0;
}
