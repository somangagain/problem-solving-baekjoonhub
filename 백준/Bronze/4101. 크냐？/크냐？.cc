#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while (1) {
        int a, b; cin >> a >> b;
        if (!a) break;
        if (a > b) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}