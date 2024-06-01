#include <iostream>
#include <unordered_set>
using namespace std;

int nextNumber(int n){
    int num = 0;
    while(n>0){
        int dig = num%10;
        num += dig*dig;
        n = n/10;
    }
    return num;
}

bool isHappy(int n) {
    if (n==1) return true;
    if (n<10) return false;

    unordered_set<int> set;
    while(!set.count(n)){
        set.insert(n);
        n = nextNumber(n);
    }

    return true;
}

int main(){
    int n = 2;
    cout << isHappy(n) << endl;
    return 0;
}