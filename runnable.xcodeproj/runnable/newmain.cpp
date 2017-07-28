//
//  newmain.cpp
//  runnable
//
//  Created by Andrew Taylor on 7/17/17.
//  Copyright © 2017 Andrew Taylor. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "setclass.hpp"
using namespace std;
int main()
{
    vector<string> a = {"a","z","far","b","Egypt"};
    SetClass testing(a);
    testing.remove("a");
    testing.print();
    testing.add("c");
    testing.print();
    testing.clears();
    testing.add("z");
    testing.print();
    testing.sizes();
    testing.print();
    string x = testing.getValue(0);
    cout <<"getvalue result is"<< x<<endl;
    bool z = testing.isEmpty();
    cout<<z<<endl;
    testing.print();
    cout<<"testing"<<endl;
    testing.print();
    
    
}
