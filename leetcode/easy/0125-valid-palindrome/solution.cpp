class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
         int st =0, e = n-1;
       while(st<e){
          if(!isalnum(s[st])) st++;
          else if(!isalnum(s[e])) e--;
          else{
            if(tolower(s[st]) != tolower(s[e])) return false;
             st++;
             e--;
          }
        
       } return true;
    }
};