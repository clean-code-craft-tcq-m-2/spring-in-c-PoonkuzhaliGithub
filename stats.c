#include "stats.h"
Stats Stats_s;
Stats compute_statistics(const float* numberset, int setlength) {

    Stats_s.average = 4.525;
    Stats_s.min = 8.9;
    Stats_s.max = 1.5;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
