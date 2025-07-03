#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector <int> &v, int n){
    int prev, curr;
    for(int i=1; i<n; i++){
        curr = v[i];
        prev = i -1;
        while(prev >=0 && curr < v[prev]){
            v[prev +1] = v[prev];
            prev--;
        }
        v[prev+1] = curr;
    }
}

void enter_Value(vector<int> &v, int n, int value){
    int prev = n-1;
    while(prev >=0 && v[prev] > value){
        v[prev+1] = v[prev];
        prev--;
    }
    v[prev+1] = value;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    insertionSort(v, n);
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    enter_Value(v, n,3);
    cout << endl;
    for(int i=0; i<n+1; i++){
        cout << v[i] << " ";
    }
    return 0;
}
