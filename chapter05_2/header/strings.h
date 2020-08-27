//
// Created by chenjin.qian on 2020/8/26.
//

#ifndef CHAPTER05_2_STRINGS_H
#define CHAPTER05_2_STRINGS_H

#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> split(const std::string&);

std::string::size_type width(const std::vector<std::string>&);

std::vector<std::string> frame(const std::vector<std::string>&);

std::vector<std::string> vect(const std::vector<std::string>&, const std::vector<std::string>&);

std::vector<std::string> hcat(const std::vector<std::string>&, const std::vector<std::string>&);

#endif //CHAPTER05_2_STRINGS_H
