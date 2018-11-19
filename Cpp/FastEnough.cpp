#include <iostream>

using namespace std;
// A function to check if an number "n" is prime or not
string isPrime(unsigned long long int n){
    // The loop check from 2 till sqrt(n)
    for(unsigned long long int i = 2; i*i <= n;i++){
        if( n % i == 0)
            return "NO";
    }
    return "YES";
}
int main() {
    // Get inputs
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        // print answer
        cout << isPrime(n) << endl;
    }
    return 0;
}
