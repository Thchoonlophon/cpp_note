//
// Created by chenjin.qian on 2020/8/20.
//
#include "median.h"

double get_median(vector<double> vec) {
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    sort(vec.begin(), vec.end());
    vec_sz mid = size / 2;
    double out = size % 2 == 0 ? (vec[mid] + vec[mid + 1]) / 2 : vec[mid];
    return out;
}
