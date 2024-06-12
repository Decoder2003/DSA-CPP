#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,1,1,0,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        if(arr[lo]==0){
            lo++;
        }
        else if(arr[lo]==1){
            swap(arr[lo],arr[hi]);
            hi--;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}