#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> points(n);
    
    const double pi = 3.14159265358979323846;
    double theta = 180 * (pi/180); // rotation angle converted to radians;
    
    for(int i = 0; i < n; i++){
        int px,py, qx,qy;
        cin >> px >> py >> qx >> qy;
        
        // first translate to q
        px -= qx;
        py -= qy;
        
        // then Rotate around q
        double rx, ry;
        rx = px*cos(theta) - py*sin(theta);
        ry = px*sin(theta) + py*cos(theta);
        
        // finally translate back to original place
        rx += qx;
        ry += qy;
        
        cout << rx << " " << ry << endl;
    }
        
        
    return 0;
}
