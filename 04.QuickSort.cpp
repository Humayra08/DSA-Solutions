#include<bits/stdc++.h>
using namespace std;

int partitionn(vector<int> &v, int low, int high){
    int pivot = v[low];
    int i = low-1, j = high +1;

    while(i < j){
        do{
            i++;
        }while(v[i] <= pivot);

        do{
            j--;
        }while(v[j] > pivot);

        if(i < j){
            swap(v[i], v[j]);
        }
    }
    swap(v[low], v[j]);
    return j;
}

void quick_Sort(vector<int> &v, int low, int high){
    if(low < high){
        int j = partitionn(v , low, high);
        quick_Sort(v, low, j);
        quick_Sort(v, j+1, high);
    }
}

int main(){
   int n;
   cin >>n;
   vector <int> v(n);
   for(int i=0; i<n; i++){
    cin >> v[i];
   }

   quick_Sort(v, 0, n-1);

   for(auto x : v){
    cout << x << " ";
   }
}

