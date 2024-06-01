#include <iostream>
#include <map>
using namespace std;

int main(){
    string s = "abcdeff";
    map<int, int> mp;

    for(int i=0; i<s.length(); i++){
        mp[s[i]-'a'] += 1;
    }

    for(auto e : mp){
        cout << e << endl;
    }
    return 0;
}