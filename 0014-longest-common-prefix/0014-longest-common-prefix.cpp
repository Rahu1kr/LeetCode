class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        for(int i=0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            bool match = true;
            for(int j=1; j<strs.size(); j++){
                if(ch != strs[j][i] || strs[j].size()<=i){
                    match = false;
                    break;
                }
            }
            if(match){
                str.push_back(ch);
            }else{
                break;
            }
        }
        return str;
    }
};