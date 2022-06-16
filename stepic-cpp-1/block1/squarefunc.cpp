#include <iostream>
using namespace std;

int power(int x, unsigned p) {
    int answer;
    int save = x;
    if (p == 0) x = 1;
    else {
        for (int i=0; i<p; i++){
            x*=save;
        }
    }
    answer = x;
    return answer;
}

int main(){
    int vos = power(3,3);
    std::cout<<vos<<std::endl;
}