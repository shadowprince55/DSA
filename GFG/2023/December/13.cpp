

class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
ll int zer=1,one=1,sum=zer+one,i=2;
if(n==1)
return sum;

while(i<=n){
    one = zer;
    zer = sum;
    sum = (zer+one)%1000000007;
    i++;
}
return sum%1000000007;

	}
};
