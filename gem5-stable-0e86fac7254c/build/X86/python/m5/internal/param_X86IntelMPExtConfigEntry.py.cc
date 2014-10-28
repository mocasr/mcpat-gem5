#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPExtConfigEntry[] = {
    120,156,205,88,109,115,219,198,17,222,3,64,200,164,68,139,
    178,108,203,111,141,144,116,52,97,211,90,76,92,203,246,76,
    60,158,38,182,103,234,78,43,187,96,18,57,108,90,20,2,
    142,36,40,16,224,0,39,219,76,165,47,149,167,237,183,254,
    136,78,63,244,127,244,127,181,187,123,0,68,42,81,155,78,
    59,83,202,196,249,112,184,219,187,125,246,217,189,189,11,160,
    248,171,225,243,19,7,32,239,9,128,16,127,2,98,128,177,
    0,124,23,82,64,184,14,7,53,200,238,66,88,131,183,0,
    61,3,164,1,39,88,49,225,87,6,36,43,60,198,134,216,
    228,22,1,211,6,72,11,122,53,216,75,214,192,146,54,28,
    52,32,251,45,8,33,18,1,47,195,37,8,47,192,91,148,
    142,149,58,11,188,0,97,131,43,117,8,151,185,210,128,105,
    11,228,50,244,80,248,18,244,154,40,234,3,20,117,145,69,
    253,157,68,133,248,229,50,132,77,234,142,107,249,146,122,90,
    212,147,231,184,200,82,86,203,149,181,160,183,86,214,47,205,
    212,215,185,190,10,114,13,70,151,97,116,5,70,87,161,143,
    10,183,42,169,27,32,77,24,93,131,222,53,144,248,219,128,
    19,196,36,92,155,25,113,157,71,92,170,70,220,224,17,55,
    161,119,19,36,254,110,232,17,54,116,219,87,16,231,232,31,
    248,215,70,156,65,173,96,241,74,102,121,148,38,94,148,244,
    211,200,160,239,54,21,100,149,128,138,165,194,60,143,201,60,
    127,3,182,77,104,20,230,57,6,20,44,72,151,216,128,99,
    174,28,27,48,109,195,145,128,145,5,161,9,71,56,77,141,
    22,48,16,112,98,192,87,38,117,56,198,210,66,64,223,1,
    75,105,219,140,24,80,45,105,9,142,107,112,84,131,238,203,
    35,131,26,14,234,144,253,21,190,190,197,66,47,176,80,3,
    142,176,180,224,196,130,99,27,246,176,19,54,141,234,164,190,
    120,121,132,154,98,75,183,109,225,106,119,103,212,37,85,194,
    40,75,252,177,84,155,88,247,38,126,230,143,189,151,15,238,
    61,75,148,140,127,241,226,233,27,245,56,77,250,209,224,105,
    162,178,105,187,81,14,74,243,237,137,175,134,46,75,49,9,
    158,241,68,177,244,52,145,106,25,43,253,40,9,189,113,26,
    30,198,82,93,32,209,94,63,138,165,231,241,199,103,227,73,
    154,169,167,89,150,102,46,33,204,141,113,234,87,35,8,223,
    32,78,115,217,166,217,120,26,151,196,43,234,221,159,176,68,
    90,0,175,156,6,135,50,15,178,104,162,208,112,90,34,245,
    38,105,109,50,25,23,249,239,176,232,12,211,177,236,200,113,
    20,79,59,79,100,126,160,210,73,231,83,153,4,195,177,159,
    29,68,201,160,227,223,237,12,228,120,231,118,174,252,253,88,
    222,254,80,62,184,215,247,131,251,119,118,238,6,157,253,195,
    40,14,59,136,78,103,50,85,195,52,233,140,119,58,17,2,
    133,0,198,157,127,13,221,54,142,184,68,139,120,29,13,188,
    136,213,247,134,50,158,200,172,73,173,55,104,129,162,37,86,
    132,45,76,209,22,77,172,213,240,49,197,45,99,89,236,70,
    4,64,64,160,16,21,205,146,124,127,1,54,51,178,228,192,
    128,236,22,81,107,132,63,65,92,64,130,117,233,155,193,223,
    126,73,200,233,214,145,73,132,209,141,71,76,71,228,37,246,
    124,72,12,73,128,57,85,131,145,13,154,107,72,81,77,190,
    108,74,37,118,39,49,6,10,183,32,255,243,188,132,164,5,
    104,25,116,121,108,186,138,83,253,158,233,219,109,211,194,119,
    153,55,106,24,229,233,235,132,173,67,117,118,184,46,98,242,
    98,250,124,127,36,3,149,19,13,191,76,15,157,192,79,146,
    84,57,126,24,58,190,82,89,180,127,168,100,238,168,212,217,
    202,219,117,162,195,90,73,189,74,222,116,82,82,141,104,129,
    84,211,47,97,20,40,124,89,231,23,198,63,151,10,105,51,
    76,195,28,219,73,196,64,42,151,22,169,46,98,241,73,57,
    29,243,179,109,151,108,202,101,220,87,13,38,166,159,231,30,
    79,71,237,204,65,26,253,202,143,15,165,162,254,72,30,133,
    179,82,85,79,180,64,44,188,70,56,148,48,16,180,94,146,
    38,225,20,181,136,130,45,90,224,53,230,226,10,16,27,175,
    32,19,151,176,180,161,137,204,108,25,1,41,108,21,60,100,
    14,94,37,120,128,121,33,138,48,132,124,60,193,96,213,54,
    56,218,176,230,236,192,14,213,104,176,75,116,119,111,82,113,
    139,138,239,149,224,44,6,66,205,179,8,221,161,85,25,12,
    75,96,22,0,84,78,184,59,231,132,215,79,157,16,67,111,
    151,156,201,32,151,59,117,38,147,32,202,30,21,158,67,110,
    138,228,193,207,51,254,194,192,185,45,2,196,46,169,238,18,
    127,103,73,60,152,33,177,75,54,99,6,187,215,207,3,121,
    115,81,65,30,104,144,119,104,85,43,5,247,154,204,185,134,
    8,136,56,70,1,57,195,253,4,43,211,13,130,123,22,232,
    13,220,106,247,146,38,239,153,188,239,114,198,161,99,147,198,
    95,87,44,98,105,223,132,171,197,94,152,83,40,153,100,233,
    155,169,147,246,29,5,229,26,30,110,229,219,91,249,199,24,
    108,156,71,28,190,116,184,209,1,37,147,147,12,3,71,157,
    95,116,48,240,56,48,120,197,246,133,6,161,188,130,237,200,
    102,224,216,151,171,140,66,222,2,217,160,81,217,128,84,250,
    152,150,212,96,3,152,176,129,79,67,240,186,189,148,35,51,
    231,62,252,21,159,79,201,20,132,134,4,202,72,221,174,214,
    138,21,38,213,221,247,231,216,182,16,234,186,31,224,252,79,
    74,87,182,161,226,22,61,38,41,68,222,245,71,224,220,81,
    192,31,128,120,132,116,41,252,145,61,159,30,162,195,58,117,
    255,13,112,208,251,150,237,215,208,126,109,20,97,17,221,62,
    191,207,93,245,110,252,51,248,211,76,196,60,49,65,208,206,
    105,22,217,225,236,206,105,85,145,128,9,248,157,118,71,107,
    62,100,144,9,135,126,78,221,116,112,48,171,224,112,26,124,
    171,60,14,35,222,66,24,139,93,13,23,227,209,186,159,157,
    50,147,182,165,155,98,221,152,225,219,143,168,184,93,81,77,
    148,109,255,119,21,54,207,238,35,51,59,173,167,99,247,79,
    105,157,22,107,182,106,171,31,226,255,36,176,251,137,247,248,
    249,207,159,239,118,189,66,118,249,58,63,71,229,145,181,210,
    35,239,84,30,41,121,191,121,203,135,19,42,13,34,215,137,
    33,240,52,136,249,25,29,196,44,144,53,232,217,228,187,156,
    109,139,194,181,69,25,105,41,66,207,109,102,12,237,174,6,
    189,226,151,166,14,21,111,22,199,213,153,61,15,99,127,188,
    31,250,143,190,160,5,209,170,130,210,217,141,82,197,214,172,
    138,228,168,226,60,45,249,245,195,82,213,87,139,163,170,251,
    17,206,95,169,200,62,28,166,1,135,178,207,134,210,25,203,
    241,62,158,103,135,209,196,233,199,254,128,173,108,22,16,60,
    47,33,80,76,147,179,9,72,78,241,114,55,117,130,52,193,
    173,235,48,80,105,230,132,18,207,117,50,116,110,59,188,239,
    57,81,238,248,251,248,213,15,148,118,188,249,8,195,249,177,
    159,13,114,78,133,15,94,83,117,113,160,43,182,243,40,137,
    240,124,176,87,66,168,79,156,213,38,198,71,2,237,197,152,
    39,224,121,77,77,117,60,190,71,197,15,168,216,130,197,219,
    235,58,56,255,231,180,16,2,222,198,144,89,23,234,157,34,
    188,124,219,152,23,36,49,255,102,68,121,242,93,34,138,190,
    89,42,226,138,13,114,137,110,37,232,226,168,86,92,28,97,
    140,177,255,219,24,195,222,183,64,8,147,223,253,250,127,26,
    90,220,59,11,172,161,251,99,40,50,164,243,194,138,1,51,
    167,162,251,58,172,104,171,98,30,53,189,60,147,139,51,26,
    98,15,147,30,204,215,143,56,147,247,12,157,178,159,82,128,
    211,24,190,202,121,15,139,68,190,62,119,173,154,187,58,67,
    39,154,249,147,137,76,194,211,236,155,191,44,16,174,20,57,
    60,56,77,105,48,213,190,140,207,55,189,131,32,152,65,132,
    189,160,86,249,195,141,197,210,234,35,189,216,34,136,46,207,
    5,81,151,232,160,195,102,21,49,117,0,101,3,211,107,40,
    99,169,228,191,177,177,106,65,117,254,13,37,238,59,233,20,
    143,94,124,72,193,247,216,243,22,45,12,63,192,249,191,42,
    77,77,97,216,22,117,171,46,120,135,60,115,183,172,87,77,
    41,185,78,196,167,185,203,126,183,90,193,196,151,158,229,30,
    196,14,70,71,208,93,127,172,111,170,248,126,197,125,151,138,
    239,151,72,179,63,232,243,27,31,127,244,161,21,157,137,183,
    111,222,173,221,109,106,167,123,130,241,206,118,169,218,182,86,
    173,27,141,245,181,28,223,187,142,119,212,218,153,110,97,230,
    99,253,202,153,214,92,102,145,31,71,95,235,235,184,178,89,
    145,38,103,229,210,122,170,55,222,181,20,97,246,31,100,193,
    204,134,76,14,162,28,167,225,57,42,121,69,96,32,129,85,
    110,125,62,185,230,4,45,24,145,116,66,171,111,23,30,145,
    111,229,15,177,160,27,186,250,106,93,216,6,221,20,155,162,
    33,154,194,18,43,205,186,89,183,235,53,19,201,70,45,235,
    162,97,214,27,43,130,254,109,34,249,26,198,102,189,46,254,
    9,234,17,44,129,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPExtConfigEntry(
    "m5/internal/param_X86IntelMPExtConfigEntry.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_X86IntelMPExtConfigEntry.py",
    "m5.internal.param_X86IntelMPExtConfigEntry",
    data_m5_internal_param_X86IntelMPExtConfigEntry,
    2101,
    6762);

} // anonymous namespace
