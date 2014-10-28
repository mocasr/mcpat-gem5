/*
 * DO NOT EDIT THIS FILE! Automatically generated
 */

#include "base/debug.hh"
#include "debug/Activity.hh"
#include "debug/Commit.hh"
#include "debug/Decode.hh"
#include "debug/DynInst.hh"
#include "debug/Fetch.hh"
#include "debug/FreeList.hh"
#include "debug/IEW.hh"
#include "debug/IQ.hh"
#include "debug/LSQ.hh"
#include "debug/LSQUnit.hh"
#include "debug/MemDepUnit.hh"
#include "debug/O3CPU.hh"
#include "debug/ROB.hh"
#include "debug/Rename.hh"
#include "debug/Scoreboard.hh"
#include "debug/StoreSet.hh"
#include "debug/Writeback.hh"

namespace Debug {

CompoundFlag O3CPUAll("O3CPUAll", "None",
    Activity,
    Commit,
    Decode,
    DynInst,
    Fetch,
    FreeList,
    IEW,
    IQ,
    LSQ,
    LSQUnit,
    MemDepUnit,
    O3CPU,
    ROB,
    Rename,
    Scoreboard,
    StoreSet,
    Writeback);

} // namespace Debug
