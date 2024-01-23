 void mergesort(long long arr[], long long low, long long mid, long long high, long long &ctr){
        long long temp[high], i=low,j=mid+1, k=low;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp[k] = arr[i];
                i++;
                k++;
            }
            else{
                ctr += (mid-i+1);
                temp[k] = arr[j];
                j++;
                k++;
            }
        }
        while(i<=mid){
            temp[k] = arr[i];
            i++;
            k++;
        }
        while(j<=high){
            temp[k] = arr[j];
            j++;
            k++;
        }
        for(long long p=low;p<=high;p++){
            arr[p] = temp[p];
        }
    }
    
    void merge(long long arr[], long long low, long long high, long long &ctr){
        if(low<high){
            long long mid = low + (high-low)/2;
            merge(arr, low, mid, ctr);
            merge(arr, mid+1, high, ctr);
            mergesort(arr, low, mid, high, ctr);
        }
    }
   
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code 
        long long ctr = 0;
        merge(arr, 0, n-1, ctr);
        return ctr;
        
    }
