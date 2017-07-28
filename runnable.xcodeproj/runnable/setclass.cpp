//
//  setclass.cpp
//  runnable
//
//  Created by Andrew Taylor on 7/17/17.
//  Copyright © 2017 Andrew Taylor. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "setclass.hpp"
using namespace std;


    SetClass::SetClass(vector<string> a)
    {
        storedvalue = a;
        sort(storedvalue.begin(), storedvalue.end());
        
    }
    string SetClass::getValue(int x)
    {
        int y = sizes();
        if (x<y)
        {
            return storedvalue[x];
        }
        else
        {
            return "-1";
        }
    }
    int SetClass::sizes() const
    {
        return storedvalue.size();
    }
    bool SetClass::isEmpty()
    {
        int x = sizes();
        if (x<1)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
    void SetClass::clears()
    {
        storedvalue.clear();
    }
    void SetClass::add (string a)
    {
        int x = sizes();
        if (isEmpty())
        {
            cout<<"hello"<<endl;
            storedvalue.push_back(a);
        }
        else if (a<storedvalue[0])
        {
            cout<<"helloa"<<endl;
            storedvalue.insert(storedvalue.begin(), a);
        }
        else if (a>= storedvalue[x-1])
        {
            cout<<"helloc"<<endl;
            storedvalue.push_back(a);
        }
        else
        {
            for (int i=0; i<x; i++)
            {
                if (a>=storedvalue[i] && a<= storedvalue[i+1])
                {
                    cout<<"helloa"<<endl;
                    storedvalue.insert(storedvalue.begin()+i+1, a);
                    return;
                }

            }
        }

    }
    int SetClass::remove(string b)
    {
        int x = sizes();
        for (int i=0; i<x; i++)
        {
            if (storedvalue[i]==b){
                storedvalue.erase(storedvalue.begin()+i);
                return i;
                
            }
        }
        return -1;
        
    }
    bool SetClass::contains(string c) const
    {
        int x = sizes();
        bool found = false;
        for (int i=0; i<x; i++)
        {
            if (storedvalue[i]==c){
                return true;
                
            }
        }
        return found;
        
    }
void SetClass::print(){
    int x = sizes();
    for (int i=0; i<x; i++)
    {
        cout<<storedvalue[i]<<endl;
    }
}

