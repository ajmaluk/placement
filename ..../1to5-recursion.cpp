#include<iostream>
using namespace std;

void printnum(int n){
    cout<<n<<endl;
    if(n==5){
        return;
    }
    return printnum(n+1);
}

int main(){
    printnum(1);
    return 0;
}