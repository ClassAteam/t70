#include "landinggear_int.h"
#include "switches.h"

void landinggear_int::timerEventUpd()
{
    checkForMode();
    if(curMode == mode::usualRel)
    {
        release();
    }
    if(curMode == mode::usualIntake)
    {
        intake();
    }
    if(curMode == mode::emergRel)
    {
        release();
    }

    alarmUpd();
}
