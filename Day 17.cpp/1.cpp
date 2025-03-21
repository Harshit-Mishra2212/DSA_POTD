class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m = s.length();
        int n = t.length();
        if(m!=n) return false;
        vector<int>v(150,1000);
        for(int i=0;i<m;i++){
            int idx = (int)s[i];
            if(v[idx]==1000) v[idx]=s[i]-t[i];
            else if(v[idx]!=(s[i]-t[i])) return false;
        }
        //emptying the vector
        for(int i=0;i<150;i++){
            v[i] = 1000;
        }
        for(int i=0;i<m;i++){
            int idx = (int)t[i];
            if(v[idx]==1000) v[idx]=t[i]-s[i];
            else if(v[idx]!=(t[i]-s[i])) return false;
        }

        return true;


    }
};