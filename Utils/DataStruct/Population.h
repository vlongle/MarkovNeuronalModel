//
// Created by Le Nguyen Viet Long on 8/27/19.
//

#ifndef C___POPULATION_H
#define C___POPULATION_H

#include <vector>
#include <unordered_set>
#include "../Utils/DataStruct/PendingPeerQueue.h"
#define LARGENUMBER 100000
class Population {
private:
    int pop_size;
    std::vector<double> neuron_voltages;
    PendingPeerQueue<int> pendingExcitatoryKicks;
    PendingPeerQueue<int> pendingInhibitoryKicks;

    // set of all neuron that is in refractory in this population
    std::unordered_set<int> refractoryNeurons;
public:
    Population(int size): pop_size(size){
        neuron_voltages = std::vector<double>(size, 0);
        // reverse makes push_back faster since we don't have
        // to expand the vector every time we run out of memory
        pendingExcitatoryKicks.reserve(LARGENUMBER);
        pendingInhibitoryKicks.reserve(LARGENUMBER);
    };
};


#endif //C___POPULATION_H
