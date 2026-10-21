class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        // for(int i=0; i<nums.size(); i++){
        //     //if(nums[i] == nums[i+1]) i++;
        //     for(int j=i+1; j<nums.size(); j++){
        //         //if(nums[j] == nums[j+1]) j++;
        //         for(int k=j+1; k<nums.size(); k++){
                    
        //           if(i != j && j != k && i != k){
        //             if(nums[i] + nums[j] + nums[k] == 0){ ans.push_back({nums[i], nums[j], nums[k]});
        //             break;
        //             }
        //         }
        //         }
        //     }
        // }return ans;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int s=i+1, e=nums.size()-1;
            while(s<e){
                int sum = nums[i] + nums[s] + nums[e];
                if(sum < 0) s++;
                else if(sum>0) e--;
                else{ ans.push_back({nums[i], nums[s], nums[e]});
                while(s<e && nums[s] == nums[s+1]) s++;
                while( s<e && nums[e] == nums[e-1]) e--;
                s++;
                e--;
            }
            }

        }return ans;
    }
};