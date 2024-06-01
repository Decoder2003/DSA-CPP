#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "dhruvkalra";
    int start = 0;
    int end = s.length()-1;
    
    // Two pointer approach
    while(start<end){
        swap(s[start],s[end]);
        start++; end--;
    }cout << s << endl;
    return 0;
}