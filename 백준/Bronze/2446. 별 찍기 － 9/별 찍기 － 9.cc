#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < n - 1 - i; j++) cout << "*";
        cout << "*";
        for (int j = 0; j < n - 1 - i; j++) cout << "*";
        cout << "\n";
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < n - 1 - i; j++) cout << "*";
        cout << "*";
        for (int j = 0; j < n - 1 - i; j++) cout << "*";
        cout << "\n";
    }

    return 0;
}