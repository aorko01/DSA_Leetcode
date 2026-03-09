
// Extra space needed for the string 
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0)
//             return false;
//         string s = to_string(x);
//         int i = 0, j = s.size() - 1;
//         while (i < j) {
//             if (s[i] != s[j])
//                 return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
// };


// Optimized space
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0) {
//             return false;
//         }

//         long reverse = 0;
//         int xcopy = x;

//         while (x > 0) {
//             reverse = (reverse * 10) + (x % 10);
//             x /= 10;
//         }

//         return reverse == xcopy;        
//     }
// };


// Overly optimized to use less space and and time though asymtotic complexity doesn't improve

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        int last_half = 0;
        while (last_half < x) {
            last_half = last_half * 10 + x % 10;
            x /= 10;
        }
        return last_half == x || last_half / 10 == x;
    }
};
