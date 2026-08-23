class Solution {
public:
    bool isPalindromic(string s) {
        string binaryStr = "";
        
        // Convert each character into its 8-bit binary representation
        for (char c : s) {
            binaryStr += bitset<8>(c).to_string();
        }
        
        // Check if the binary string is a palindrome using two pointers
        int st = 0;
        int e = binaryStr.length() - 1;
        
        while (st < e) {
            if (binaryStr[st] != binaryStr[e]) {
                return false;
            }
            st++;
            e--;
        }
        
        return true;
    }
};