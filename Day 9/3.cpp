//TC : O(n^2)
//SC : O(1)
class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
            // Your code goes here
            int  n=arr.size();
            int max_sum=-1;
            for (int i=0;i<n-1;i++){
            int mini=min(arr[i],arr[i+1]);
            int mini2=max(arr[i],arr[i+1]);
            max_sum=max(max_sum,mini+mini2);
            for(int j=i+2;j<n && arr[j]<mini2;j++){
                if(arr[j]<mini){
                    mini2=mini;
                    mini=arr[j];
                }
                int sum=mini+mini2;
                max_sum=max(max_sum,sum);   }
        }
        return max_sum;
    }
};