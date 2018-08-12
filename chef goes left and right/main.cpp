#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j=0,r=0,s=0;
        cin>>n>>k;
        int a[n],left,right;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1;i++)
        {

            if(a[i]>k)
            {
              left=a[i];
            }
            if(a[i]<k)
            {
                right=a[i];
                if(a[i+1]>left)
                    r=1;
                    else
                        r=2;
            }

        if(a[i]<k)
        {
              right=a[i];
            if(a[i]>k)
            {
                if(a[i+1]<right)
                    r=1;
            }

        }
        }
            if(r==1)
                cout<<"NO"<<endl;
            else if(r==2)
                cout<<"YES"<<endl;

    }

    return 0;
}
