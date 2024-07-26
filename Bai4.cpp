#include <bits/stdc++.h>
using namespace std;

bool is_Reversible_Array(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n - i - 1]) return false;
    }
    return true;
}

int main() {
    int n = 10;
    // int a[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
    int a[5] = {1, 2, 3, 2, 3};
    
    if (is_Reversible_Array(n, a)) cout << "Reversible Array!";
    else cout << "Not Reversible Array!";
    return 0;
}
