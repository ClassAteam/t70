#include "allElCons.h"
#include "powerdc_int.h"
#include "wingsmech_int.h"
#include "hydro_int.h"
#include "landinggear_int.h"
#include "antiicing_int.h"
//extern bss bss_inst;
//extern exchange exchange_inst;
extern wingsmech_int wingsmech;
extern hydro_int hydro;
extern landinggear_int landinggea;
extern antiicing_int antiicing;

/////////////////////////////////////////////////////////////alternating current
allElConsAlt::allElConsAlt()
{
    //init all consumers by currency, bus to consume from and name
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen1, "PN1B6"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::shavar3, "PN1B4"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::shavar3, "PN1B3L"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::shavar3, "PN1B1L"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::shavar3, "PN1B2L"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::gen1, "PND3BL"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen1, "PN2B6"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen2, "PN2B4"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::gen1, "PN2B3L"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen1, "PN3B3L"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen1, "PN2B1L"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::gen1, "PN2B2L"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::shavar3, "PN1RB1"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::shavar3, "PNTO1DV"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::gen4, "PN2RB1"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen1, "PN3RB1"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::shavar3, "PN1RB2"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::shavar3, "PNTO2DV"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::gen4, "PN2RB2"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen2, "PN3RB2"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen4, "PN1B5"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::shavar4, "PN3B4"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::shavar4, "PN1B3P"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::shavar4, "PN1B1P"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::shavar4, "PN1B2P"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::gen4, "PNDB5"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::gen4, "PNDB3P"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen1, "PN2B5"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen4, "PN4B4"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::gen4, "PN2B3P"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen4, "PN3B3P"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen4, "PN2B1P"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::gen4, "PN2B2P"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::shavar4, "PN1B3P"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::shavar4, "PNTO3DV"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen1, "PN3RB3"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen3, "PN1RB4"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::shavar4, "PNTO4DV"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::shavar4, "PN2RB4"));
//    consumers.append(new sngElConsAlt(15, sngElConsAlt::gen1, "PN3RB4"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen4, "PNP3B1L"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen2, "PNP1B1L"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::shavar3, "PNP1B6"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::gen1, "PNP2B1L"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen1, "PNP2B1P"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::gen3, "PNP1B5"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::gen4, "PNP1B1P"));
//    consumers.append(new sngElConsAlt(5, sngElConsAlt::shavar4, "PNP3B1P"));
//    consumers.append(new sngElConsAlt(8, sngElConsAlt::shavar4, "PDN1"));
    consumers.append(new sngElConsAlt(35.0, sngElConsAlt::shp1, "PONdv1",
                                      &antiicing.PONdv1));
    consumers.append(new sngElConsAlt(40.0, sngElConsAlt::shp1, "POB1dv1",
                                      &antiicing.POB1dv1));
    consumers.append(new sngElConsAlt(40.0, sngElConsAlt::shp1, "POB2dv1",
                                      &antiicing.POB2dv1));
    consumers.append(new sngElConsAlt(30.0, sngElConsAlt::shp1, "POB3dv1",
                                      &antiicing.POB3dv1));

    consumers.append(new sngElConsAlt(35.0, sngElConsAlt::shp1, "PONdv2",
                                      &antiicing.PONdv2));
    consumers.append(new sngElConsAlt(40.0, sngElConsAlt::shp1, "POB1dv2",
                                      &antiicing.POB1dv2));
    consumers.append(new sngElConsAlt(40.0, sngElConsAlt::shp1, "POB2dv2",
                                      &antiicing.POB2dv2));
    consumers.append(new sngElConsAlt(30.0, sngElConsAlt::shp1, "POB3dv2",
                                      &antiicing.POB3dv2));

    consumers.append(new sngElConsAlt(35.0, sngElConsAlt::shp2, "PONdv3",
                                      &antiicing.PONdv3));
    consumers.append(new sngElConsAlt(40.0, sngElConsAlt::shp2, "POB1dv3",
                                      &antiicing.POB1dv3));
    consumers.append(new sngElConsAlt(40.0, sngElConsAlt::shp2, "POB2dv3",
                                      &antiicing.POB2dv3));
    consumers.append(new sngElConsAlt(30.0, sngElConsAlt::shp2, "POB3dv3",
                                      &antiicing.POB3dv3));

    consumers.append(new sngElConsAlt(35.0, sngElConsAlt::shp2, "PONdv3",
                                      &antiicing.PONdv3));
    consumers.append(new sngElConsAlt(40.0, sngElConsAlt::shp2, "POB1dv3",
                                      &antiicing.POB1dv3));
    consumers.append(new sngElConsAlt(40.0, sngElConsAlt::shp2, "POB2dv3",
                                      &antiicing.POB2dv3));
    consumers.append(new sngElConsAlt(30.0, sngElConsAlt::shp2, "POB3dv3",
                                      &antiicing.POB3dv3));
}

QVector<double> allElConsAlt::getIvg_pool()
//take voltages on each bus corresponding to consumers
{
    QVector<double>ivg(bus_indx::lastElem + 1);
    for(int i = 0; i < consumers.count(); ++i)
    {
        if(*(consumers[i]->isActive) == true)
        {
            switch(consumers[i]->bus)
            {
            case sngElConsAlt::gen1:
                ivg[gen1] += (consumers[i]->currency);
                break;
            case sngElConsAlt::gen2:
                ivg[gen2] += consumers[i]->currency;
                break;
            case sngElConsAlt::gen3:
                ivg[gen3] += consumers[i]->currency;
                break;
            case sngElConsAlt::gen4:
                ivg[gen4] += consumers[i]->currency;
                break;
            case sngElConsAlt::shavar1:
                ivg[shavar1] += consumers[i]->currency;
                break;
            case sngElConsAlt::shavar2:
                ivg[shavar2] += consumers[i]->currency;
                break;
            case sngElConsAlt::shavar3:
                ivg[shavar3] += consumers[i]->currency;
                break;
            case sngElConsAlt::shavar4:
                ivg[shavar4] += consumers[i]->currency;
                break;
            case sngElConsAlt::shp1:
                ivg[shp1] += consumers[i]->currency;
                break;
            case sngElConsAlt::shp2:
                ivg[shp2] += consumers[i]->currency;
                break;
            }
        }
    }
    return ivg;
}

void allElConsAlt::makeCorresCurr()
//change buses in powerdc
{
    QVector<double>buses;
    buses = getIvg_pool();

    powerdc_int::ing1 = buses[gen1];
    powerdc_int::ing2 = buses[gen2];
    powerdc_int::ing3 = buses[gen3];
    powerdc_int::ing4 = buses[gen4];
    powerdc_int::inshav[0][0] = buses[shavar1];
    powerdc_int::inshav[1][0] = buses[shavar2];
    powerdc_int::inshav[2][0] = buses[shavar3];
    powerdc_int::inshav[3][0] = buses[shavar4];
    powerdc_int::inshp[0][0] = buses[shp1];
    powerdc_int::inshp[1][0] = buses[shp2];

    if(!powerdc_int::purglk4)
        powerdc_int::inshp[0][0] = powerdc_int::inshp[0][0] +
                                   powerdc_int::inshav[2][0];
    if(!powerdc_int::purgpk4)
        powerdc_int::inshp[1][0]= powerdc_int::inshp[1][0] +
                                   powerdc_int::inshav[3][0];

    if(powerdc_int::purgk1)
    {
        if(powerdc_int::purgk21)
        {
            powerdc_int::ing2 = powerdc_int::ing2 + powerdc_int::inshp[0][0];
        }
        else
        {
            powerdc_int::ing1 +=(powerdc_int::ing2 + powerdc_int::inshp[0][0]);
        }
        if(!powerdc_int::pp400[1] && powerdc_int::pss400)
            powerdc_int::ing1 = powerdc_int::ing1 + powerdc_int::ing3 +
                                powerdc_int::ing4 + powerdc_int::inshp[1][0];
    }
    else
    {
        if(powerdc_int::purgk21)
        {
            powerdc_int::ing2 = powerdc_int::ing1 + powerdc_int::ing2 +
                                powerdc_int::inshp[0][0];

            if(!powerdc_int::pp400[1] && powerdc_int::pss400)
                powerdc_int::ing2 = powerdc_int::ing2 + powerdc_int::ing3 +
                                    powerdc_int::ing4 +
                                    powerdc_int::inshp[1][0] +
                                    powerdc_int::inshav[3][0];
        }
        else
        {
            if(powerdc_int::purglk4)
            {
                if(powerdc_int::purglk5)
                    powerdc_int::ing1 = powerdc_int::inshav[2][0];
                else
                    if(powerdc_int::prgen[1])
                    powerdc_int::ing2 = powerdc_int::inshav[2][0];
            }
        }
    }
    powerdc_int::ing3 = 0;
    powerdc_int::ing4 = 0;

    if(powerdc_int::purgk41)
    {
        if(powerdc_int::purgk31)
            powerdc_int::ing3 = powerdc_int::ing3 + powerdc_int::inshp[1][0];
        else
        {
            powerdc_int::ing4 = powerdc_int::ing4 + powerdc_int::ing3 +
                                powerdc_int::inshp[1][0];
            if(!powerdc_int::pp400[0] && powerdc_int::pss400)
                powerdc_int::ing4 = powerdc_int::ing4 + powerdc_int::ing1 +
                                    powerdc_int::ing2 + powerdc_int::inshp[0][0];
        }

    }
    else
    {
        if(powerdc_int::purgk31)
        {
            powerdc_int::ing3 = powerdc_int::ing4 + powerdc_int::ing3 +
                                powerdc_int::inshp[1][0];
            if(!powerdc_int::pp400[0] && powerdc_int::pss400)
            {
                powerdc_int::ing3 = powerdc_int::ing3 + powerdc_int::ing1 +
                                    powerdc_int::ing2 + powerdc_int::inshp[0][0];
            }
        }
        else
        {
            if(powerdc_int::purgpk4)
            {
                if(powerdc_int::purgpk5)
                    powerdc_int::ing4 = powerdc_int::inshav[3][0];
                else
                {
                    if(powerdc_int::prgen[2])
                        powerdc_int::ing3 = powerdc_int::inshav[3][0];
                }
            }
        }
    }
    /////////////////////////////////////////////////////ingrap & ingvsu

    double sumA{powerdc_int::ing1 + powerdc_int::ing2 + powerdc_int::ing3 +
                powerdc_int::ing4 + powerdc_int::inshp[0][0] +
                powerdc_int::inshp[1][0]};
    double sumB{powerdc_int::ing1 + powerdc_int::ing2 + powerdc_int::inshp[0][0]};
    double sumC{powerdc_int::ing3 + powerdc_int::ing4+ powerdc_int::inshp[1][0]};

    if(powerdc_int::purglk2)
    {
        if(powerdc_int::purglk7)
        {
            if(powerdc_int::purglk8 && powerdc_int::purgpk7)
            {
                powerdc_int::ingvsu = sumA;
            }
            else
            {
                powerdc_int::ingvsu = sumB;
            }
            bss_inst.BSS837X1FF = true;
            uks_inst.UKS2X35 = true;
        }
        else
        {
            if(powerdc_int::purglk8 && powerdc_int::purgpk7)
            {
                powerdc_int::ingvsu = sumC;
                bss_inst.BSS837X1FF = true;
                uks_inst.UKS2X35 = true;
            }
            else
            {
                powerdc_int::ingvsu = 0;
                bss_inst.BSS837X1FF = false;
                uks_inst.UKS2X35 = false;
            }
        }
    }
    else
    {
        powerdc_int::ingvsu = 0;
        bss_inst.BSS837X1FF = false;
    }

    if(powerdc_int::purgpk3)
    {
        if(powerdc_int::purgpk7)
        {
            if(powerdc_int::purglk8 && powerdc_int::purglk7)
            {
                powerdc_int::ingrap = sumA;
                bss_inst.BSS926X3R = true;
                uks_inst.UKS3X324 = true;
            }
            else
            {
                powerdc_int::ingrap = sumC;
                bss_inst.BSS926X3R = true;
                uks_inst.UKS3X324 = true;
            }
        }
        else
        {
            if(powerdc_int::purglk8 && powerdc_int::purglk7)
            {
                powerdc_int::ingrap = sumB;
                bss_inst.BSS926X3R = true;
                uks_inst.UKS3X324 = true;
            }
            else
            {
                powerdc_int::ingrap = 0;
                bss_inst.BSS926X3R = false;
                uks_inst.UKS3X324 = false;
            }
        }
    }
    else
    {
        powerdc_int::ingrap = 0;
        bss_inst.BSS926X3R = false;
    }

    if(powerdc_int::pss400)
        bss_inst.BSS926X3T = true;
    else
        bss_inst.BSS926X3T = false;
}

/////////////////////////////////////////////////////////////direct current
allElConsDir::allElConsDir()
{
    //init all consumers by currency, bus to consume from and name
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shal, "por1kz",
                                      &wingsmech.por1kz));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shal, "prr1kz",
 &wingsmech.prr1kz));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shal, "psr1kz",
 &wingsmech.psr1kz));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shal, "por1kpr",
 &wingsmech.por1kpr));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shal, "prr1kpr",
 &wingsmech.prr1kpr));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shal, "psr1kpr",
 &wingsmech.psr1kpr));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shal, "por1kpchk",
 &wingsmech.por1kpchk));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shal, "prr1kpchk",
 &wingsmech.prr1kpchk));
//    consumers.append(new sngElConsDir(30.0, sngElConsDir::shal, "k4_4940", &wingsmech.k4_4940));
//    consumers.append(new sngElConsDir(30.0, sngElConsDir::shal, "s1_4940", &wingsmech.s1_4940));
    consumers.append(new sngElConsDir(3.0, sngElConsDir::shal, "prn1gs1",
 &hydro.prn1gs1));
    consumers.append(new sngElConsDir(3.0, sngElConsDir::shal, "prn2gs1",
 &hydro.prn2gs1));
    consumers.append(new sngElConsDir(3.0, sngElConsDir::shal, "prn1gs2",
 &hydro.prn1gs2));
    consumers.append(new sngElConsDir(3.0, sngElConsDir::shal, "prn2gs2",
 &hydro.prn2gs2));
//    consumers.append(new sngElConsDir(8.0, sngElConsDir::shal, "pbutzo", &pbutzo));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::sh1dpl, "poppd1",
 &antiicing.poppd1));
//    consumers.append(new sngElConsDir(8.0, sngElConsDir::sh1dpl, "gk_avn",
// &landinggea.gk_avn));
//    consumers.append(new sngElConsDir(20.0, sngElConsDir::sh1dpl, "k1_17723", &k1_17723));
//    consumers.append(new sngElConsDir(5.0, sngElConsDir::sh1dpl, "s1_11028", &s1_11028));
//    consumers.append(new sngElConsDir(5.0, sngElConsDir::sh1dpl, "s1_11313", &s1_11313));
//    consumers.append(new sngElConsDir(10.0, sngElConsDir::sh2dpl, "k1_2250", &k1_2250));
//    consumers.append(new sngElConsDir(5.0, sngElConsDir::sh2dpl, "s1_11052", &s1_11052));
//    consumers.append(new sngElConsDir(35.0, sngElConsDir::sh2dpl, "k14_2420", &k14_2420));
//    consumers.append(new sngElConsDir(35.0, sngElConsDir::sh2dpl, "k15_2420", &k15_2420));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh1l, "k2_7322", &k2_7322));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh1l, "k9_7322", &k9_7322));
//    consumers.append(new sngElConsDir(5.0, sngElConsDir::sh1l, "k1_11038", &k1_11038));
//    consumers.append(new sngElConsDir(7.0, sngElConsDir::sh1l, "s1_11081", &s1_11081));
//    consumers.append(new sngElConsDir(10.0, sngElConsDir::sh2l, "k3_2250", &k3_2250));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::sh2l, "poppd3",
 &antiicing.poppd3));
//    consumers.append(new sngElConsDir(7.0, sngElConsDir::sh2l, "k3_3650", &k3_3650));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh2l, "k4_7322", &k4_7322));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh2l, "k11_7322", &k11_7322));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh2l, "r865gd", &r865gd));
//    consumers.append(new sngElConsDir(10.0, sngElConsDir::sho1l, "k5_2250", &k5_2250));
//    consumers.append(new sngElConsDir(7.0, sngElConsDir::sho1l, "y1_3650", &y1_3650));
//    consumers.append(new sngElConsDir(7.0, sngElConsDir::sho1l, "y2_3650", &y2_3650));
//    consumers.append(new sngElConsDir(7.0, sngElConsDir::sho2l, "k1_17723", &k1_17723));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::shap, "k7_2420", &k7_2420));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::shap, "k8_2420", &k8_2420));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "por2kz",
 &wingsmech.por2kz));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "prr2kz",
 &wingsmech.prr2kz));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "psr2kz",
 &wingsmech.psr2kz));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "por2kpr",
 &wingsmech.por2kpr));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "prr2kpr",
 &wingsmech.prr2kpr));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "psr2kpr",
 &wingsmech.psr2kpr));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "por2kpchk",
 &wingsmech.por2kpchk));
    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "prr2kpchk",
 &wingsmech.prr2kpchk));
    consumers.append(new sngElConsDir(3.0, sngElConsDir::shap, "prn1gs3",
 &hydro.prn1gs3));
    consumers.append(new sngElConsDir(3.0, sngElConsDir::shap, "prn2gs3",
 &hydro.prn2gs3));
    consumers.append(new sngElConsDir(3.0, sngElConsDir::shap, "prn1gs4",
 &hydro.prn1gs4));
    consumers.append(new sngElConsDir(3.0, sngElConsDir::shap, "prn2gs4",
 &hydro.prn2gs4));
//    consumers.append(new sngElConsDir(12.0, sngElConsDir::shap, "gk_avl",
// &landinggea.gk_avl));
//    consumers.append(new sngElConsDir(12.0, sngElConsDir::shap, "gk_avp",
// &landinggea.gk_avp));
//    consumers.append(new sngElConsDir(10.0, sngElConsDir::shap, "k18_7322", &k18_7322));
//    consumers.append(new sngElConsDir(10.0, sngElConsDir::sh1dpp, "k11_2250", &k11_2250));
    consumers.append(new sngElConsDir(9.0, sngElConsDir::sh1dpp, "poppd2",
 &antiicing.poppd2));
//    consumers.append(new sngElConsDir(8.0, sngElConsDir::sh1dpp, "pbutzr", &pbutzr));
//    consumers.append(new sngElConsDir(5.0, sngElConsDir::sh2dpp, "s1_11028", &s1_11028));
//    consumers.append(new sngElConsDir(7.0, sngElConsDir::sh2dpp, "s1_11081", &s1_11081));
//    consumers.append(new sngElConsDir(5.0, sngElConsDir::sh2dpp, "s2_11052", &s2_11052));
//    consumers.append(new sngElConsDir(35.0, sngElConsDir::sh2dpp, "k30_2420", &k30_2420));
//    consumers.append(new sngElConsDir(35.0, sngElConsDir::sh2dpp, "k31_2420", &k31_2420));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh1p, "k3_7322", &k3_7322));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh1p, "k8_7322", &k8_7322));
//    consumers.append(new sngElConsDir(5.0, sngElConsDir::sh1p, "k2_11038", &k2_11038));
//    consumers.append(new sngElConsDir(10.0, sngElConsDir::sh2p, "k8_2250", &k8_2250));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh2p, "prsop", &prsop));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh2p, "k5_7322", &k5_7322));
//    consumers.append(new sngElConsDir(15.0, sngElConsDir::sh2p, "k10_7322", &k10_7322));
//    consumers.append(new sngElConsDir(20.0, sngElConsDir::sh2p, "k2_17723", &k2_17723));
//    consumers.append(new sngElConsDir(2.0, sngElConsDir::sho1p, "f32_3020", &f32_3020));
//    consumers.append(new sngElConsDir(2.0, sngElConsDir::sho1p, "f319_3020", &f319_3020));
//    consumers.append(new sngElConsDir(2.0, sngElConsDir::sho1p, "f356_3020", &f356_3020));
//    consumers.append(new sngElConsDir(2.0, sngElConsDir::sho1p, "f353_3020", &f353_3020));
//    consumers.append(new sngElConsDir(7.0, sngElConsDir::sho2p, "k1_17723", &k1_17723));
//    consumers.append(new sngElConsDir(5.5, sngElConsDir::sh1dpl, "PVB4B_505_1_per", &???));
//    consumers.append(new sngElConsDir(4.0, sngElConsDir::sh1l, "PVB4B_505_2_per", &???));
//    consumers.append(new sngElConsDir(45.0, sngElConsDir::sh1l, "PVR_992M_per", &???));
}

QVector<double> allElConsDir::getIvg_pool()
//take voltages on each bus corresponding to consumers
{
    QVector<double>ivg(consumers.count());
    for(int i = 0; i < consumers.count(); ++i)
    {
        if(*(consumers[i]->isActive) == true)
        {
            switch(consumers[i]->bus)
            {
            case sngElConsDir::shal:
                ivg[shal] += (consumers[i]->currency);
                break;
            case sngElConsDir::sh1dpl:
                ivg[sh1dpl] += consumers[i]->currency;
                break;
            case sngElConsDir::sh2dpl:
                ivg[sh2dpl] += consumers[i]->currency;
                break;
            case sngElConsDir::sh1l:
                ivg[sh1l] += consumers[i]->currency;
                break;
            case sngElConsDir::sh2l:
                ivg[sh2l] += consumers[i]->currency;
                break;
            case sngElConsDir::sho1l:
                ivg[sho1l] += consumers[i]->currency;
                break;
            case sngElConsDir::sho2l:
                ivg[sho2l] += consumers[i]->currency;
                break;
            case sngElConsDir::shap:
                ivg[shap] += consumers[i]->currency;
                break;
            case sngElConsDir::sh1dpp:
                ivg[sh1dpp] += consumers[i]->currency;
                break;
            case sngElConsDir::sh2dpp:
                ivg[sh2dpp] += consumers[i]->currency;
                break;
            case sngElConsDir::sh1p:
                ivg[sh1p] += consumers[i]->currency;
                break;
            case sngElConsDir::sh2p:
                ivg[sh2p] += consumers[i]->currency;
                break;
            case sngElConsDir::sho1p:
                ivg[sho1p] += consumers[i]->currency;
                break;
            case sngElConsDir::sho2p:
                ivg[sho2p] += consumers[i]->currency;
                break;
            }
        }
    }
    return ivg;
}

void allElConsDir::makeCorresCurr()
//change buses in powerdc
{
    QVector<double>buses;
    buses = getIvg_pool();

    powerdc_int::insh2dpl = buses[sh2dpl];
    powerdc_int::inshal27 = buses[shal];
    powerdc_int::insh1dpl = buses[sh1dpl];
    powerdc_int::insh1l = buses[sh1l];
    powerdc_int::insh2l = buses[sh2l];
    powerdc_int::insho1l = buses[sho1l];
    powerdc_int::insho2l = buses[sho2l];
    powerdc_int::inshap27 = buses[shap];
    powerdc_int::insh1dpp = buses[sh1dpp];
    powerdc_int::insh2dpp = buses[sh2dpp];
    powerdc_int::insh1p = buses[sh1p];
    powerdc_int::insh2p = buses[sh2p];
    powerdc_int::insho1p = buses[sho1p];
    powerdc_int::insho2p = buses[sho2p];

    if(exchange::ushzvsu >= 18.0)
    {
        if(powerdc_int::apdvsu_35)
        {
            powerdc_int::inshzvsu = 600 - 0.14 * powerdc_int::nvsu;
        }
        else
        {
            if(powerdc_int::apdvsu_49)
            {
                powerdc_int::inshzvsu = 250.0;
            }
            else
            {
                powerdc_int::inshzvsu = 0;
            }
        }
    }
    else
    {
        powerdc_int::inshzvsu = 0;
    }

    if(!powerdc_int::purg27lk9)
    {
        powerdc_int::inshal27 = (powerdc_int::inshal27 + powerdc_int::insh1dpl +
                                 powerdc_int::insh2dpl);
    }
    if(!powerdc_int::purg27pk9)
    {
        powerdc_int::inshap27 = (powerdc_int::inshap27 + powerdc_int::insh1dpp +
                                 powerdc_int::insh2dpp);
    }

    if(powerdc_int::purg27lk6)
    {
        powerdc_int::iak1 = powerdc_int::inshzvsu;
    }
    else
    {
        if(!exchange::s14_2430)
            powerdc_int::iak1 = 0;
        else
        {
            if(powerdc_int::pvkgvsu27)
            {
                powerdc_int::iak1 = 0.013 * (powerdc_int::ea1 - exchange::ushal) /
                                    powerdc_int::ra1;
            }
            else
            {
                if(powerdc_int::purg27lk4)
                    powerdc_int::iak1 = 0;
                else
                {
                    if(powerdc_int::plp27)
                    {
                        powerdc_int::iak1 = 0.013 *
                                            (powerdc_int::ea1 - exchange::ushal) /
                                            powerdc_int::ra1; //what is the order
                    }
                    else
                    {
                        if(powerdc_int::ppp27)
                        {
                            if(powerdc_int::pss27)
                                powerdc_int::iak1 = 0.013 * (powerdc_int::ea1 - exchange::ushal) /
                                                    powerdc_int::ra1;
                            else
                            {
                                powerdc_int::iak1 = powerdc_int::inshal27;
                            }
                        }
                        else
                        {
                            if(!powerdc_int::purg27pk3)
                                powerdc_int::iak1 = powerdc_int::inshal27;
                            else
                            {
                                if(powerdc_int::purg27pk5)
                                    powerdc_int::iak1 = (powerdc_int::inshal27 + powerdc_int::inshap27) / 2;
                                else
                                    powerdc_int::iak1 = (powerdc_int::inshal27 + powerdc_int::inshap27);
                            }
                        }
                    }
                }
            }
        }
    }

    if(!exchange::s15_2430)
        powerdc_int::iak2 = 0;
    else
    {
        if(powerdc_int::pvkgvsu27 && powerdc_int::purg27pk3)
        {
            powerdc_int::iak2 = 0.013 * (powerdc_int::ea2 - exchange::ushap) /
                                powerdc_int::ra2;
        }
        else
        {
            if(powerdc_int::purg27pk4)
                powerdc_int::iak2 = 0;
            else
            {
                if(powerdc_int::ppp27)
                    powerdc_int::iak2 = 0.013 * (powerdc_int::ea2 - exchange::ushap) /
                                        powerdc_int::ra2;
                else
                {
                    if(powerdc_int::plp27)
                    {
                        if(powerdc_int::pss27)
                            powerdc_int::iak2 = 0.013 * (powerdc_int::ea2 - exchange::ushap) /
                                                powerdc_int::ra2;
                        else
                        {
                            powerdc_int::iak2 = powerdc_int::inshap27;
                        }
                    }
                    else
                    {
                        if(!powerdc_int::purg27pk3)
                            powerdc_int::iak2 = powerdc_int::inshap27;
                        else
                        {
                            if(!powerdc_int::purg27lk5)
                                powerdc_int::iak2 = powerdc_int::inshal27 + powerdc_int::inshap27;
                            else
                                powerdc_int::iak2 = (powerdc_int::inshal27 + powerdc_int::inshap27) / 2;
                        }
                    }
                }
            }
        }
    }

//    else
//    {
//        inshal27 = inshal27 + insh1dpl + insh2dpl;
//    }

    if(powerdc_int::purg27pk9)
    {
        powerdc_int::insh1p = powerdc_int::insh1p + powerdc_int::insh1dpp + powerdc_int::insh2dpp;
    }
    if(powerdc_int::purg27lk9)
    {
        powerdc_int::insh1l = powerdc_int::insh1l + powerdc_int::insh1dpl + powerdc_int::insh2dpl;
    }

//    else
//    {
//        inshap27 = inshap27 + insh1dpp + insh2dpp;
//    }

    powerdc_int::insl27 = powerdc_int::insh1l + powerdc_int::insh2l;

    powerdc_int::insp27 = powerdc_int::insh1p + powerdc_int::insh2p;

    if(powerdc_int::plp27)
    {
        powerdc_int::insl27 = powerdc_int::insl27 + powerdc_int::inshal27;
    }

    if(powerdc_int::ppp27)
    {
        powerdc_int::insp27 = powerdc_int::insp27 + powerdc_int::inshap27;
    }

    if(powerdc_int::purg27lk1)
    {
        powerdc_int::insl27 = powerdc_int::insl27 + powerdc_int::inshal27;
    }

    if(powerdc_int::purg27pk1)
    {
        powerdc_int::insp27 = powerdc_int::insp27 + powerdc_int::inshap27;
    }

    if(powerdc_int::purg27lk7)
    {
        powerdc_int::insl27 = powerdc_int::insl27  + powerdc_int::insho1l + powerdc_int::insho2l;
    }
    if(powerdc_int::purg27pk7)
    {
        powerdc_int::insp27 = powerdc_int::insp27 + powerdc_int::insho1p + powerdc_int::insho2p;
    }

    powerdc_int::irap1 = 0;
    powerdc_int::irap2 = 0;

    if(powerdc_int::purg27lk4)
    {
        powerdc_int::irap1 = (powerdc_int::insl27 + powerdc_int::inshzvsu);

        if(!powerdc_int::purg27pk4 && powerdc_int::pss27)
        {
            powerdc_int::irap1 = powerdc_int::irap1 + powerdc_int::insp27;
        }
    }

    if(powerdc_int::purg27pk4)
    {
        powerdc_int::irap2 = powerdc_int::irap2 + powerdc_int::insp27;

        if(!powerdc_int::purg27lk4 && powerdc_int::pss27)
        {
            powerdc_int::irap2 = powerdc_int::irap2 + powerdc_int::insl27 +
                                 powerdc_int::inshzvsu;
        }
    }

    powerdc_int::urap1 = 28.5 - 0.003 * powerdc_int::irap1;

    powerdc_int::urap2 = 28.5 - 0.003 * powerdc_int::irap2;

    powerdc_int::ingvsu_27 = 0;

    if(powerdc_int::ppgvsu27)
    {
        powerdc_int::ingvsu_27 = powerdc_int::insl27;

        if(powerdc_int::pss27)
        {
            powerdc_int::ingvsu_27 = powerdc_int::ingvsu_27 + powerdc_int::insp27;
        }
    }

    powerdc_int::ing1_27 = 0;
    powerdc_int::ing2_27 = 0;
    powerdc_int::ing3_27 = 0;
    powerdc_int::ing4_27 = 0;

    if(powerdc_int::prg1)
    {
        if(powerdc_int::pss27)
        {
            powerdc_int::ing1_27 = ((powerdc_int::insl27 + powerdc_int::insp27
                                     +powerdc_int::inshzvsu)/ (powerdc_int::prg1 +
                                       powerdc_int::prg2 + powerdc_int::prg3 +
                                       powerdc_int::prg4));
        }
        else
        {
            powerdc_int::ing1_27 = ((powerdc_int::insl27 + powerdc_int::inshzvsu) /
                                                              (powerdc_int::prg1 + powerdc_int::prg2));
        }
    }

    if(powerdc_int::prg2)
    {
        if(powerdc_int::pss27)
        {
            powerdc_int::ing2_27 = ((powerdc_int::insl27 + powerdc_int::insp27
                                     +powerdc_int::inshzvsu)/ (powerdc_int::prg1 +
                                       powerdc_int::prg2 + powerdc_int::prg3 +
                                       powerdc_int::prg4));
        }
        else
        {
            powerdc_int::ing1_27 = ((powerdc_int::insl27 + powerdc_int::inshzvsu) /
                                                              (powerdc_int::prg1 + powerdc_int::prg2));
        }
    }

    if(powerdc_int::prg3)
    {
        if(powerdc_int::pss27)
        {
            powerdc_int::ing3_27 = ((powerdc_int::insl27 + powerdc_int::insp27
                                     +powerdc_int::inshzvsu)/ (powerdc_int::prg1 +
                                       powerdc_int::prg2 + powerdc_int::prg3 +
                                       powerdc_int::prg4));
        }
        else
        {
            powerdc_int::ing3_27 = powerdc_int::insp27 /
                                   (powerdc_int::prg3 + powerdc_int::prg4);
        }
    }
    if(powerdc_int::prg4)
    {
        if(powerdc_int::pss27)
        {
            powerdc_int::ing4_27 = ((powerdc_int::insl27 + powerdc_int::insp27
                                     +powerdc_int::inshzvsu)/ (powerdc_int::prg1 +
                                       powerdc_int::prg2 + powerdc_int::prg3 +
                                       powerdc_int::prg4));
        }
        else
        {
            powerdc_int::ing4_27 = powerdc_int::insp27 /
                                   (powerdc_int::prg3 + powerdc_int::prg4);
        }
    }
}
