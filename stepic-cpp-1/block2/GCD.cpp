#include <iostream>
using namespace std;

unsigned gcd(unsigned a, unsigned b)
{
    if (!a) return b;
    if (!b) return a;
    return gcd(b, a%b);
}

int main(){
    return 0;
}