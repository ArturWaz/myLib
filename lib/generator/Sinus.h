//
// Created by artur on 15/04/15.
//

#ifndef DISCRETELIB_SINUS_H
#define DISCRETELIB_SINUS_H


#include "../math/myMath.h"


namespace geox {

    // http://en.wikipedia.org/wiki/Sine_wave
    class Sinus {

        double omega_;
        double amplitude_;
        double initialPhase_;

    public:

        Sinus(): omega_(2*geox::pi()), amplitude_(1.0), initialPhase_(0.0) {}
        Sinus(double const &frequency): omega_(2*geox::pi()*frequency), amplitude_(1.0), initialPhase_(0.0) {}
        Sinus(double const &frequency, double const &amplitude): omega_(2*geox::pi()*frequency), amplitude_(amplitude), initialPhase_(0.0) {}
        Sinus(double const &frequency, double const &amplitude, double const &initialPhase): omega_(2*geox::pi()*frequency), amplitude_(amplitude), initialPhase_(initialPhase) {}
        ~Sinus() {}

        inline double operator()(double const &actualTime) const { return amplitude_*std::sin(omega_*actualTime + initialPhase_); }

    };

}


#endif //DISCRETELIB_SINUS_H
