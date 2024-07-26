#include <bits/stdc++.h>
using namespace std;

long long max(long long a, long long b) {
    return (a <= b) ? b : a;
}

long long min(long long a, long long b) {
    return (a > b) ? b : a;
}

pair<int, int> find_Max_and_Min(int n, int a[]) {
    int Max = 0, Min = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        Max = max(Max, a[i]);
        Min = min(Min, a[i]);
    }
    pair<int, int> result = make_pair(Max, Min);
    return result;
}

int main() {
    int n = 10;
    int a[10] = {2222, 3, 19, 88, 12321, 28, 4774, 31, 141, 25};
    
    pair<int, int> temp = find_Max_and_Min(n, a);
    cout << "So lon nhat: " << temp.first << endl;
    cout << "So be nhat: " << temp.second << endl;
    return 0;
}
