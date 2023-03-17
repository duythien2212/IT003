#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    int n,k;
    cin >> n >> k;
    k %= n;
    vector<int> a(n+1);
    
    for (int i = 1; i<=n; i++){
        cin >> a[i];
    }

    for (int i = n-k+1; i<=n; i++){
        cout << a[i] << " ";
    }

    for (int i = 1; i <= n-k; i++){
        cout << a[i] << " ";
    }
    return 0;
}