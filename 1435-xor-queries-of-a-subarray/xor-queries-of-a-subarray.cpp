class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>cumXor(n,0);
        cumXor[0]=arr[0];
        for(int i=1;i<n;i++){
            cumXor[i]=cumXor[i-1]^arr[i];
        }
        vector<int>ans;
        for(auto &vec:queries){
            int l=vec[0];
            int r=vec[1];
            int xor_val=cumXor[r]^(l==0?0:cumXor[l-1]);
            ans.push_back(xor_val);
        }
        return ans;
    }
};