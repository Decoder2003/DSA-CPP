#include <iostream>
using namespace std;

int main(){
    int nums[4] = {10,30,40,0};
    int n = 4;
    int pos = 2;
    int e = 20;
    for(int i=0; i<n; i++){
        if(pos-1==i){
            int temp = e;
            e = nums[i];
            nums[i] = temp;
            pos++;
        }
    }

    // display
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }cout << endl;
    return 0;
}