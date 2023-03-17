#include <bits/stdc++.h>
using namespace std;

void Reverse(int x, string &s){
    x--;
    for (int i = 0; i <= x/2; i++){
        swap(s[i], s[x-i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    string s;
    cin >> s;
    
    int n = s.size();

    vector<int> uoc;
    for (int i = 1; i<=n; i++)
        if (n%i == 0) uoc.push_back(i);

    for (int i = 0; i < uoc.size(); i++){
        Reverse(uoc[i], s);
    }

    cout << s;
    return 0;
}