#include <iostream>
using namespace std;

int main() {
    // Hardcoded input vectors
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    int n = 3;   // size of vectors

    int dot = 0;

    for (int i = 0; i < n; i++) {
        dot += a[i] * b[i];
    }

    cout << "Dot Product is as = " << dot << endl;

    return 0;
}

