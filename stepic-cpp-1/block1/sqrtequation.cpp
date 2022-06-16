#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, D;
    double ans1, ans2;

    std::cin>>a>>b>>c;
    D = pow(b, 2) - (4*a*c);
    if (D >= 0){
        ans1 = (-b + sqrt(D))/(2*a);
        ans2 = (-b - sqrt(D))/(2*a);
        std::cout<<ans1<<" "<<ans2<<std::endl;
    }
    else std::cout<<"No real roots"<<std::endl;

    return 0;
}