#include <iostream> 
#include <vector>
using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums) {
    
// }

int main(){
    int arr[] = {1,2,6,2,4,1};
    // int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 3;

    int maxSum = 0;
    for(int i=0; i<k; i++){
        maxSum += arr[i];
    }
    
    int n = sizeof(arr) / sizeof(int);
    int windowSum = maxSum;
    for(int i=k; i<n; i++){
        windowSum += arr[i] - arr[i-k];
        maxSum = max(maxSum,windowSum);
    }

    cout << maxSum << endl;
    return 0;
}