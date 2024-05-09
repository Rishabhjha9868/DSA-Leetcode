class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n=happiness.size();
      sort(happiness.rbegin(),happiness.rend());
      int count=0;
      long long happy=0;
     for(int i=0;i<n;i++){
        happy=happy+max(0,happiness[i]-count);
        count++;
      if(count==k) break;
        
      }
      return happy; 
    }
};