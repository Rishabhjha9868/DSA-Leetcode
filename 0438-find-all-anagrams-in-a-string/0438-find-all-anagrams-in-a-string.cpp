class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {  // s2->s s1->p                   
        vector<int>ans;
        vector<int>arr1(26,0); //s1
        vector<int>arr2(26,0); //s2
        for(auto it:s1) arr1[it-'a']++;
        int k=s1.size();
        int i=0,j=0,n=s2.size();
        while(j<n && i<n){
            arr2[s2[j]-'a']++;
            if(j-i+1<k) j++;
            else if(j-i+1==k){
            if(arr1==arr2) ans.push_back(i); 
            arr2[s2[i]-'a']--;
            i++;
            j++;
            }
        }
        return ans; 
    }
};