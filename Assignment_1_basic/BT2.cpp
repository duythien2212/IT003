#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i<=n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;

    bool ok = false;
    for (int i = 1; i<=n ;i++){
        if (a[i] == x) {
            cout << i << " ";
            ok = true;
        }
    }
    if (!ok) cout << "NO";
    return 0;
}