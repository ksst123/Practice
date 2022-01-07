class Solution {
public:
    vector<char> reverseString(vector<char>& s) {
        int array_size = s.size() - 1;
        vector<char> save_array;
        int i;
        
        for(i=0; i<s.size(); i++)
        {
            save_array.push_back(s[array_size-i]);
        }
        s = save_array;
        return s;
    }
};