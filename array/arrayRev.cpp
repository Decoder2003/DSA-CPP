#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int nums[5] = {1,3,5,7,9};
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(nums[start],nums[end]);
        start++; end--;
    }

    // display
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }cout << endl;
    return 0;
}