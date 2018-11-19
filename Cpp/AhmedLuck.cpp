#include <iostream>

using namespace std;

int main(){
	// Get inputs
	int n;
	cin >> n;
	int ar[n];
	for(int i=0;i < n;i++)
		cin >> ar[i];
	// init luck =0
	int luck =0,maxGain =0;
	for(int i=0;i<n;i++){
		// change the maxGain if something is greater
		if(ar[i] > maxGain){
			maxGain = ar[i];
			luck++;
		}
	}
	// print the answer
	cout << luck;
	return 0;
}