class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr = 0;

        for (int x : nums)
            xr ^= x;

        // Find a set bit
        int bit = 1;
        while ((xr & bit) == 0) {
            bit <<= 1;
        }

        int a = 0, b = 0;

        for (int x : nums) {
            if (x & bit)
                a ^= x;
            else
                b ^= x;
        }

        return {a, b};
    }
};