#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeArrays(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> merged;  
    merged.reserve(n + m);

    int i = 0, j = 0;


    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    
    while (i < n) merged.push_back(arr1[i++]);
    while (j < m) merged.push_back(arr2[j++]);

    return merged;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> result = mergeArrays(arr1, arr2);

    cout << "Merged Array = ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
