#include "sim/init.hh"

namespace {

const uint8_t data_m5_util_smartdict[] = {
    120,156,213,89,109,111,27,69,16,222,59,191,36,118,82,154,
    164,105,90,232,219,82,222,76,105,226,82,146,54,173,42,132,
    74,85,84,1,1,46,165,165,81,224,116,185,93,219,151,156,
    239,220,219,117,18,163,246,11,32,33,33,129,196,7,36,126,
    13,127,128,31,5,51,115,47,182,83,167,200,42,114,92,59,
    30,141,247,46,187,243,204,60,51,183,59,118,89,242,202,193,
    231,35,206,152,242,64,17,240,103,48,159,177,251,168,153,204,
    55,88,211,96,27,6,51,68,142,73,147,213,12,38,242,236,
    39,198,126,100,236,209,70,142,137,2,147,121,26,45,102,163,
    5,38,38,152,52,104,116,50,27,45,226,104,29,230,154,96,
    162,196,214,43,101,88,205,251,7,94,21,3,52,141,226,82,
    172,78,130,112,180,142,132,231,106,250,242,192,137,60,103,203,
    151,110,106,50,222,118,27,77,254,27,20,201,208,62,48,119,
    195,68,219,97,61,180,203,36,37,207,192,108,84,10,137,217,
    104,70,129,148,137,196,228,141,73,52,12,149,82,98,238,70,
    25,45,68,101,138,137,50,41,211,76,76,145,114,140,137,105,
    82,94,97,226,24,41,199,153,120,133,148,25,38,142,147,50,
    203,196,12,41,115,76,204,146,114,130,137,57,82,230,153,56,
    65,202,73,38,230,73,89,96,226,36,41,167,152,181,94,89,
    0,60,234,87,16,247,2,45,125,223,171,203,64,243,86,20,
    238,119,184,235,59,74,241,90,24,241,245,166,19,233,59,224,
    156,37,206,83,215,240,61,207,247,121,91,73,174,27,178,204,
    225,181,11,87,194,182,226,110,24,236,202,72,243,90,59,112,
    181,23,6,138,235,144,131,123,101,179,165,81,77,175,239,58,
    126,91,210,69,152,5,167,164,89,116,167,37,149,107,36,62,
    71,170,124,140,126,159,193,56,81,212,158,64,120,13,252,91,
    167,224,173,85,76,188,84,66,17,34,136,58,204,141,255,166,
    116,20,71,55,143,95,164,95,171,96,32,73,168,77,16,213,
    70,216,148,85,217,244,252,78,245,142,84,59,58,108,85,111,
    203,192,109,0,216,29,47,168,87,157,229,106,93,54,87,22,
    149,70,227,22,175,200,213,107,53,199,189,126,117,101,217,173,
    170,200,173,182,58,186,17,6,213,230,74,181,173,61,191,170,
    208,73,200,160,37,184,48,1,11,216,182,23,104,219,94,198,
    5,77,34,209,240,176,138,4,235,179,48,168,91,8,131,46,
    89,133,20,199,136,192,76,18,24,31,140,176,237,107,47,130,
    102,130,208,220,245,67,71,31,33,156,18,193,169,161,21,182,
    189,250,226,209,185,29,134,254,17,194,153,34,56,65,24,124,
    47,163,208,182,111,246,0,50,19,48,102,10,40,136,1,61,
    33,40,79,77,246,196,68,112,59,38,139,46,118,81,174,227,
    168,73,163,171,168,244,140,230,104,116,13,149,158,209,60,141,
    10,84,146,81,93,72,181,196,93,197,52,17,49,189,73,217,
    2,175,81,158,66,146,208,0,242,75,163,243,106,93,126,228,
    82,135,210,133,16,42,77,68,117,91,143,58,151,147,154,117,
    11,23,156,39,231,78,195,187,220,247,33,119,155,189,238,62,
    1,10,248,97,59,245,56,200,29,150,249,132,216,130,147,17,
    153,8,166,53,55,98,242,20,227,212,134,68,248,228,0,111,
    254,19,136,49,142,64,164,109,223,27,22,136,57,134,64,228,
    99,219,254,116,88,32,185,49,4,18,64,68,62,31,22,72,
    126,12,129,212,33,71,190,24,22,72,97,28,129,64,68,190,
    122,30,144,217,103,129,156,26,39,24,241,222,202,17,194,182,
    239,15,137,227,244,248,225,80,237,45,219,126,48,36,142,249,
    241,195,209,108,251,182,253,205,144,56,206,140,31,14,225,237,
    218,246,198,203,140,35,222,16,234,168,45,9,203,230,0,44,
    185,62,44,70,31,156,177,202,245,248,232,17,81,178,219,67,
    2,25,171,100,79,128,80,182,59,67,2,25,171,108,79,128,
    80,186,187,67,2,25,171,52,73,128,80,142,200,151,25,200,
    116,12,36,75,248,122,23,76,229,52,75,218,91,176,19,115,
    154,240,228,215,101,250,210,12,69,27,55,203,105,209,11,93,
    219,182,112,127,96,225,205,22,222,100,77,167,216,172,147,40,
    176,83,100,157,66,129,147,90,175,162,120,13,197,25,20,103,
    81,156,67,113,30,197,5,20,28,197,235,40,46,162,120,3,
    197,155,125,206,25,141,135,44,116,198,21,92,233,50,136,98,
    174,104,148,204,228,61,149,105,102,41,247,172,166,49,246,95,
    7,66,214,188,64,138,195,187,130,232,150,129,93,65,107,157,
    136,161,254,2,241,165,239,184,178,17,250,66,70,73,111,77,
    135,60,146,173,72,42,108,186,181,211,101,168,145,134,235,168,
    37,206,31,122,190,79,125,177,186,12,100,228,248,126,135,187,
    14,118,221,156,128,203,125,87,182,176,195,198,247,26,112,21,
    14,168,220,211,220,83,216,79,19,151,249,86,91,115,137,77,
    54,71,83,155,141,166,193,38,1,245,244,240,252,45,97,18,
    160,141,110,112,184,67,131,151,185,106,187,13,238,40,238,5,
    184,128,87,227,224,110,45,155,96,95,214,29,49,210,188,160,
    227,124,255,113,150,142,233,119,29,95,201,35,233,133,16,101,
    131,30,250,163,137,214,91,40,222,70,241,78,74,235,145,51,
    16,151,217,102,137,211,144,129,212,133,202,250,170,25,163,204,
    148,81,155,135,49,106,216,62,51,118,152,13,106,53,83,27,
    28,245,50,210,18,83,92,117,64,224,250,192,33,39,74,59,
    190,186,225,104,142,60,85,16,253,8,144,171,152,75,94,183,
    67,140,44,140,59,34,42,110,218,54,66,160,100,114,55,210,
    154,90,53,113,47,151,11,217,146,129,64,118,1,83,97,220,
    139,128,160,78,93,102,149,54,159,50,106,49,171,180,59,69,
    106,73,81,239,109,155,90,80,88,120,205,184,185,148,195,254,
    254,186,192,6,4,37,87,11,68,36,117,59,10,20,119,186,
    13,234,184,139,13,28,134,53,211,102,179,220,247,148,38,122,
    227,160,112,32,148,14,37,147,32,28,248,202,102,10,248,51,
    153,31,227,218,243,148,92,139,185,69,109,64,212,232,167,3,
    124,100,212,165,166,104,119,31,8,52,188,35,59,163,223,3,
    130,45,30,100,175,109,183,113,81,44,239,44,63,109,44,20,
    93,180,8,63,133,212,243,231,226,92,222,54,18,87,107,234,
    13,98,203,51,199,140,174,167,31,49,234,215,201,8,11,15,
    185,80,73,77,133,35,172,129,195,58,89,233,226,42,140,121,
    180,7,206,245,247,156,142,202,252,171,116,24,117,185,146,70,
    2,236,94,139,219,125,239,161,41,177,253,42,181,255,64,55,
    208,90,76,221,142,151,71,153,199,85,88,224,135,172,192,228,
    168,40,246,81,24,235,76,189,199,151,224,194,59,223,206,177,
    167,177,75,105,243,240,157,201,30,207,100,101,179,139,25,227,
    19,211,148,104,213,67,32,188,115,119,148,48,223,135,5,126,
    238,214,209,12,38,26,235,34,204,119,65,217,191,120,0,230,
    108,31,204,7,6,160,124,40,216,0,164,229,56,114,209,96,
    180,133,212,15,163,68,252,1,44,240,75,90,160,153,177,16,
    99,238,203,145,171,131,66,123,158,109,154,8,251,169,217,151,
    54,53,243,208,48,23,18,218,38,184,187,45,110,188,113,199,
    186,58,226,39,211,10,44,240,219,129,80,231,18,70,83,168,
    241,134,253,165,3,176,207,29,10,251,57,97,47,37,97,31,
    132,158,82,218,90,30,49,248,235,176,192,239,221,168,159,53,
    44,36,118,86,30,139,105,232,47,48,118,240,97,132,63,129,
    164,21,178,231,135,142,236,169,64,144,45,220,112,14,44,94,
    184,239,134,135,139,211,246,71,249,91,6,217,243,71,79,180,
    255,55,164,148,211,80,175,19,76,131,48,91,171,35,142,238,
    13,88,224,207,46,216,10,62,84,14,238,6,151,80,96,85,
    167,154,71,101,128,82,130,168,17,135,239,6,59,130,13,227,
    37,88,224,49,174,132,167,201,162,89,52,75,199,74,5,56,
    152,228,241,51,157,91,171,208,57,141,78,103,70,202,177,120,
    55,130,161,12,183,182,165,27,239,67,104,166,180,103,234,195,
    161,125,212,80,232,248,121,43,62,112,126,136,60,80,72,149,
    178,49,99,46,220,92,152,88,184,244,47,105,165,158,169,
};

EmbeddedPython embedded_m5_util_smartdict(
    "m5/util/smartdict.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/python/m5/util/smartdict.py",
    "m5.util.smartdict",
    data_m5_util_smartdict,
    1855,
    8727);

} // anonymous namespace