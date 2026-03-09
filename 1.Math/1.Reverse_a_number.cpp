
//! https://leetcode.com/problems/reverse-integer/

#include<iostream>
#include<cmath>
#include<string>

// class Solution {
// public:
//     int reverse(int x) {
//         if (x <= INT_MIN || x > INT_MAX)
//         return 0;
//         string str = to_string(abs(x));
//         std::reverse(str.begin(), str.end());
//         long val = stol(str);
//         if (val < INT_MIN || val > INT_MAX)
//             return 0; // overflow → return 0
//         else
//             return (x >= 0 ? val : -val); // in range → return reversed value
//     }
// };

class Solution {
public:
    int reverse(int x) {
        long reversed = 0;  // use long to detect overflow

        while (x != 0) {
            int digit = x % 10;      // get last digit
            x /= 10;                 // remove last digit

            reversed = reversed * 10 + digit;  // append digit
            if (reversed > INT_MAX || reversed < INT_MIN) 
                return 0;  // overflow check
        }

        return (int)reversed;
    }
};