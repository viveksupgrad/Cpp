int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        for(int i=0; i<nums.size();i++){
            int sum = 0;
            for(int j=i; j<nums.size();j++){
                sum += nums[j];
                if(sum == k){
                    res++;
                }
            
            }

        }
    return res;}
