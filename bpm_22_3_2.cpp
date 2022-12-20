#include<bits/stdc++.h>
int main(){
    float count, hit;
    while (1==1){
    int x,y;
    std::cin>>x>>y;
    count++;
    if (((x<=2 && x>=-2 )&&(y<=1 &&y>=-1))&&(sqrt(x*x+y*y)>=1)){
        hit++;
    }std::cout<<hit/count<<std::endl;
    }
}
