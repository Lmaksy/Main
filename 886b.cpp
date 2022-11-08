#include<iostream>
#include<cstring>
#include<algorithm>
const int maxn=1000000;
int a[maxn];
int last[maxn];
int main()
{
    int n;
    while(std::cin>>n)
    {
        memset(last,1000000,sizeof(last));
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
            last[a[i]]=i;
        }
        std::sort(last,last+maxn);
        std::cout<<a[last[0]]<<std::endl;
    }}
