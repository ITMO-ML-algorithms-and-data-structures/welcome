#include <iostream>
#include <vector>

using namespace std;

// Найти все пары чисел в массиве, разность которых равна заданному числу

vector<vector<int>> bad_algorithm(int arr[], int n, int delta) {
    vector<vector<int>> res;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] - arr[j] == delta) {
                vector<int> pair = {arr[i], arr[j]};
                res.push_back(pair);
            } else if (arr[j] - arr[i] == delta) {
                vector<int> pair = {arr[j], arr[i]};
                res.push_back(pair);
            }
        }
    }
    return res;
}

int main() {
    // get data
    int n, delta; cin >> n >> delta;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // algorithm
    vector<vector<int>> res = bad_algorithm(arr, n, delta);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i][0] << ' ' << res[i][1] << '\n';
    }
  
    return 0;
}
