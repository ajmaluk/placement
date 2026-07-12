#include<iostream>
using namespace std;


int feb(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return feb(n-1)+feb(n-2);
}

int main(){
    int n= 4;
    int number = feb(n+1);
    cout<<number;
    return 0;

}