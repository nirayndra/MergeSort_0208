#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimum panjang array yang dapat dimasukkan adalah 20:" << endl;
        }
    }
    cout << endl;
    cout << "================================" << endl;
    cout << "=====Masukkan Element Array=====" << endl;
    cout << "================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

// create function mergesort
void mergeSort(int low, int high)
{
    if (low >= high) // step 1
    {
        return; // step 1. a
    }

    int mid = (low + high) / 2; // step 2

    //step 3
    //fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid); // step 3.a
    mergeSort(mid + 1, high); // step 3.b

}