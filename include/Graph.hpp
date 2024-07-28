/**
 * @file Graph.hpp
 * @author suhas c v
 * @brief 
 * @version 0.1
 * @date 2023-11-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
#include <queue>
#include <memory>
#include <limits>
#define INF 1000
#define N 50
#define RESET "\033[0m"
#define RED "\033[31m"

#include "Green.hpp"
#include "Purple.hpp"
using namespace std;

class Graph : private GreenLine, private PurpleLine {
    private:
    shared_ptr<vector<pair<int,int>>[]> p;

    public:

    /**
     * @brief Dijkstra's algorithm for shortest path
     * 
     * @param src 
     * @param dst 
     * @param s 
     */
    void Shortest_path(int src,int dst,string s);

    /**
     * @brief print the station names in the path
     * 
     * @param dst 
     * @param parent 
     * @param s 
     */
    void Print_parent(int dst,vector<int>&parent,string s);

    /**
     * @brief prints the platform
     * 
     * @param src 
     * @param dst 
     * @param s 
     */
    void Print_platform(int src,int dst,string s);

    /**
     * @brief displays the stations in the graph
     * 
     */
    void Display_stops();
    ~Graph();
};

#endif
