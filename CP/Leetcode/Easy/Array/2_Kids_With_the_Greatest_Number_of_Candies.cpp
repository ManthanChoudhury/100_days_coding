class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int check = 0;
        vector<bool> ans;
        for(auto a:candies)check=max(check,a);
        //! pro way to find max in vector without sort love it
        for(auto a:candies){
            //bruteforce 
            if(a+extraCandies >= check ){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        
        return ans;
        
    }
};
