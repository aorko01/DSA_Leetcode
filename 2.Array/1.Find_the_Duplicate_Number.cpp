#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]) - 1; // subtract 1 to get valid index
            if (nums[index] < 0)
            {
                return abs(nums[i]); // duplicate found
            }
            nums[index] *= -1; // mark as visited
        }
        return -1; // should never reach here if input is valid
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << s.findDuplicate(nums) << endl; // Output: 2
    return 0;
}