//Approach : made a function of reverse array and first reversed vector from oth index to n-k-1 then from n-k to n-1 and then reversed as a whole
//TC : O(n)
//SC : O(1)
class Solution {
public:
    void reverse(int i, int j, vector<int>&a){
    while(i<=j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    if(k>n) k=k%n;
    reverse(0,n-k-1,nums);
    reverse(n-k,n-1,nums);
    reverse(0,n-1,nums);
    }
};