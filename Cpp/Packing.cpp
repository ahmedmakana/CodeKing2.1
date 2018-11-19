#include <iostream>

using namespace std;

int main() {
    // Get inputs
    int A,B,N;
    cin >> A >> B >> N;
    int ar[N];
    for(int i=0;i<N;i++)
        cin >> ar[i];
    // Init ans
    int ans = 0;
    for(int i=0;i<N;i++){
        // Check if the element can be packed
        if(ar[i] <= A || ar[i] <= B){
            if(A>B)
                A -= ar[i];
            else
                B -= ar[i];
        }else{
            ans++;
        }
    }
    // Print answer
    cout << ans;
    return 0;
}
