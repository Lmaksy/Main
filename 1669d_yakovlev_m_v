#include <iostream>
#include<string>
using namespace std;
int main()
{
    int  n,b,r,ans,i,j,t;
    cin>>t;
    while(t--)
    {
        string s;
        ans=b=r=0;
        cin>>n>>s;
        for(i=0; i<n; i++)
        {
            if(s[i]!='W')
            {
                b=r=0;
                while((n>i)&&(s[i]!='W'))
                {
                    if(s[i]=='B')
                        b++;
                    else
                        r++;
                    i++;
                }
                if(b==0||r==0)
                {
                    ans=1;
                    break;
                }
            }
        }
        if(ans==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
}
