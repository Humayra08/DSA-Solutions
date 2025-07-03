#include <bits/stdc++.h>
using namespace std;

vector<int> a, b;

void merging(int low, int mid, int high) {
    int l1 = low, l2 = mid + 1, i = low;

    while (l1 <= mid && l2 <= high) {
        if (a[l1] <= a[l2])
            b[i++] = a[l1++];
        else
            b[i++] = a[l2++];
    }

    while (l1 <= mid)
        b[i++] = a[l1++];

    while (l2 <= high)
        b[i++] = a[l2++];

    for (int j = low; j <= high; j++)
        a[j] = b[j];
}

void m_sort(int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    m_sort(low, mid);
    m_sort(mid + 1, high);
    merging(low, mid, high);
}

int main() {
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        a.push_back(val);
    }

    b.resize(n);

    m_sort(0, a.size() - 1);

    cout << "Sorted elements:\n";
    for (int x : a)
        cout << x << " ";
    cout << endl;
}

