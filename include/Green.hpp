/**
 * @file Green.hpp
 * @author suhas cv 
 * @brief 
 * @version 0.1
 * @date 2023-11-03
 * 
 */

#ifndef GREEN_HPP
#define GREEN_HPP

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class GreenLine {
    private:

    protected:
    map<int,string>m;
    vector<pair<int,int>> *ptr;

    GreenLine() {
        ptr = new vector<pair<int,int>>[10];
        Initialize_Graph();
    }

    void Initialize_Graph();
    string Getgreen(int val);
    ~GreenLine();

};

#endif
