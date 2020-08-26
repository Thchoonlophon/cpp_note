/*
//
// Created by chenjin.qian on 2020/8/21.
//

#include "../head/median.h"

using std::vector;  using std::sort;

double get_median(const vector<double> &hw) {
    vector<double>::size_type size;
    vector<double>::size_type mid;
    size = hw.size();
    mid = size / 2;
    sort(hw.begin(), hw.end());
    double out = size % 2 == 0 ? (hw[mid] + hw[mid - 1]) / 2 : hw[mid];
    return out;
}*/
