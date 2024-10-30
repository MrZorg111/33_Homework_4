#pragma once
#include <iostream>
#include <string>
#include <vector>


template<typename TypeData>
std::vector<TypeData> base_data;


template<typename TypeData>
void loading(TypeData _data) {
    std::cin >> _data;
    base_data<TypeData>.push_back(_data);
}

template<typename TypeSum>
void arifm_mean(TypeSum _sum) {
    for(int i = 0; i < base_data<TypeSum>.size(); i++) {
        _sum += base_data<TypeSum>[i];
    }
    std::cout << "The arithmetic mean is equal to " << _sum/base_data<TypeSum>.size() << std::endl;
}