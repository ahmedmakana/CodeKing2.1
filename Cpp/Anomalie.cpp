#include <iostream>
#include <cmath>
using namespace std;
//  A function to check if the "ith" element
// is Anomalie 
bool isAnomalie(int i,int ar[],int n,int k){
    for(int j=0;j<n;j++){
        if(i == j)continue;
        //      If any difference was less thant or equal to k
        // then, the "ith" element is not Anomalie
        if( abs(ar[i] - ar[j]) <= k)
            return false;
    }
    return true;
}

int main() {
    // Get inputs
    int n,k;
    cin >> n >> k;
    int ar[n];
    for(int i=0;i<n;i++)
        cin >> ar[i];
    // answer is the number of Anomalie numbers in the array
    int answer = 0;
    for(int i=0;i<n;i++){
        if(isAnomalie(i,ar,n,k))
            answer++;
    }
    cout << answer;
    return 0;
}
