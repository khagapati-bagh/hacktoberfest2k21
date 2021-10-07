#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int ar[N];
long long p[N];
long long q[N];
int main()
{
int n; ////Taking input of number of stones
cin>>n;
for(int i=1;i<=n;++i)//Taking input of cost of each stones
{
cin>>ar[i];
p[i]=p[i-1]+ar[i];
}
sort(ar+1,ar+n+1);//sorting stones in increasing order for second type question 
for(int i=1;i<=n;i++)
q[i]=q[i-1]+ar[i];
 //taking input of number of question raised by Kuriyama Mirai
int g;
cin>>g;
while(g--)
{
int t , l , r;
cin>>t>>l>>r;//taking input of type of queston raised by Kuriyama Mirai
if(t==1)
cout<<p[r]-p[l-1]<<endl;  //printngi out sum of type 1 question raised by Kuriyama Mirai
else
cout<<q[r]-q[l-1]<<endl;  //printngi out sum of type 2 question raised by Kuriyama Mirai
}

}
