#include <iostream>
using namespace std;

void shownum(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    shownum(n-1);
}

int main(){
    shownum(5);
    return 0;
}