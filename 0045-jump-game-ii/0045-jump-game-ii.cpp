class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0, reach =0,currentEnd =0;
        for(int i=0; i<nums.size()-1; i++){
            reach = max(reach, i+nums[i]);
            if(i == currentEnd){
                jump++;
                currentEnd = reach;
            }
        }
       return jump;
    }
};