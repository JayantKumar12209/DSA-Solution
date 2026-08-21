class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;//-ve sign cn only at 1st number not possible at last 
        long long original = x;
        long long rev = 0;
        while(x>0){
            
            rev = rev * 10 + x%10;
            x /= 10;
        } return rev == original;
    }
};