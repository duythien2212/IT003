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
    vector<int> a(n+1),unUsed;
    for (int i = 1; i<=n; i++){
        cin >> a[i];
    }

    sort(1 + a.begin(), a.end());

    int cnt = 0;

    for (int i = 1; i<=n; i++){
        if (a[i] != a[i-1]) {
            cout << a[i] << " ";
            k--;
        }
        else unUsed.push_back(a[i]);
        if (k == 0) break;
    }

    while (k!= 0){
        cout << unUsed.back() << " ";
        unUsed.pop_back();
        k--;
    }

    return 0;
}