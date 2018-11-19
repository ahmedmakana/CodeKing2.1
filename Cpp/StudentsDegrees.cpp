#include <iostream>

using namespace std;

int main() {
    // Get inputs
    int n;
    cin >> n;
    while(n--){
        int grade;
        cin >> grade;
        // less than 38 ==> falling grade
        if(grade < 38)
            cout << grade;
        else{
            int fraction = grade%10;
            int ans = grade - fraction;
            // difference less than 3
            if( fraction > 7)
                cout << ans +10;
            else if(fraction < 5 && fraction > 2)
                cout << ans + 5;
            // difference more than 2 ==> no change
            else
                cout << grade;
        }
        // print new line
        cout << endl;
    }
    return 0;
}
