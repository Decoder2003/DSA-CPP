#include <iostream>
#include <math.h>
using namespace std;

bool hashTable[100][2]; // Benefit of defining globally is that, 0 is assign by default no garbage value

void insert(int arr[],int n){
    for(int i=0; i<n; i++){
        if(arr[i]>=0) hashTable[arr[i]][0] = 1;
        else hashTable[abs(arr[i])][1] = 1;
    }
}

bool isFound(int arr[],int x){
    if(x>=0){
        if(hashTable[x][0] == 1) return true;
        else return false;
    }
    else{
        if(hashTable[abs(x)][1] == 1) return true;
        else return false;
    }
}

int main(){
    int arr[] = {-1,10,3,0,-3,-4};
    int n = sizeof(arr)/sizeof(int);
    insert(arr,n);

    int x = -1;
    if(isFound(arr,x)) cout << "Element is present." << endl;
    else cout << "Element is not present." << endl;
    return 0;
}

// Time complexity : O(1)
// Space complexity : O(1)