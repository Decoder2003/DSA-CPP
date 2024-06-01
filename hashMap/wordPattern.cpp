#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

bool wordPattern(string pattern, string s) {
    vector<string> strs;
    string temp = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]==' '){
            strs.push_back(temp);
            temp = "";
        }
        else temp += s[i];
    }strs.push_back(temp);

    if(strs.size()!=pattern.size()) return 0;

    unordered_map<char, string> m;
    set<string> st;
    for(int i=0; i<pattern.length(); i++){
        if(m.find(pattern[i]) != m.end()){
            if(m[pattern[i]] != strs[i]) return false;
        }
        else{
            if(st.count(strs[i])>0) return false;
            m[pattern[i]] = strs[i];
            st.insert(strs[i]);
        }
    }
    return true; 
}

int main(){
    string pattern = "abba";
    string s = "dog cat cat dog";
    cout << wordPattern(pattern,s) << endl;
    return 0;
}