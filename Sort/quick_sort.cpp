// C++ Implementation of the Quick Sort Algorithm.
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6;
int arr[10][MAX];

int partition(int arr[], int start, int end)
{
    int mid = (start+end)/2;
	int pivot = arr[mid];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	// Giving pivot element its correct position
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	// Sorting left and right parts of the pivot element
	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

	// base case
	if (start >= end)
		return;

	// partitioning the array
	int p = partition(arr, start, end);

	// Sorting the left part
	quickSort(arr, start, p - 1);

	// Sorting the right part
	quickSort(arr, p + 1, end);
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    if (fopen("input.txt", "r")){
        freopen("input.txt","r",stdin);
    }
    
        // vector<vector<int>> arr(10,vector<int>(MAX));
        for (int i = 0; i<10; i++){
            for (int j = 0; j<MAX; j++){
                cin >> arr[i][j];
            }
            auto start = std::chrono::system_clock::now();
                // Some computation here
            
			quickSort(arr[i],0,MAX-1);

            auto end = std::chrono::system_clock::now();
        
            std::chrono::duration<double> elapsed_seconds = end-start;
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	
			std::cout << "arr[" << i << "] : " << elapsed_seconds.count() << "\n";


        }
		return 0;
}
