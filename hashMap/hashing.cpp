#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;



int main(){
    map<string, int> m;
    m["Dhruvika"] = 1;
    m["Dhruv"] = 1;
    m["Harsh"] = 1;
    m["Krishna"] = 2;

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}