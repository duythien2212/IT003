#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    int n,x;
    cin >> n >> x;
    vector<int> a(n+1);
    for (int i = 1; i<=n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    int ans = 0;
    for (int i = 1; i<=n ;i++){
        if (a[i] > x) break;
        
        int tmp = a[i];
        int pos = upper_bound(1 + a.begin(), a.end(), x - a[i]) - a.begin() - 1;
        if (pos != i) tmp += a[pos];
        else {
            pos--;
            if (pos > 0) tmp += a[pos];
        }

        ans = max(ans, tmp);
    }
    cout << ans ;
    return 0;
}