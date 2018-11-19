#include <iostream>

using namespace std;

int main() {
    // Get inputs
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        // Create array for 26 letters to save the frequecny of each one
        int freq[26] = {0};
        // Count the frequecny of the letters in the input
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        int odd = 0;
        // Count the number of odd frequencies
        for(int i=0;i<26;i++){
            if(freq[i]%2==1)
                odd++;
        }
        // if there is more than one odd frequency, no palindrome can be created!
        cout << ((odd > 1)?"No":"Yes") << endl;
    }
    return 0;
}
