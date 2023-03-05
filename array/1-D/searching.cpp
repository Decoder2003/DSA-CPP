#include <iostream>
using namespace std;

void searching(int *arr, int n, int key){
    for(int i=0; i<n; i++)
    {
        if( *(arr+i)==key )
        {
            cout << "Found at index : " << i << endl; 
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n], key;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> key;

    searching(arr,n,key);

    return 0;
}