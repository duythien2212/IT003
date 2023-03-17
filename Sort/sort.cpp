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
    
        vector<vector<int>> a(10,vector<int>(MAX));
        for (int i = 0; i<10; i++){
            for (int j = 0; j<MAX; j++){
                cin >> a[i][j];
            }
            auto start = std::chrono::system_clock::now();
                // Some computation here
            
            sort(a[i].begin(), a[i].end());
            
            auto end = std::chrono::system_clock::now();
        
            std::chrono::duration<double> elapsed_seconds = end-start;
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        
            std::cout << "arr[" << i << "] : " << elapsed_seconds.count() << "\n";
        }

    return 0;
}