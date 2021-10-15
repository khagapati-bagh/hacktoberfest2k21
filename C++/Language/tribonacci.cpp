/* 
        Author : Johnny Quintero
        Date : Date format 14/10/2021
        Description : C++ program to calculate the tribonacci of a number with programming dynamic
*/
 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    const ll MOD = 1000000007;
    ll dp[100000+1]; // table of memorization of answers

    //Function to calculate the tribonacci with programming dynamic
    void tribonaci(){
    	dp[1] = 0;
    	dp[2] = 0;
    	dp[3] = 1;
    	for(int i = 4; i <= 100000; i++){
    		dp[i] = ( dp[i-1]%MOD + dp[i-2]%MOD + dp[i-3]%MOD ) %MOD;
    	}
    }
     

    int main() {
        // initialize the memorization table to zero
    	memset(dp,0,sizeof(dp));
    	tribonaci();
    	ll n;
    	while(cin>>n){
    		cout<< dp[n] <<endl;
    	}
    }