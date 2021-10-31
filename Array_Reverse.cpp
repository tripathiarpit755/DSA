#include<iostream>
#include<list>
using namespace std;

void Array_Reverse(int * arr, int n){
    int s = 0, end = n-1;

    while(s<end){
        swap(arr[s], arr[end]);
        s++;
        end--;
    }
}

int main(){
    int arr[] = {1,2,3,5,7,54,45,4,6};
    int n = sizeof(arr)/ sizeof(int);

    Array_Reverse(arr,n);

    for ( auto i : arr) cout << i << " " ;
    return 0;
}
