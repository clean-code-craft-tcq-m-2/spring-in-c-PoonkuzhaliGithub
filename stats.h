
typedef struct
{
  float average;
  float min;
  float max;
} Stats;

Stats Stats_s;
Stats compute_statistics(const float* numberset, int setlength);

#if 0
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
#endif
