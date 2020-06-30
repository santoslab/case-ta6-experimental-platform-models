#include <config.h>
#include <object/structures.h>
#include <model/statedata.h>

// this file will not be overwritten and is safe to edit
#define UART 0
#define RADIO 2
#define ATTESTATION_GATE 5
#define FLT_LST 7
#define UXAS 9
#define MON_REQ 11
#define FLYZONE_DB 10
#define MON_GEO 13
#define WPM 14

const dschedule_t ksDomSchedule[] = {
  { .domain = 0, .length = 300 },
  { .domain = 2, .length = 40 },
  { .domain = 0, .length = 40 },
  { .domain = 3, .length = 40 },
  { .domain = 0, .length = 40 },
  { .domain = 5, .length = 40 },
  { .domain = 0, .length = 40 },
  { .domain = 7, .length = 40 },
  { .domain = 0, .length = 40 },
  { .domain = 9, .length = 100 },
  { .domain = 0, .length = 40 },
  { .domain = 10, .length = 40 },
  { .domain = 0, .length = 40 },
  { .domain = 11, .length = 40 },
  { .domain = 0, .length = 40 },
  { .domain = 13, .length = 40 }
};

const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);
