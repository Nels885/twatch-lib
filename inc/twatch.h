#ifndef __INC_TWATCH_H
#define __INC_TWATCH_H

#include "boards/select.h"

#if defined(LILYGO_WATCH_2020_V1)

/*******************************************************************************
 * T-Watch 2020 version 1 ESP32 Library
 ******************************************************************************/

/* Include power management HAL. */
#include "hal/pmu.h"

/* Include sound HAL. */
#include "hal/audio.h"

/* Include touch HAL. */
#include "hal/touch.h"

/* Include screen HAL. */
#include "hal/screen.h"

/* Include vibrator HAL. */
#include "hal/vibrate.h"

/* Include RTC HAL. */
#include "hal/rtc.h"

/* Include UI. */
#include "ui/ui.h"
#include "ui/button.h"
#include "ui/container.h"
#include "ui/events.h"
#include "ui/image.h"
#include "ui/label.h"
#include "ui/listbox.h"
#include "ui/progress.h"
#include "ui/scrollbar.h"
#include "ui/style.h"

#elif defined(LILYGO_WATCH_2020_V2)

/*******************************************************************************
 * T-Watch 2020 version 2 ESP32 Library
 ******************************************************************************/

/* Include power management HAL. */
#include "hal/pmu.h"

/* Include touch HAL. */
#include "hal/touch.h"

/* Include screen HAL. */
#include "hal/screen.h"

/* Include vibrator HAL. */
// #include "hal/vibrate.h"

/* Include RTC HAL. */
#include "hal/rtc.h"

/* Include UI. */
#include "ui/ui.h"
#include "ui/button.h"
#include "ui/container.h"
#include "ui/events.h"
#include "ui/image.h"
#include "ui/label.h"
#include "ui/listbox.h"
#include "ui/progress.h"
#include "ui/scrollbar.h"
#include "ui/style.h"

#endif

#endif /* __INC_TWATCH_H */
