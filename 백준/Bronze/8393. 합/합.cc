#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }

    cout << s;
    

    return 0;
}