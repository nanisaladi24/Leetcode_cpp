#include <iostream>
#include <vector>

using namespace std;

vector<int> countBits(int num) {
    vector<int> res;
    int i=0;
    int k=0;
    int m=1;
    for (i=0;i<=num;i++){
        if(i==m){
            res.push_back(1);
            m*=2;
        }
        else{
            res.push_back(0);
        }
    }
    int ct=0;
    int max = res.size();
    for (i = 0; i<max; i++){
        if (i==0){
            continue;
        }
        if (res[i]==1){
            ct=i;                
        }
        else{
            res[i]=res[ct]+res[i-ct];
        }
    }
    return res;
}

int main(){
    //int m = 5;
    int m = 537;
    vector<int> res = countBits(m);

    cout <<"[";    
    for ( auto i = res.begin(); i != res.end(); ++i) 
        cout << *i << " "; 
    cout <<"]";
    return 0;
}
