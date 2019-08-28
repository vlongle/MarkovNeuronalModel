//
// Created by Le Nguyen Viet Long on 8/26/19.
//

#include "EventClock.h"
// template <class T>
// void Clock<T>::update_sum() {
//     this->sum = std::accumulate(this->begin(), this->end(),0);
// }

template <class T>
void EventClock<T>::put(int index, T elt) {
   this->sum = (this->sum) + elt - (*this)[index];
    (*this)[index] = elt;
}