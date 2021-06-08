#ifndef __INC_BOARDS_SELECT_H
#define __INC_BOARDS_SELECT_H

#include "driver/gpio.h"

/* !!!!BOARD !!! */
// #define LILYGO_WATCH_2020_V1
#define LILYGO_WATCH_2020_V2
// #define LILYGO_WATCH_2020_V3

#if defined(LILYGO_WATCH_2020_V1)
#include "boards/twatch2020_v1.h"
#elif defined(LILYGO_WATCH_2020_V2)
#include "boards/twatch2020_v2.h"
#endif

#endif /* __INC_BOARDS_SELECT_H */