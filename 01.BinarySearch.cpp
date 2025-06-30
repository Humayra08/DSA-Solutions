#include<bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int n, int key){
    int lb = 0, hb = n-1, mid = 0;
    while (lb <= hb){
        mid = (lb + hb)/2;

        if(key == arr[mid]){
             return mid;
        }
        else if(key > arr[mid]){
            lb = mid + 1;
        }
        else{
            hb = mid -1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
     int key;
    cin >> key;

    sort(arr, arr+n);

    int k = binSearch(arr, n, key);
    if(k== -1){
        cout << "key not found" << endl;
    }
    else{
         cout << "key found at index: " << k << endl;
    }
    return 0;
}
