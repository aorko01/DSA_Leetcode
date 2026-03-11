//! https://leetcode.com/problems/majority-element/


#include <vector>
#include <map>
using namespace std;


// Time : O(n)
//! Space: O(n)  this is not optimal space complexity
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int num:nums)
        {
            m[num]++;
        }
        for(auto it : m) {
            if(it.second > nums.size() / 2) {
                return it.first;
            }
        }
        return -1; 
    }
};


//! Most optimized
// Time : O(n)
//! Space: O(1)  this is important optimization 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int num : nums) {
            m[num]++;
        }
        for(auto it : m) {
            if(it.second > nums.size() / 2) {
                return it.first;
            }
        }
        return -1; 
    }
};


