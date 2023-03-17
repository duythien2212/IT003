#include <bits/stdc++.h>
using namespace std;

bool Find(int x, string &s1, string &s2){
    for (int i = 0; i<=x; i++){
        if (s2[i] != s1[s1.size() - x + i - 1]){
            // cout << x << " " << i << " " << s1[s1.size() - x + i - 1] << " " << s2[i] << "\n";
            return false;
        }
    }
    // cout << x << "\n";
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    string s1,s2;
    cin >> s1 >> s2;
    int ans = -1;
    for (int i = 0; i<s1.size(); i++){
        if (Find(i,s1,s2)) ans = i;
    }
    ans++;
    cout << s1.size() + s2.size() - ans << "\n";
    cout << s1;
    for (int i = ans; i<s2.size(); i++){
        cout << s2[i];
    }
    // cout << ans;
    return 0;
}