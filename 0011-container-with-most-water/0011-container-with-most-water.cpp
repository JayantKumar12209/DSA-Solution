class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, w=0, maxC = 0, s=0, e=height.size()-1;
        while(s<e){
            l = min(height[s], height[e]);
            w = e - s;
            if(l*w > maxC) maxC = l*w;
                     //    maxC = max(maxC, l*w);
            if(height[s]<=height[e]){
              
               s++;
            }
            else{
              
               e--; 
            } 
        }
        
       return maxC;
    }
};