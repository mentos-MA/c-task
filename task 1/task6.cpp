#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t ;
    int n ;
    int gcd ;
    int maxGcd=0 ;
    while (t--){
        cin>> n ;
        for(int a=1 ; a<n ; a++){
            for (int b = a+1 ; b <=n; b++){
                gcd=__gcd(a,b) ;
                if(gcd>maxGcd){
                    maxGcd=gcd ;
                }

            }
        }
        cout<< maxGcd <<endl ;
    }
    return 0;
}