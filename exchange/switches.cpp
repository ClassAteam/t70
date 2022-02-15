#include "switches.h"
#include "Struct_DeviceConnect.h"

extern  SH_DEVICE_CONNECT DEVICE_CONNECT;

s1_3230::s1_3230() : On{&DEVICE_CONNECT.IN_MAT[157]}
{

}
s1_3230& s1_3230::instance()
{
    static s1_3230 singleton;
    if(*(singleton.On))
        singleton.pos = on;
    else
        singleton.pos = off;
    return singleton;
}

s2_3230::s2_3230() : Release{&DEVICE_CONNECT.IN_MAT[156]}
{

}
s2_3230& s2_3230::instance()
{
    static s2_3230 singleton;
    if(*(singleton.Release))
        singleton.pos = intake;
    else
        singleton.pos = release;
    return singleton;
}

s3_3230::s3_3230() : On{&DEVICE_CONNECT.IN_MAT[762]}
{

}
s3_3230& s3_3230::instance()
{
    static s3_3230 singleton;
    if(*(singleton.On))
        singleton.pos = on;
    else
        singleton.pos = off;
    return singleton;
}
s30_3230::s30_3230() : Release{&DEVICE_CONNECT.IN_MAT[469]}
{

}
s30_3230& s30_3230::instance()
{
    static s30_3230 singleton;
    if(*(singleton.Release))
        singleton.pos = release;
    else
        singleton.pos = off;
    return singleton;
}

s31_3230::s31_3230() : Otkl{&DEVICE_CONNECT.IN_MAT[763]},
    Peredn{&DEVICE_CONNECT.IN_MAT[764]},
    Lev{&DEVICE_CONNECT.IN_MAT[765]},
    Prav{&DEVICE_CONNECT.IN_MAT[766]}
{

}

s31_3230 &s31_3230::instance()
{
    static s31_3230 singleton;
    if(*(singleton.Otkl))
        singleton.pos = otkl;
    else if(*(singleton.Peredn))
        singleton.pos = peredn;
    else if(*singleton.Lev)
        singleton.pos = lev;
    else if(*singleton.Prav)
        singleton.pos = prav;
    return singleton;
}

s4_3250::s4_3250() : On{&DEVICE_CONNECT.IN_MAT[7]}
{

}
s4_3250& s4_3250::instance()
{
    static s4_3250 singleton;
    if(*(singleton.On))
        singleton.pos = on;
    else
        singleton.pos = off;
    return singleton;
}
