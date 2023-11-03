#include "Purple.hpp"

void PurpleLine :: Initialize_Graph_purple() {
    (ptr1+0)->push_back({1, 1});
    (ptr1+1)->push_back({0, 1});
    (ptr1+1)->push_back({2, 1});
    (ptr1+2)->push_back({1, 1});
    (ptr1+2)->push_back({3, 1});
    (ptr1+3)->push_back({2, 1});
    (ptr1+3)->push_back({4, 1});
    (ptr1+4)->push_back({3, 1});
    (ptr1+4)->push_back({5, 1});
    (ptr1+5)->push_back({4, 1});
    (ptr1+5)->push_back({6, 1});
    (ptr1+6)->push_back({5, 1});
    (ptr1+6)->push_back({7, 1});
    (ptr1+7)->push_back({6, 1});
    (ptr1+7)->push_back({8, 1});
    (ptr1+8)->push_back({7, 1});
    (ptr1+8)->push_back({9, 1});
    (ptr1+9)->push_back({8, 1});
}

string PurpleLine :: Getpurple(int val) {
    m1[0] = "Kengeri"; m1[1] = "Kengeri Bus Terminal"; m1[2] = "Pattanagere"; m1[3] = "Jnanabharathi";
    m1[4] = "Peenya"; m1[5] = "Pantharapalya - Nayandahalli"; m1[6] = "Mysuru Road"; m1[7] = "Deepanjali Nagara";
    m1[8] = "Attiguppe"; m1[9] = "Vijayanagara"; 
    return m1[val];
}

PurpleLine :: ~PurpleLine() {
    delete[] ptr1;
}
