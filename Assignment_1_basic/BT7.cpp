#include <bits/stdc++.h>
using namespace std;

char symbols[] = {'!' , '@' , '#' , '$' , '%' , '^' , '&' , '*' , '?' , '_' , '~'};

bool is_Symbols(char x){
    for (char i: symbols){
        if (i == x) return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    

    string s;
    // cin >> s;
    getline(cin, s);
    
    if (s.size() < 8){
        cout << "KhongHopLe";
        return 0;
    }

    int Number_Execess = s.size() - 8, Number_Upper = 0, Number_Numbers = 0, Number_Symbols = 0;

    for (int i = 0; i<s.size(); i++){
        if ('A' <= s[i] && s[i] <= 'Z') Number_Upper++;
        else if ('0' <= s[i] && s[i] <= '9') Number_Numbers++;
        else if ('a' <= s[i] && s[i] <= 'z') continue;
        else if (is_Symbols(s[i])) Number_Symbols++;
        else {
            cout << "KhongHopLe";
            return 0;
        }
    }

    int Combo = 0;
    if (Number_Numbers) Combo++;
    if (Number_Symbols) Combo++;
    if (Number_Upper) Combo++;

    int Bonus_Combo = 0;
    if (Combo == 3) Bonus_Combo = 25;
    if (Combo == 2) Bonus_Combo = 15;

    int score = 40;
    score += Number_Execess*3 + Number_Upper*4 + Number_Numbers*5 + Number_Symbols*5 + Bonus_Combo;

    if (Number_Numbers + Number_Symbols + Number_Upper == 0) score -= 15;
    if (Number_Numbers == s.size()) score -= 35;

    // cout << score;

    if (score < 50) cout << "Yeu";
    if (50 <= score && score < 75) cout << "Vua";
    if (75 <= score && score < 100) cout << "Manh";
    if (100 <= score) cout << "RatManh";
    return 0;
}