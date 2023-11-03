#include "Green.hpp"

void GreenLine :: Initialize_Graph() {
    (ptr+0)->push_back({1, 1});
    (ptr+1)->push_back({0, 1});
    (ptr+1)->push_back({2, 1});
    (ptr+2)->push_back({1, 1});
    (ptr+2)->push_back({3, 1});
    (ptr+3)->push_back({2, 1});
    (ptr+3)->push_back({4, 1});
    (ptr+4)->push_back({3, 1});
    (ptr+4)->push_back({5, 1});
    (ptr+5)->push_back({4, 1});
    (ptr+5)->push_back({6, 1});
    (ptr+6)->push_back({5, 1});
    (ptr+6)->push_back({7, 1});
    (ptr+7)->push_back({6, 1});
    (ptr+7)->push_back({8, 1});
    (ptr+8)->push_back({7, 1});
    (ptr+8)->push_back({9, 1});
    (ptr+9)->push_back({8, 1});
}

string GreenLine :: Getgreen(int val) {
    m[0] = "Nagasandra"; m[1] = "Dasarahalli"; m[2] = "Jalahalli"; m[3] = "Peenya Industry";
    m[4] = "Peenya"; m[5] = "Goraguntepalya"; m[6] = "Yeshwanthpura"; m[7] = "Sandal Soap Factory";
    m[8] = "Mahalakshmi"; m[9] = "Rajajinagara";
    return m[val];
}

GreenLine ::~GreenLine() {
    delete[] ptr;
}
