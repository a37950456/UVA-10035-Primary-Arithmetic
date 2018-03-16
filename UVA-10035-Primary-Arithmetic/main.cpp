//
//  main.cpp
//  UVA-10035-Primary-Arithmetic
//
//  Created by Tina Tsai on 2018/3/15.
//  Copyright © 2018年 Tina Tsai. All rights reserved.
//

#include <iostream>
using namespace std;
int s1,s2;
int m=0;
int main(int argc, const char * argv[]) {
   
    while(cin >> s1 >> s2){
        int c = 0;
        if(s1==0 && s2==0)
            break;
        while(s1!=0 || s2!=0){
            m = m + s1%10 + s2%10;
            s1 = s1/10;
            s2 = s2/10;
            m = m/10;
            if(m == 1)
                c++;
        }
            if(c==0)
                cout << "No carry operation." << endl;
            else if(c == 1)
                cout << "1 carry operation." << endl ;
            else
                cout << c << " carry operations." << endl;
        }
    return 0;
    }


