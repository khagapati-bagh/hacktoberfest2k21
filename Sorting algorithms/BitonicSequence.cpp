/*Input:
9

3 1 2 4 5 9 13 14 12

Output:
2 3 5 12 13 14 9 4 1

*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mymax(int a,int b)
{
  if(a>b)
    return 1;
  return 0;
}
int main() 
{
   int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      a.push_back(x);
    }
    
    
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++)
    {
      if(i%2==0)
        even.push_back(a[i]);
      else
        odd.push_back(a[i]);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(),mymax);
    for(int i=0;i<even.size();i++)
      cout<<even[i]<<" ";
    for(int i=0;i<odd.size();i++)
      cout<<odd[i]<<" ";
    cout<<endl;
  }
    return 0;
}
