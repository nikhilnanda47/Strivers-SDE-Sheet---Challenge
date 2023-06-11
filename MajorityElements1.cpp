class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int me;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                me=nums[i];
                count++;
               
            }
            else{
                if(me==nums[i])
                    count++;
                else
                    count--;
                          
            }
        }
        count=0;
        for(auto x:nums){
            if(x==me)
                count++;
        }
       
        if(count>(n/2))
            return me;
        else
            return -1;
    }
};
