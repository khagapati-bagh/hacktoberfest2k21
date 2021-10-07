/* I used Sliding Window Algorithm to
 solve a CodeForces Division 2 Question.

 The technique can be best understood with
 the window pane in bus, consider a window
 of length n and the pane which is fixed in
 it of length k. Consider, initially the
 pane is at extreme left i.e., at 0 units
 from the left. Now, co-relate the window
 with array arr[] of size n and pane with
 current_sum of size k elements. Now, if 
 we apply force on the window such that it
 moves a unit distance ahead. The pane will
 cover next k consecutive elements. 

I used the same concept to solve 
Educational CodeForces Round 87 - B. Ternary String
Overall Time Complexity : O(n) */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;//for the test cases
	cin>>t;
	while(t--)
	{
		string s;//for taking input
		cin>>s;
		int counter[4] = {};//counter variable for frequency calculation
		int l=0;
		int n=s.length();
		int ans=n+1;

		for(int i=0;i<n;i++)//loop running in O(n) Time Complexity
		{
			int digit = s[i] - 48;//converting character to digit
			counter[digit]++;//adding to frequency

			while(counter[s[l]-48]>1)
				counter[s[l]-48]--,l++;/*using Sliding Window here
				Removing last element and adding the next element*/;

			if(counter[1]&&counter[2]&&counter[3])
				ans=min(ans,i-l+1);

		}
		if(ans==n+1)//if no continous substring found.
			ans=0;
		cout<<ans<<endl;//displaying output
	}
}