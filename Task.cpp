
#include <iostream>
using namespace std;

void show(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout<< endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
               swap(arr[j] , arr[j + 1]);

                swapped = true;
            }
        }

        cout << "After pass " << i + 1 << ": ";
        show(arr, n);

        if (!swapped)
            break;
    }
}

int main() {
    int arr[5] = {5, 1, 4, 2, 8};

    cout << "Before Sorting array: ";
    show(arr, 5);

    bubbleSort(arr, 5);

    return 0;
}

