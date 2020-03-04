#include <iostream>

using namespace std;

int hammingDistance(int x, int y) {
    int k = x^y;
    int m=0;
    while(k!=0){
        if (k&1){
            m++;
        }
        k >>=1;
    }
    return m;
}

int main(){
    int x=5, y=10;
    int res = hammingDistance(x,y);
    cout<<res;
    return 0;
}