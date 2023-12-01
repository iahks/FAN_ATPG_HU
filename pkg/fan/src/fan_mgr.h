// **************************************************************************
// File       [ fan_mgr.h ]
// Author     [ littleshamoo ]
// Synopsis   [ ]
// Date       [ 2011/08/30 created ]
// **************************************************************************

#ifndef _FAN_FAN_MGR_H_
#define _FAN_FAN_MGR_H_

#include "common/tm_usage.h"

#include "interface/netlist.h"
#include "interface/techlib.h"

#include "core/atpg.h"

namespace FanNs {

class FanMgr {
public:
    FanMgr() {
        lib            = NULL;
        nl             = NULL;
        fListExtract   = NULL;
        pcoll          = NULL;
        cir            = NULL;
        sim            = NULL;
        atpg           = NULL;
        atpgStat.rTime = 0;
    }
    ~FanMgr() {}
    FanMgr(const FanMgr &other) {
        // Perform deep copy of relevant members
        lib            = other.lib;
        nl             = other.nl;  
        fListExtract   = new CoreNs::FaultListExtract;//(*other.fListExtract);
        pcoll          = new CoreNs::PatternProcessor(*other.pcoll);
        cir            = other.cir;
        sim            = new CoreNs::Simulator(*other.sim);
        atpg           = other.atpg;
        atpgStat.rTime = other.atpgStat.rTime;
    }

    IntfNs::Techlib     *lib;
    IntfNs::Netlist     *nl;
    CoreNs::FaultListExtract   *fListExtract;;
    CoreNs::PatternProcessor *pcoll;
    CoreNs::Circuit     *cir;
    CoreNs::Simulator   *sim;
    CoreNs::Atpg        *atpg;
    CommonNs::TmUsage   tmusg;
    CommonNs::TmStat    atpgStat;
};

};

#endif


