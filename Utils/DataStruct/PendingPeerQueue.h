//
// Created by Le Nguyen Viet Long on 8/26/19.
//

#ifndef C___PENDINGQUEUE_H
#define C___PENDINGQUEUE_H

#include <vector>
#include <random>
#include <iostream>
#include <unordered_set>


template <class T>
class PendingQueue : std::vector<T>{
private:
    int population_size;
public:
    PendingQueue(int size): population_size(size){};
    int get_pop_size() const{ return population_size;}
    /// select an element from queue at random and remove that element
    int select(std::mt19937& mt, std::uniform_real_distribution<double>& u);
    /// remove True = success, False = failure
    bool remove_elt(unsigned int index);
    void infect(std::unordered_set<int> const &awake, double connectivity,
                std::mt19937& mt, std::uniform_real_distribution<double>& );

};


#endif //C___PENDINGQUEUE_H
