/*
* @File:    lambda.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-31 16:25:01
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-01 00:03:30
*/

#include <iostream>

class IsBetweenZeroAndTen {
  public:
  bool operator()(const int value) {
    return 0 < value && value < 10;
  }
};

int main() {
    IsBetweenZeroAndTen functor;
    std::cout << functor(4) << " " << functor(-5) << std::endl;
    //auto lambda = [] (int value) -> bool { return 0 < value && value < 10;};
    auto lambda = [] (int value) { return 0 < value && value < 10;};
    std::cout << lambda(4) << " " << lambda(-5) << std::endl;
    return 0;
}
