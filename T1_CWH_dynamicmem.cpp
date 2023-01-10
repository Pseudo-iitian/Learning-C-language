#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr;
    int n;
    cout<<"Enter the size of dynamic array : "<<endl;
    cin>>n;
    ptr = (int *)malloc(n*sizeof(int));
    /*
    initate vlaue wiht garbage value
    we are using sizeof because int has different size in different architecture
    malloc return void pointer, need to be typecast in (int *)
    it create a bunch of memory in heap 
    if not allocated any memory return NULL pointer

    int *ptr1;
    ptr1 = (int *)calloc(3,sizeof(int));
    calloc -> contiguous memory allocation
    initiate value with 0

    ptr1 = (int *)realloc(ptr1,5*sizeof(int));
    free(ptr1); // free memory from the heap */

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" index element : "<<endl;
        cin>>ptr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"the "<<i<<" index element : "<<ptr[i]<<endl;
    }
    ptr = (int *)realloc(ptr,2*sizeof(int));
    for(int i=0;i<2;i++){
        cin>>ptr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"the "<<i<<" index element : "<<ptr[i]<<endl;
    }
    free(ptr);
    return 0;
}