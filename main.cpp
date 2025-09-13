#include <iostream>
using namespace std;

void enterArrayData(double* headptr);
void outputArrayData(double* headptr);
double sumArray(double* headptr);

int main() {
    double* headptr = new double[5];
    int sum;
    enterArrayData(headptr);
    outputArrayData(headptr);
    sum = sumArray(headptr);
}

void enterArrayData(double* headptr) {
    cout << "Data entry for the array: \n";
    for(int i = 0; i < 5; i++) {
        cout << "Element " << (i+1) << ": ";
        cin >> headptr[i];
    }
    cout << "Data entry complete\n";
}

void outputArrayData(double* headptr) {
    cout << "Outputting Array Elements: ";
    for(int i = 0; i < 5; i++) {
        cout << (double)headptr[i] << " ";
    }
    cout << endl;
}

double sumArray(double* headptr) {
    double total = 0.0;
    cout << "Sum of values: ";
    for (int i = 0; i < 5; i++) {
        total += headptr[i];
    }
    cout << total << endl;
    return total;
}
