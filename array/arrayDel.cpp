#include <iostream>
using namespace std;

int main(){
    int nums[4] = {10,20,30,40};
    int n = 4;
    int pos = 2;
    for(int i=0; i<n-1; i++){
        if(pos-1==i){
            swap(nums[pos-1],nums[i+1]);
            pos++;
        }
    }

    // display
    for(int i=0; i<n-1; i++){
        cout << nums[i] << " ";
    }cout << endl;
    return 0;
}