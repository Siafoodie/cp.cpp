#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int q;
        int f=n-1;
        int l=n-1;
        for(int i=n-1;i>=1;i--)
        {
           if(f==0)break;
            if(i==l&&i!=0)
            {
              q=ar[i]<ar[i-1]?ar[i]:ar[i-1]; 
              cout<<q<<endl;
              ar[i-1]=q;
              l=l-2;
              f--;
            }
            else if(i!=l&&i!=0)
            {
                q=ar[i]>ar[i-1]?ar[i]:ar[i-1];
                cout<<q<<endl;
                ar[i-1]=q;
                f--;
            }

        }
        cout<<q<<endl;
    }
}