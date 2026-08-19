class Solution {
    private:
        int getDigit(int n){
             int ans =0;
       while(n>0){
            int digit = n%10;
            ans = (digit*digit) + ans;
            n/=10;

        }return ans;
        }
public:
    bool isHappy(int n) {
        int slow =n, fast = getDigit(n);
        while(fast!=1 && slow!=fast){
            slow = getDigit(slow);
            fast = getDigit(getDigit(fast));
        }
       return fast == 1;
    }
};