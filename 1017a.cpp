#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    int S = a+b+c+d;
    int Ans = 1;
    for(int i = 2; i <= n; i++)
    {
        std::cin >> a >> b >> c >> d;
        if(a + b + c + d > S)
        {
            Ans++;
        }
    }
    std::cout<<Ans;
}
