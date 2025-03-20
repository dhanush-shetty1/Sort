#include <iostream>

using namespace std;

void merge(int a[], int small, int mid, int large) {
    int x, y, temp[100], z = 0;

    x = small;
    y = mid + 1;

    while (x <= mid && y <= large) {
        if (a[x] < a[y]) {
            temp[z] = a[x];
            z++;
            x++;
        } else {
            temp[z] = a[y];
            z++;
            y++;
        }
    }

    while (y <= large) {
        temp[z] = a[y];
        z++;
        y++;
    }

    while (x <= mid) {
        temp[z] = a[x];
        z++;
        x++;
    }

    z = 0;
    for (x = small; x <= large; x++) {
        a[x] = temp[z];
        z++;
    }
}

void divide(int a[], int small, int large) {
    int mid;
    if (small < large) {
        mid = (large + small) / 2;
        divide(a, small, mid);
        divide(a, mid + 1, large);
        merge(a, small, mid, large);
    }
}

int main() {
    int arr[] = {3, 5, 1, 4, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    divide(arr, 0, size - 1);

    cout << "After sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}