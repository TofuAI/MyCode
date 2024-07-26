#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ucln(a[i], a[j]) == 1) {
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
    return 0;
}
