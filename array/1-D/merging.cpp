#include <iostream>
using namespace std;

void mergeArray(int arr1[], int arr2[], int n1, int n2){
    int arr3[n1+n2];
    for(int i=0; i<n1; i++){
        arr3[i] = arr1[i];
    }
    for(int i=0; i<n2; i++){
        arr3[i+n1] = arr2[i];
    }

    //display
    for(int i=0; i<(n1+n2); i++){
        cout << arr3[i] << " ";
    }cout<<endl;
}

int main(){
    int n1 = 4;
    int n2 = 6;
    int arr1[n1] = {1,2,3,4};
    int arr2[n2] = {5,6,7,8,9,10};

    mergeArray(arr1,arr2,n1,n2);
}