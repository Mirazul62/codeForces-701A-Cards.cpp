#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,a[100000],n, sum=0,count=0,p,e;
    cin>>n;
    p=n/2;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    e=sum/p;
  //  cout<<sum;
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]+a[j]==e)
        {
            cout<<i<<" "<<j<<endl;
            a[i]=0;
            a[j]=0;
         }
    }
}


}
