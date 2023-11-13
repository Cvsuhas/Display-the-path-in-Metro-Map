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
#define GREEN "\033[032m"
using namespace std;

/**
 * @brief GreenLine class for Green line map
 * 
 */
class GreenLine {
    private:

/**
 * @brief data members to create green line map
 * 
 */
    protected:
    map<int,string>m;
    vector<pair<int,int>> *ptr;

    GreenLine() {
        ptr = new vector<pair<int,int>>[29];
        Initialize_Graph_Green();
    }

/**
 * @brief Initialize_Graph() initialize the green line map through vector of pairs
 * 
 */
    void Initialize_Graph_Green();

/**
 * @brief Getgreen function is used to get the station names in green line
 * 
 * @param val 
 * @return string 
 */
    string Getgreen(int val);

/**
 * @brief Destroy the Green Line object
 * 
 */
    ~GreenLine();

};

#endif
