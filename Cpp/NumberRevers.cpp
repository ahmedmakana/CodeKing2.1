#include <iostream>

using namespace std;
// A function that reverse the digits
int reverse(int n){
	int result = 0;
	while(n > 0){
		result = (10 * result) + (n % 10);
		n /= 10;
	}
	return result;
}
int main(){
	// The input
	int n;
	cin >> n;
	// Compare the input and its reverse
	if (n < reverse(n))
		cout << 1;
	else
		cout << 0;
	return 0;
}