#include "antiicing_int.h"
#include "exchange.h"
#include "bss.h"
#include "uks.h"

extern bss bss_inst;
extern uks uks_inst;

void antiicing_int::updateLogic()
{
    antiicing_1();
    antiicing_2();
    antiicing_3();
    antiicing_4();
    antiicing_5();
    antiicing_6();

}
