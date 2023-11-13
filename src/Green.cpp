#include "Green.hpp"

void GreenLine :: Initialize_Graph_Green() {
    (ptr+0)->push_back({1, 1}); (ptr+1)->push_back({0, 1});
    (ptr+1)->push_back({2, 1}); (ptr+2)->push_back({1, 1});
    (ptr+2)->push_back({3, 1}); (ptr+3)->push_back({2, 1});
    (ptr+3)->push_back({4, 1}); (ptr+4)->push_back({3, 1});
    (ptr+4)->push_back({5, 3}); (ptr+5)->push_back({4, 3});
    (ptr+5)->push_back({6, 1}); (ptr+6)->push_back({5, 1});
    (ptr+6)->push_back({7, 1}); (ptr+7)->push_back({6, 1});
    (ptr+7)->push_back({8, 1}); (ptr+8)->push_back({7, 1});
    (ptr+8)->push_back({9, 1}); (ptr+9)->push_back({8, 1});
    (ptr+9)->push_back({10, 1}); (ptr+10)->push_back({9, 1});
    (ptr+10)->push_back({11, 1}); (ptr+11)->push_back({10, 1});
    (ptr+11)->push_back({12, 1}); (ptr+12)->push_back({11, 1});
    (ptr+12)->push_back({13, 2}); (ptr+13)->push_back({12, 2});
    (ptr+13)->push_back({14, 1}); (ptr+14)->push_back({13, 1});
    (ptr+14)->push_back({15, 1}); (ptr+15)->push_back({14, 1});
    (ptr+15)->push_back({16, 1}); (ptr+16)->push_back({15, 1});
    (ptr+16)->push_back({17, 1}); (ptr+17)->push_back({16, 1});
    (ptr+17)->push_back({18, 1}); (ptr+18)->push_back({17, 1});
    (ptr+18)->push_back({19, 1}); (ptr+19)->push_back({18, 1});
    (ptr+19)->push_back({20, 2}); (ptr+20)->push_back({19, 2});
    (ptr+20)->push_back({21, 2}); (ptr+21)->push_back({20, 2});
    (ptr+21)->push_back({22, 1}); (ptr+22)->push_back({21, 1});
    (ptr+22)->push_back({23, 1}); (ptr+23)->push_back({22, 1});
    (ptr+23)->push_back({24, 1}); (ptr+24)->push_back({23, 1});
    (ptr+24)->push_back({25, 1}); (ptr+25)->push_back({24, 1});
    (ptr+25)->push_back({26, 1}); (ptr+26)->push_back({25, 1});
    (ptr+26)->push_back({27, 1}); (ptr+27)->push_back({26, 1});
    (ptr+27)->push_back({28, 1}); (ptr+28)->push_back({27, 1});
}

string GreenLine :: Getgreen(int val) {
    m[0] = "Nagasandra"; m[1] = "Dasarahalli"; m[2] = "Jalahalli"; m[3] = "Peenya Industry";
    m[4] = "Peenya"; m[5] = "Goraguntepalya"; m[6] = "Yeshwanthpura"; m[7] = "Sandal Soap Factory";
    m[8] = "Mahalakshmi"; m[9] = "Rajajinagara"; m[10] = "Kuvempu Road"; m[11] = "Srirampura"; m[12] = "Sampige Road"; 
    m[13] = "Nadaprabhu Kempegowda station, Majestic"; m[14] = "Chikkapette"; m[15] = "Krishna Rajendra Market";
    m[16] = "National College"; m[17] = "Lalbagh Botanical Garden"; m[18] = "South End Circle"; m[19] = "Jayanagara"; 
    m[20] = "Rashtreeya Vidyalaya Road"; m[21] = "Banashankari"; m[22] = "Jaya Prakash Nagara"; m[23] = "Yelachenahalli"; 
    m[24] = "Konanakunte Cross"; m[25] = "Doddakallasandra"; m[26] = "Vajarahalli";
    m[27] = "Talaghattapura"; m[28] = "Silk Institute";
    return m[val];
}

GreenLine ::~GreenLine() {
    delete[] ptr;
}
