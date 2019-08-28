//
// Created by Le Nguyen Viet Long on 8/26/19.
//

#ifndef C___CLOCK_H
#define C___CLOCK_H

#include <vector>
// #include <numeric>
// inherit from vector
template <class T>
class Clock : public std::vector<T> {
private:
    T sum;
public:
    Clock():sum(0){};
    T get_sum() const{return sum;}
    // update_sum is NOT REALLY NEEDED
    // void update_sum();
    /// Put elt in index position and update sum
    void put(int index, T elt);

};


#endif //C___CLOCK_H
