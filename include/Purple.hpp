/**
 * @file Purple.hpp
 * @author suhas cv
 * @brief 
 * @version 0.1
 * @date 2023-11-04
 * 
 */

#ifndef PURPLE_HPP
#define PURPLE_HPP

#include <iostream>
#include <vector>
#include <memory>
#include <map>
#define PURPLE "\033[35m"
using namespace std;

/**
 * @brief PurpleLine class for purple line map
 * 
 */
class PurpleLine {
    private:

/**
 * @brief data members to create purple line map
 * @brief shared_pointer for creation of weighted undirected graph
 * 
 */
    protected:
    map<int,string>m1;
    shared_ptr<vector<pair<int,int>>[]> ptr1;

/**
 * @brief Construct a new Purple Line object
 * 
 */
    PurpleLine() : ptr1(new vector<pair<int,int>>[37], [](vector<pair<int,int>> *p ) { delete[] p; }) {
        Initialize_Graph_purple();
    }

/**
 * @brief Initialize_Graph_purple function will create a map for purple line
 * 
 */
    void Initialize_Graph_purple();

/**
 * @brief Get purple function used to get station names of purple line
 * 
 * @param val 
 * @return string 
 */
    string Getpurple(int val);

/**
 * @brief Destroy the Purple Line object
 * 
 */
    ~PurpleLine();
};

#endif
