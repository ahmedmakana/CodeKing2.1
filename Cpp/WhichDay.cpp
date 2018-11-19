#include <iostream>
using namespace std;
// Days of the week
string days[] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
// Use Gauss's algorithm to calculate first day of the year
int Gauss(int y){
    y--;
    return (1 + 5 * (y % 4) + 4 * ( y%100 ) + 6 * ( y%400 )) % 7;
}
// A function that returns the number of days in a given month
int monthDays(int m,int y){
    if( m== 2){
    	// Check if the year is leap or not!
        if(y%400 == 0)		return 29;
        else if(y%100 == 0)	return 28;
        else if(y%4==0)	 	return 29;
        else				return 28;
    }else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    else
        return 30;
}
int main(){
    // The input
    int T;
    cin >> T;
    while(T--){
        int d,m,y; 
        cin >> d >> m >> y;
        // get first day
        int ans = Gauss(y) ;
        // add monthes days
        for(int i=1;i<m;i++)
            ans += monthDays(i,y);
        // add the days 
        ans += d-1;
        // the answer
        cout << days[ans%7] << endl;
    }
    return 0;
}