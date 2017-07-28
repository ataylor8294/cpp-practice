//
//  setclass.hpp
//  runnable
//
//  Created by Andrew Taylor on 7/17/17.
//  Copyright © 2017 Andrew Taylor. All rights reserved.
//

#ifndef setclass_hpp
#define setclass_hpp

#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class SetClass
{
public:
    SetClass(vector<string> a={});
    string getValue(int x);
    int sizes() const;
    bool isEmpty();
    void clears();
    void add (string a);
    int remove(string b);
    bool contains(string c) const;
    void print();
private:
    string * element;
    SetClass * front;
};

#endif /* setclass_hpp */
