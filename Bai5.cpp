#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10, k = 10;
    int a[10] = {2, 3, 5, 9, 1, 7, 4, 6, 3, 2};
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) cout << a[i] << " " << a[j] << endl;
        }
    }
    return 0;
}
