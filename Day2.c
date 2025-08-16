#include<iostream>
#include<vector>
using namespace std;

int missing_num(vector<int>& nums)
{
  int n = nums.size() + 1;
  int sum = n*(n+1)/2;
  int original_sum = 0;

  for(int i = 0 ; i < nums.size(); i++)
    {
      original_sum += nums[i];
    }
  return sum - original_sum;
}

int main()
{ 
  vector<int> nums = {1, 2, 4, 5};
  cout << "Missing Number:"<<missing_num(nums) << endl;
  return 0;
 
}
