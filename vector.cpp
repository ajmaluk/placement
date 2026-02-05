#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v = {1};
    v.insert(v.begin(),2);
    for (int x : v){
        cout<<x;
    }

    return 0;
}
