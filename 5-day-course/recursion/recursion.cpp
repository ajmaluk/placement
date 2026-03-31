#include <iostream>
using namespace std;

void shownum(int n){
    if(n==0){
        return;
    }
    shownum(n-1);
    cout<<n<<endl;
}

int main(){
    shownum(5);
    return 0;
}
