#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,7,9,11}; // always take a sorted array in ASC order
    int n = nums.size();
    int target = 5; 

    // Two pointer approach
    int i=0;
    int j=n-1; 

    while(i<j){
        if( (nums[i]+nums[j]) == target ){
            cout << i << " " << j << endl;
            break;
        }
        if( (nums[i]+nums[j]) > target ) j--;
        else i++;
    }

    // no value found
    if(i>=j) cout << -1 <<endl;
    return 0;
}