class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        map<int,int>mp;
        for(int i=0;i<N;i++){
            int l = arr[i];
            mp[l]++;
        }
        for(auto x: mp){
            if(x.second == 1)
                return x.first;
        }
    }
};
