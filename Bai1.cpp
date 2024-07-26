#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> a = {2, 3, 19, 88, 100, 28, 47, 31, 14, 25};
    for (int i : a) {
        if (isPrime(i)) cout << i << " ";
    }
    return 0;
}
