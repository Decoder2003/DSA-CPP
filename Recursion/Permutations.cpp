#include <iostream>
#include <vector>
using namespace std;

void myFunc(vector<int> &nums,vector<int> &output,vector<vector<int>> &result){
    // base case
    if (output.size()==nums.size()){
        for(int i=0; i<output.size(); i++){
            cout << output[i] << " ";
        }cout << endl;
        result.push_back(output);
        return;
    }
    // recursive case
    for(int i=0; i<nums.size(); i++){
        output.push_back(nums[i]);
        myFunc(nums,output,result);
    }
}

int main() {
    vector<int> nums = {1,2,3};
    vector<int> output;
    vector<vector<int>> result;
    myFunc(nums,output,result);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[0].size(); j++){
            cout << result[i][j] << " ";
        }cout << endl;
    }
    return 0;
}


