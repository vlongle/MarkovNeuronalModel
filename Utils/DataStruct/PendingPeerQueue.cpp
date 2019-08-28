//
// Created by Le Nguyen Viet Long on 8/26/19.
//

#include "PendingPeerQueue.h"

template <class T>
bool PendingPeerQueue<T>::remove_elt(unsigned int index){
   if (this->empty() || index < 0 || index >= this->size()){
       std::cout<<"Queue is an empty vector"<<std::endl;

       return false;
   }
   // remove the last elt
    if(index == this->size() - 1) {
        this->pop_back();
    }
    // switch the indexed elt with the last. Delete the last
    else {
        T elt = (*this)[(*this).size() - 1];
        (*this)[index] = elt;
        (*this).pop_back();
    }
    return true;
}

template <class T>
int PendingPeerQueue<T>::select(std::mt19937& mt, std::uniform_real_distribution<double>& u){
    if( this->size() == 0)
    {
        std::cout<<"Queue size cannot be zero "<<std::endl;
        return -1;
    }
    else
    {
        int index = floor(u(mt)*this->size());
        T tmp =  (*this)[index];
        remove_elt(index);
        return tmp;
    }
}

template <class T>
void PendingPeerQueue<T>::infect(std::unordered_set<int> const &awake, double connectivity_prob,
                                 std::mt19937& mt, std::uniform_real_distribution<double>& u){

    int pop_size = get_pop_size();
    for (int i = 0; i < pop_size; ++i) {
        // count = 1 if index i is in awake set and 0 if index i is not
        if(u(mt) < connectivity_prob && awake.count(i)){
            this->push_back(i);
        }

    }
}