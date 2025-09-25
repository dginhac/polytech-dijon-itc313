/*
* @File:    copy.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-30 09:27:20
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-10-30 14:26:43
*/
#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<int> data) {
    for (auto it=data.begin(); it!= data.end();++it) {
        os << *it << " ";
    }
    os << std::endl;
    return os;
}

int main(int argc, char const *argv[]) {
    std::vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    std::vector<int> primes_copy, primes_copy2, primes_copy3;

    // Only works for basic data - May need copy constructor
    primes_copy = primes;
    std::cout << primes_copy;

    // loop based copy
    for (auto it = primes.begin(); it!= primes.end(); ++it)
        primes_copy2.push_back(*it);
    std::cout << primes_copy2;

    // using copy algorithm - back_inserter is an iterator
    std::copy(primes.begin(), primes.end(), std::back_inserter(primes_copy3));
    std::cout << primes_copy3;
    return 0;
}