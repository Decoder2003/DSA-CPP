#include <iostream>
using namespace std;

void deleteArray(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key && i<n){
            key = arr[i+1];
            arr[i] = arr[i+1];
        }
    }
    arr[n-1]=0;
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout<<endl;
}

int main(){
    int n=10;
    int arr[n] = {1,2,3,4,5};

    //Delete 3 from array arr[10] = {1,2,3,4,5}
    deleteArray(arr,n,3);
    display(arr,n);

    //Delete 1 from array arr[10] = {1,2,4,5}
    deleteArray(arr,n,1);
    display(arr,n);
    return 0;
}