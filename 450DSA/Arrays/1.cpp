// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int>pq;

        for(int i=r;i>=0;i--){
            pq.push(arr[i]);
            if(pq.size()>k){
                pq.pop();
            }
            
        }
        return pq.top();
    }
};
