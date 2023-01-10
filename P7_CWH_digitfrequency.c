#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char str[1000];
    int str1[1000]={0,0};
    gets(str);
    int a=strlen(str);
    // a11472o5t6
    // 'a' '1' '1' '4' '7' '2' 'o' '5' 't' '6' arr[i]
    //  0   1   2   3   4   5   6   7   8   9  i

    //  0 1 2 3 4 5 6 7 8 9
    //  0 2 1 0 1 1 1 1 0 0

    // l w 4 n 8 8 j 1 2 n 1
    // 0 1 2 3 4 5 6 7 8 9 10
    for(int i=0;i<a;i++){
        if(str[i]==-1){
            continue;
        }
        else{
            for(int j=i;j<a;j++){
                if(str[i]>='0' && str[i]<='9'){
                    if(str[i]==str[j]){
                        str1[(int)str[i]-48]+=1;
                        str[i]=-1;
                    }
                }
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",str1[i]);
    }
    return 0;
}