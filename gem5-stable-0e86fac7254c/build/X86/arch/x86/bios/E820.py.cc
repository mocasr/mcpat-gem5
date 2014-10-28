#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_E820[] = {
    120,156,189,83,77,111,211,64,16,157,117,190,91,14,37,18,
    28,56,249,132,82,164,102,163,40,9,81,133,16,141,232,161,
    72,5,228,148,10,114,177,54,246,38,118,235,181,163,221,69,
    74,184,134,255,13,51,155,38,77,17,72,156,234,196,163,153,
    183,235,153,183,111,103,34,184,123,74,248,190,243,1,204,7,
    116,98,252,51,200,0,174,200,243,32,99,160,60,152,120,192,
    226,18,72,15,102,12,226,50,252,4,88,3,124,155,148,32,
    174,108,209,234,14,45,67,92,131,113,171,142,233,210,95,248,
    180,24,122,150,204,171,141,219,64,51,78,213,167,233,141,140,
    172,125,130,209,215,225,224,124,216,237,156,231,86,175,162,125,
    98,35,34,118,137,142,4,152,48,162,135,92,144,33,149,70,
    94,101,144,21,184,169,2,146,67,90,107,68,106,14,169,19,
    49,164,68,72,195,33,7,68,106,141,31,30,66,176,225,22,
    120,104,204,211,77,245,139,241,217,233,233,142,130,121,134,168,
    208,81,194,151,195,1,159,166,133,225,18,215,218,73,146,18,
    49,243,146,150,227,88,75,99,252,98,230,219,68,250,83,57,
    79,243,60,205,231,91,64,35,80,228,150,138,116,70,166,73,
    159,165,63,228,195,85,7,219,213,226,15,184,69,146,88,226,
    24,134,185,80,50,12,237,129,11,84,17,127,207,40,44,223,
    125,231,164,140,150,203,48,202,132,49,110,23,69,137,20,177,
    212,182,130,225,103,161,133,114,251,207,144,176,115,136,185,219,
    122,41,85,161,87,99,164,229,112,226,103,171,232,124,185,200,
    237,160,231,182,104,145,207,101,72,165,90,116,242,123,99,174,
    209,240,164,80,146,75,149,102,43,254,94,154,91,91,44,248,
    72,230,81,162,132,190,69,45,184,232,241,185,84,253,19,99,
    197,52,147,39,29,57,28,204,68,244,186,219,239,69,220,232,
    136,63,212,152,244,111,47,86,238,98,142,169,6,233,80,101,
    238,231,53,89,147,237,247,202,21,101,220,245,138,183,237,149,
    227,255,233,21,234,131,26,245,1,29,59,56,250,91,31,184,
    244,255,238,3,243,130,234,96,175,164,210,248,179,66,187,219,
    163,53,223,157,116,211,96,46,59,93,66,64,170,6,53,50,
    180,96,15,209,92,99,239,23,218,93,143,59,176,173,221,103,
    124,68,173,233,240,93,170,81,223,211,250,99,171,178,157,83,
    213,111,47,136,163,113,218,99,180,27,220,128,109,135,200,37,
    121,60,206,110,50,222,108,102,225,45,141,162,33,121,15,216,
    145,247,188,241,27,80,236,18,218,
};

EmbeddedPython embedded_m5_objects_E820(
    "m5/objects/E820.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/arch/x86/bios/E820.py",
    "m5.objects.E820",
    data_m5_objects_E820,
    569,
    1238);

} // anonymous namespace
