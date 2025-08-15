// Sort an Array of 0s, 1s, and 2s

#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int> &arr){
  int n = arr.size();
  int low = 0;
  int high = n-1;
  int mid = 0;

  while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high--]);
        }
    }
  }
int main() {
    vector<int> arr = { 0, 1, 2, 1, 0, 2, 1, 0};
    int n = arr.size();
    sort012(arr); 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
