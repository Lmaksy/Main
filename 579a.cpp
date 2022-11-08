#include <iostream>
#include<string>
#include<array>
#include<cmath>
int main(){
    int n=0;
    std::cin>>n;
    int ans=0;
    while (n>0){
        ans++;
        int y;
        y=log2(n);
        n-=(pow(2,y));}
    std::cout<<ans;
}
