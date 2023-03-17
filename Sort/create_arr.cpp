#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
    ofstream myfile;
    myfile.open ("input.txt");
    vector<vector<int>> a(10, vector<int> (MAX));
    for (int i = 0; i<MAX; i++){
        a[0][i] = i;
        a[1][i] = MAX-i;
        for (int j = 2; j<10; j++){
            a[j][i] = rand() % MAX;
        }
    }
    for (int i = 0; i<10; i++){
        for (int j = 0; j<MAX;j++){
            myfile << a[i][j] << " ";
        }  
        myfile << "\n";
    }
    return 0;
}