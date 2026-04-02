#include<iostream>

int feb(int n){
    if(n<=1){
        return n;
    }
    return feb(n-1) + feb(n-2);
}

int main(){
    feb(5);
}

//2^n time complexity