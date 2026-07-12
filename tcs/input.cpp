#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string arrr="{1,2,3,5,6}";
    stringstream ss(arrr);
    string temp;
    vector<int> v;
    while(getline(ss, temp, ',')){
        int number = stoi(temp);
        v.push_back(number);
    }
    for(auto x : v){
        cout<<x<<"\n";
    }
    return 0;
}