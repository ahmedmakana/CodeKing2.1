#include <iostream>

using namespace std;
// A function to check if 'c' is a vowel letter
bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    // Get inputs
    int N;
    cin >> N;
    while(N--){
        string s;
        cin >> s;
        // init answer
        int ans =0;
        for(int i=0;i < s.length() -1;i++){
            // if 'ith' letter is vowel and the next is vowel increase the answer
            if(isVowel(s[i]) && isVowel(s[i+1]))
                ans++;
        }
        // print the answer
        cout << ans << endl;
    }
    return 0;
}
