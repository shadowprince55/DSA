class Solution {
    int pfsum(int n){
        int s=0;
        while(n%2==0){
            
            n=n/2;
            s++;
            
        }
        
        for(int i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                
                n=n/i;
                s++;
                
            }
        }
        if(n>2)
            s++;
        
        
        return s;
    }
public:
    

	int sumOfPowers(int a, int b){
	    // Code here
	    int sum = 0;
	    for(int i=a;i<=b;i++){
	        sum += pfsum(i);
	    }
	    return sum;
	}
};
