#include <iostream>
using namespace std;

const int MAX_SIZE = 97; // 77 + 20 - 2 x 15 + 10 + 20 (Nim:77)

void merge(int jaky[], int low, int mid, int high) {    //arr diganti dengan nama panggilan
    int i = low, DA = mid + 1, k = low;     //Nama saya : Dzaky Hanif Annafi
    int b[MAX_SIZE];

    while (i <= mid && DA <= high) {
        if (jaky[i] <= jaky[DA]) {
            b[k++] = jaky[i++];
        }
        else {
            b[k++] = jaky[DA++];
        }
    }

    while (DA <= high) {
        b[k++] = jaky[DA++];
    }

    while (i <= mid) {
        b[k++] = jaky[i++];
    }

    for (i = low; i <= high; i++) {
        jaky[i] = b[i];
    }
}

void mergeSort(int jaky[], int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(jaky, low, mid);
    mergeSort(jaky, mid + 1, high);
    merge(jaky, low, mid, high);
}

void input(int jaky[], int& size) {
    cout << "MASUKAN JUMLAH ELEMEN (maksimum " << MAX_SIZE << "): ";
    cin >> size;
    if (size > MAX_SIZE) {
        cout << "Size exceeds maximum allowed value. Setting size to " << MAX_SIZE << endl;
        size = MAX_SIZE;
    }
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> jaky[i];
    }
}

void display(int jaky[], int size) {
    cout << "sorted array :" << endl;
    for (int i = 0; i < size; i++) {
        cout << jaky[i] << " ";
    }
    cout << endl;
}

int main() {
    int jaky[MAX_SIZE],size;

    input(jaky, size);
    mergeSort(jaky, 0, size - 1);
    display(jaky, size);

    return 0;
}
