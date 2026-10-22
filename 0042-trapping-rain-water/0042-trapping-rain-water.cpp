class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;

        // for (int i = 0; i < n; i++) {
        //     int leftMax = 0, rightMax = 0;

        //     for (int j = 0; j <= i; j++) {
        //         leftMax = max(leftMax, height[j]);
        //     }

        //     for (int j = i; j < n; j++) {
        //         rightMax = max(rightMax, height[j]);
        //     }

        //     water += min(leftMax, rightMax) - height[i];
        // }
        vector<int>leftMax(n,0);
        vector<int>rightMax(n,0);
        int lMax =0, rMax = 0;
        for(int i=0; i<n; i++){
            lMax = max(lMax, height[i]);
            leftMax[i] = lMax;
        }
          for(int i=n-1; i>=0; i--){
            rMax = max(rMax, height[i]);
            rightMax[i] = rMax;
        } 

        for(int i=0; i<n; i++){
            water += min(rightMax[i], leftMax[i]) - height[i];
        }

        return water;
    }
};