#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Get inputs
    int N,T;
    cin >> N >> T;
    int ar[N];
    for(int i=0;i<N;i++)
        cin >> ar[i];
    // sort chapters in ascending order (must include "algorithm" library to use this function)
    sort(ar,ar + N);
    // init answer
    int ans=0;
    // check if T is enough to read the next chapter
    while(T - ar[ans] >= 0 && ans < N){
        T -= ar[ans];
        ans++;
    }
    // print answer
    cout << ans;
    return 0;
}