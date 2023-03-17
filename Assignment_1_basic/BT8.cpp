#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    int k;
    string s;
    cin >> k;
    cin.ignore();
    getline(cin,s);

    vector<int> a(s.size());
    for (int i = 0; i<s.size(); i++){
        if (s[i] != ' '){
            a[i] = s[i] - 'A';
            a[i] += k;
            a[i] %= 26;
        }
        else a[i] = -1;
    }

    for (int i = 0; i<s.size(); i++){
        if (a[i] == -1) cout << " ";
        else cout << (char)(a[i] + 'A');
    }

    return 0;
}