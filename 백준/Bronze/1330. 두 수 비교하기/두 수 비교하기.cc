#include <bits/stdc++.h>

using namespace std;

int A, B;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> A >> B;
    if (A > B) cout << '>';
    else if (A < B) cout << '<';
    else cout << "==";

    return 0;
}