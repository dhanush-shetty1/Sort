#include <bits/stdc++.h>
using namespace std;

void shellSort(vector<int>& a) {
    for (int g = a.size() / 2; g > 0; g /= 2)
        for (int i = g; i < a.size(); i++)
            for (int j = i; j >= g && a[j] < a[j - g]; j -= g)
                swap(a[j], a[j - g]);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    shellSort(a);
    for (int x : a) cout << x << " ";
}
