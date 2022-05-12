#ifndef TIMERSWBASETYPES_H
#define TIMERSWBASETYPES_H

/**
 * @defgroup TimerSwBaseTypes TimerSwBaseTypes
 *
 * @brief  Software timer software base types
 * @author MIC
 *
 * @{
 */

/*******************************************************************************
 * includes
 ******************************************************************************/
#include <stdbool.h>
#include "TimerSw.h"

/*******************************************************************************
 * typedefs
 ******************************************************************************/

/**
 * @brief Non-abstracted software timer handle.
 */
typedef struct {

    /**
     * @brief Indicated a proper initialization of the timer.
     */
    bool initialized;

    /**
     * @brief Indicates whether the timer is active or inactive.
     */
    bool active;

    /**
     * @brief The tick when the timer was started.
     */
    TimerSwValue start;

    /**
     * @brief The tick when the timer will expire.
     */
    TimerSwValue end;

    /**
     * @brief The timer interval.
     */
    TimerSwValue interval;

}TimerSwHandleNonAbstr;

/**
 * @}
 */

#endif /* TIMERSWBASETYPES_H */
