#include <bits/stdc++.h>
using namespace std;

bool is_Reversible_Num(int n) {
    int rev = 0, temp = n;
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == temp;
}

int main() {
    int n = 10;
    int a[10] = {222, 2222, 19, 123, 12321, 28, 4774, 31, 141, 25};
    
    cout << "The number of reversible numbers: ";
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (is_Reversible_Num(a[i])) {
            count++;
        }
    }
    cout << count << endl;
    
    cout << "The reversible numbers: ";
    for (int i = 0; i < n; i++) {
        if (is_Reversible_Num(a[i])) cout << a[i] << " ";
    }
    
    return 0;
}
