class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>>mp;
      vector<vector<string>>res;
      for(auto &str:strs)
      {
        string sortedstr=str;
        sort(sortedstr.begin(),sortedstr.end());
       mp[sortedstr].push_back(str);
      }
      for(auto &pair : mp)
      {
        res.push_back(pair.second);
      }
    return res;

}
};