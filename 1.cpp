#include<bits/stdc++.h>
using namespace std;
int main()
{

int k, i, n, j;
string s, a;
cin>>s>>k;
a=s;
n=s.size();
for(i=n-1,j=0; i>=0; i--,j++)a[j]=s[i];
if(a==s) cout<<"YES"<<endl;
else cout<<"NO"<<endl;




  return 0;
}
