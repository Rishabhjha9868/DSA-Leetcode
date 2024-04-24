class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        
        int sum_count = 0;
        int count = 0;
        int size = candies.size();
        for(int i=0; i<candies.size(); i++)
        {
            count = 0;
            sum_count = candies[i]+extraCandies;
            for(int j=0; j<candies.size(); j++)
            {
                if(sum_count>=candies[j])
                {
                    count++;
                }
            }
               cout<<count<<endl;
            if(count==size)
            {
                res.push_back(1);
            }
            else
            {
                res.push_back(0);
            }
        }
        return res;
    }
};