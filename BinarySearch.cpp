#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0; 
    int end = n-1;

    while(start < end){
        int mid = (start + end)/2;
        
        if(arr[mid] == key) return mid;

        else if(arr[mid] < key) start = mid+1;

        else end = mid - 1 ;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,5,6,8,9,12,34,65};
    int n = sizeof(arr)/sizeof(int); 
    cout << "Enter the key to search ";
    int key; cin >> key;

    int index = BinarySearch(arr, n, key);
    if(index == -1){
        cout << key << " is not present in the given array. \n";
    }
    else{
        cout << key << " is present at index " << index << endl;
    }
}