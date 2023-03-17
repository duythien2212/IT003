#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> x, pair<int,int> y){
    if (x.first != y.first) return (x.first < y.first);
    else return (x.second > y.second);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    int n;
    cin >> n;
    vector<pair<int,int>> a(n+1);
    for (int i = 1; i<=n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(1 + a.begin(), a.end(), cmp);

    for (int i = 1; i<=n; i++){
        cout << a[i].first << " " << a[i].second << "\n";
    }
    return 0;
}