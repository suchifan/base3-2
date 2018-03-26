//
//  main.cpp
//  base3-2
//
//  Created by suchao on 3/26/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>

#define DELT 0.000001

using namespace std;


double newton(double x){
    double y1, y2;
    
    y1=1;
    y2 = y1-((y1*y1*y1-x)/(3*y1*y1));
    
    bool flag = true;
    while(flag){
        double e = fabs(y1-y2);
        if(e < DELT)
            flag = false;
        else{
            y1 = y2;
            y2 = y1-((y1*y1*y1-x)/(3*y1*y1));

        }
    }
    
    return y2;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input x:\n";
    double x;
    cin >> x;
    
    cout << fixed << setprecision(2) << newton(x) << endl;
    return 0;
}
