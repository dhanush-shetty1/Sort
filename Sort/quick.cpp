#include <iostream>

using namespace std;

int Quick(int a[], int lwb, int upb) {
    int i, j, Pivote, temp;

    i = lwb + 1;
    j = upb;
    Pivote = a[lwb];

    while (i <= j) {
        while (a[i] <= Pivote)
            i++;
        while (a[j] > Pivote)
            j--;
        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    a[lwb] = a[j];
    a[j] = Pivote;
    return j;
}

void Sort(int a[], int lwb, int upb) {
    int z;
    if (lwb < upb) {
        z = Quick(a, lwb, upb);
        Sort(a, lwb, z - 1);
        Sort(a, z + 1, upb);
    }
}

int main() {
    int arr[] = {7, 2, 9, 1, 5, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Sort(arr, 0, size - 1);

    cout << "After sorting: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}