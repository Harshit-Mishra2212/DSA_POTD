Question_1 : https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array
TC : O(n)
SC : O(n)
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        vector<int> c(a.size()+b.size());
        int i = 0;
        int j = 0;
        int r = 0;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                c[r++] = a[i++];
            }
            else {
                c[r++] = b[j++];
            }
        }
        while(i<a.size()){
            c[r++] = a[i++];
        }
        while(j<b.size()){
            c[r++] = b[j++];
        }
        return c[k-1];
    }
};