class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // for(int i=0; i<numbers.size(); i++){
        //     for(int j=i+1; j<numbers.size(); j++){
        //         if(numbers[j] == target - numbers[i])
        //                return {i+1, j+1};
        //     }
        // } return {};
        int s=0, e=numbers.size()-1, mid = s+(e-s)/2;
        while(s<e){
            if(numbers[s] + numbers[e] == target) return {s+1, e+1};
            else if(numbers[s] + numbers[e] > target) e--;
            else s++;
        } return {};
    }
};