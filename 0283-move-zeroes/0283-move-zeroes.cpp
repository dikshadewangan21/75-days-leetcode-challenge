class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cp=0;
        for(int i=0; i<nums.size();i++){
                    int curr = nums[i];
                    if(nums[i]!=0){
                        nums[cp]=curr;
                        cp++;
                    }
        }
        for(int i=cp; i<nums.size();i++){
    nums[i]=0;
}
   
    }
};