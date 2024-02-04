#include "Purple.hpp"

void PurpleLine :: Initialize_Graph_purple() {
    ptr1[0].push_back({1, 1});  ptr1[1].push_back({0, 1});
    ptr1[1].push_back({2, 1});  ptr1[2].push_back({1, 1});
    ptr1[2].push_back({3, 1});  ptr1[3].push_back({2, 1});
    ptr1[3].push_back({4, 1});  ptr1[4].push_back({3, 1});
    ptr1[4].push_back({5, 1});  ptr1[5].push_back({4, 1});
    ptr1[5].push_back({6, 1});  ptr1[6].push_back({5, 1});
    ptr1[6].push_back({7, 1});  ptr1[7].push_back({6, 1});
    ptr1[7].push_back({8, 1});  ptr1[8].push_back({7, 1});
    ptr1[8].push_back({9, 1});  ptr1[9].push_back({8, 1});
    ptr1[9].push_back({10, 1}); ptr1[10].push_back({9, 1});
    ptr1[10].push_back({11, 2});ptr1[11].push_back({10, 2});
    ptr1[11].push_back({12, 1});ptr1[12].push_back({11, 1});
    ptr1[12].push_back({13, 2});ptr1[13].push_back({12, 2});
    ptr1[13].push_back({14, 1});ptr1[14].push_back({13, 1});
    ptr1[14].push_back({15, 1});ptr1[15].push_back({14, 1});
    ptr1[15].push_back({16, 1});ptr1[16].push_back({15, 1});
    ptr1[16].push_back({17, 1});ptr1[17].push_back({16, 1});
    ptr1[17].push_back({18, 1});ptr1[18].push_back({17, 1});
    ptr1[18].push_back({19, 1});ptr1[19].push_back({18, 1});
    ptr1[19].push_back({20, 1});ptr1[20].push_back({19, 1});
    ptr1[20].push_back({21, 1});ptr1[21].push_back({20, 1});
    ptr1[21].push_back({22, 1});ptr1[22].push_back({21, 1});
    ptr1[22].push_back({23, 1});ptr1[23].push_back({22, 1});
    ptr1[23].push_back({24, 1});ptr1[24].push_back({23, 1});
    ptr1[24].push_back({25, 1});ptr1[25].push_back({24, 1});
    ptr1[25].push_back({26, 1});ptr1[26].push_back({25, 1});
    ptr1[26].push_back({27, 1});ptr1[27].push_back({26, 1});
    ptr1[27].push_back({28, 1});ptr1[28].push_back({27, 1});
    ptr1[28].push_back({29, 1});ptr1[29].push_back({28, 1});
    ptr1[29].push_back({30, 1});ptr1[30].push_back({29, 1});
    ptr1[30].push_back({31, 1});ptr1[31].push_back({30, 1});
    ptr1[31].push_back({32, 1});ptr1[32].push_back({31, 1});
    ptr1[32].push_back({33, 2});ptr1[33].push_back({32, 2});
    ptr1[33].push_back({34, 1});ptr1[34].push_back({33, 1});
    ptr1[34].push_back({35, 2});ptr1[35].push_back({34, 2});
    ptr1[35].push_back({36, 6});ptr1[36].push_back({35, 6});
}

/**
 * @brief Station names in purple line
 * 
 * @param val 
 * @return string 
 */

string PurpleLine :: Getpurple(int val) {
    m1[0] = "Whitefield (Kadugodi)"; m1[1] = "Hopefarm Channasandra"; m1[2] = "Kadugodi Tree Park"; m1[3] = "Pattanduru Agrahara";
    m1[4] = "Sri Sathya Sai Hospital"; m1[5] = "Nallurhalli"; m1[6] = "Kundalahalli"; m1[7] = "Seetharamapalya";
    m1[8] = "Hoodi"; m1[9] = "Garudacharapalya"; m1[10] = "Singayyanapalya"; m1[11] = "Krishnarajapura (K.R.Pura)";
    m1[12] = "Benniganahalli"; m1[13] = "Baiyappanahalli"; m1[14] = "Swami Vivekananda Road"; m1[15] = "Indiranagara";
    m1[16] = "Halasuru"; m1[17] = "Trinity"; m1[18] = "MG Road"; m1[19] = "Cubbon Park"; m1[20] = "Dr. BR. Ambedkar Station, Vidhana Soudha";
    m1[21] = "Sir M. Visveshwaraya Station, Central College"; m1[22] = "Nadaprabhu Kempegowda station, Majestic"; m1[23] = " KSR Railway station";
    m1[24] = "Magadi Road"; m1[25] = "Sri Balagangadharanatha Swamiji Station, Hosahalli"; m1[26] = "Vijayanagara";
    m1[27] = "Attiguppe"; m1[28] = "Deepanjali Nagara"; m1[29] = "Mysuru Road"; m1[30] = "Pantharapalya - Nayandahalli";
    m1[31] = "Rajarajeshwari Nagar"; m1[32] = "Jnanabharathi"; m1[33] = "Pattanagere"; m1[34] = "Kengeri Bus Terminal";
    m1[35] = "Kengeri"; m1[36] = "Challaghatta"; 
    return m1[val];
}

PurpleLine :: ~PurpleLine() {
    
}
