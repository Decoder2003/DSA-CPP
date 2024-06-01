#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ans = strs[0];
    int n = strs.size();
    for(int i=1; i<n; i++){
        for(int j=0; j<strs[i].length(); j++){
            if(j >= ans.length() || strs[i][j] != ans[j]){
                if(j==0) return "";
                else{
                    ans = strs[i].substr(0,j);
                    break;
                }
            }
        }
        if(strs[i].length() < ans.length()) ans = strs[i];
    }return ans;
}

int main(){
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}