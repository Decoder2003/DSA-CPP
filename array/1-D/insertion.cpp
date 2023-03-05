#include <iostream>
using namespace std;

void insertAtLast(int arr[], int n, int value){
    for(int i=0; i<n; i++){
        if( arr[i]==0 ){
            arr[i] = value;
            break;
        }
    }
}

void insertAtPosition(int arr[], int n, int value, int index){
    for(int i=0; i<n; i++){
        if(i==index){
            int temp = arr[i];
            arr[i] = value;
            value = temp;
            index++;
        }
    }
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            cout << arr[i] << " ";
        }
        else{
            break;
        }
    }
    cout << endl;
}

int main(){
    int n=10, value=6;
    int arr[n] = {1,2,3,4,5};

    //insert 6 at last in array arr[10]
    insertAtLast(arr,n,value);
    display(arr,n);

    //insert 6 at index 2
    int index = 2;
    insertAtPosition(arr,n,value,index);
    display(arr,n);

    //insert 10 at index 0
    insertAtPosition(arr,n,value=10,index=0);
    display(arr,n);
    return 0;
}