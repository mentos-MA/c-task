#include <bits/stdc++.h>
using namespace std;
int main() {
    int s, t, a, b, m , n;
    cin >> s >> t >> a >> b >> m >> n;
    int arr1[m],arr2[n]   ;        //distance each apple or orange move
    int apples = 0;
    int oranges = 0;
    for(int i=0 ;i<m; i++){
        cin>>arr1[i];
        if ((a + arr1[i]) >= s && (a + arr1[i])<=t) {
            apples += 1;
        }
    }
    for(int i=0 ;i<n; i++) {
        cin >> arr2[i];
        if ((b + arr2[i]) <= t && (b + arr2[i])>=s) {
            oranges += 1;
        }

    }
    cout<<apples<<endl<<oranges<<endl;
    return 0;
}