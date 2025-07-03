#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &v, int n){
     int minn;
     for(int i =0; i<n; i++){
        minn = i;
        for(int j=i+1; j<n; j++){
            if(v[minn] > v[j]){
                minn = j;
            }
        }
        swap(v[minn], v[i]);
     }
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    selection_sort(v, n);

    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
