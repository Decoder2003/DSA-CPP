#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int nums[5] = {1,2,3,4,5};
    int result[5] = {};
    int k = 3;
    for(int i=0; i<n; i++){
        result[(i+k)%n] = nums[i];
    }

    // display 
    for(int i=0; i<n; i++){
        cout << result[i] << " ";
    }cout << endl;
    return 0;
}