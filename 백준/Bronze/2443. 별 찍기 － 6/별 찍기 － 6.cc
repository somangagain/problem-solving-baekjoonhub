#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) cout << " ";
        for (int j = 2 * n - 1 - 2 * (i - 1); j > 0; j--) cout << "*";
        cout << "\n";
    }

    return 0;
}