//Approach : traversed in the vector an swapped non zero elements with zero ones
//TC : O(n)
//SC : O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
         int nz = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[nz]);
                nz++;
            }
        
   }
        }
};