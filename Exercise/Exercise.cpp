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

