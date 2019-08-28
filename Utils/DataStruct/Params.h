//
// Created by Le Nguyen Viet Long on 8/26/19.
//

#ifndef C___PARAMS_H
#define C___PARAMS_H

struct Params
{
    // E: excitatory. I: inhibitory
    int NE, NI; // nums of neurons in each type
    double HitE, HitI; // Peer delay
    double KickE, KickI; // external current
    double PEE, PIE, PEI, PII; // connectivity
    double SEE, SIE, SEI, SII; // peer amount delivery
    double term_time; // length of simulation
    double Ref; // avg time spent in refractory
    int Level, Reverse; // max and min voltage (+ and - value respectively)
};

#endif //C___PARAMS_H
