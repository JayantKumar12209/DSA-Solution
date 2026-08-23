class Solution {
public:
    bool isPalindromic(string s) {
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] == s[n-i-1]) return true;
        }return false;
    }
};