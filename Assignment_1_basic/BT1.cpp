#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 1; i<=q; i++){
        int x;
        cin >> x;
        int tmp = lower_bound(a.begin(), a.end(), x) - a.begin();
        if (tmp == n || a[tmp] != x) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}