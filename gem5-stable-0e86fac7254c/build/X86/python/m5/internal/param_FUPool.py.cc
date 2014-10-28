#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_FUPool[] = {
    120,156,205,88,91,111,220,198,21,62,67,114,41,237,74,107,
    73,150,101,249,34,71,44,2,161,219,160,214,166,174,101,27,
    141,97,180,137,107,36,69,33,187,84,13,59,155,160,44,69,
    206,238,114,197,37,23,228,200,206,6,210,75,101,180,125,235,
    91,255,64,209,135,254,143,254,175,246,156,51,36,197,149,109,
    32,64,131,110,164,229,96,56,156,57,115,46,223,185,204,4,
    80,252,53,240,249,165,3,144,255,93,0,132,248,19,16,3,
    140,5,244,4,8,41,32,92,135,163,6,100,119,33,108,192,
    27,128,158,1,210,128,51,236,152,240,149,1,201,50,175,177,
    33,54,121,68,192,180,5,210,130,94,3,94,36,107,96,73,
    27,142,90,144,253,17,132,16,137,128,151,225,2,132,139,240,
    6,169,99,167,201,4,23,33,108,113,167,9,225,18,119,90,
    48,93,5,185,4,61,36,190,0,189,54,146,250,8,73,93,
    98,82,255,38,82,33,126,185,2,97,155,166,35,47,95,210,
    76,139,102,242,30,151,152,202,74,201,217,42,244,214,202,254,
    229,90,127,189,214,191,82,235,111,212,250,87,107,253,205,90,
    255,26,247,87,64,174,193,232,58,140,110,192,232,38,244,81,
    89,171,21,71,91,32,77,24,221,130,222,45,144,248,219,130,
    51,212,103,184,86,91,241,1,175,184,92,173,216,230,21,14,
    244,28,144,248,219,214,43,108,56,232,108,160,141,162,255,224,
    95,7,109,4,106,25,155,87,50,203,163,52,241,162,164,159,
    70,6,125,183,169,33,139,6,212,44,20,166,253,140,76,251,
    47,96,187,134,70,97,218,83,64,194,130,100,137,13,56,229,
    206,169,1,211,14,156,8,24,89,16,154,112,130,219,52,136,
    129,129,128,51,3,190,54,105,194,41,182,22,26,227,3,176,
    148,182,235,136,141,161,41,45,192,105,3,78,26,112,240,242,
    196,160,129,163,38,100,255,132,111,183,152,232,34,19,53,224,
    4,91,11,206,44,56,181,225,5,78,194,161,81,147,196,23,
    47,79,80,82,28,57,232,88,200,237,126,77,92,18,37,140,
    178,196,31,75,213,198,190,55,241,51,127,236,61,121,254,44,
    77,227,78,171,156,146,230,187,19,95,13,93,94,99,146,50,
    198,19,197,180,210,68,170,37,236,244,163,36,244,198,105,120,
    28,75,181,72,132,188,126,20,75,207,227,143,95,140,39,105,
    166,126,157,101,105,230,146,62,121,48,78,253,106,5,105,51,
    136,211,92,118,104,55,222,198,37,242,138,102,247,39,76,145,
    24,96,62,105,113,40,243,32,139,38,10,205,164,41,210,108,
    162,214,33,3,113,147,147,193,186,195,116,44,187,114,28,197,
    211,238,99,153,31,169,116,210,253,84,38,193,112,236,103,71,
    81,50,232,250,119,187,3,57,222,187,157,43,255,48,150,183,
    63,150,15,238,245,253,224,254,157,189,187,65,247,240,56,138,
    195,238,203,7,247,186,147,169,26,166,73,119,188,215,141,18,
    37,81,93,113,183,174,168,93,252,126,153,182,124,29,13,188,
    136,133,245,134,50,158,200,140,116,154,223,32,118,196,170,88,
    22,182,48,69,71,180,177,215,192,199,20,91,198,146,216,143,
    72,220,128,84,64,48,51,75,96,253,3,216,132,136,128,35,
    3,178,45,130,205,8,127,130,236,140,224,57,160,111,6,127,
    251,29,233,73,143,142,76,2,131,30,60,97,168,33,230,112,
    230,67,178,126,2,140,151,6,140,108,208,56,66,248,105,96,
    101,83,106,113,58,145,49,144,184,5,249,223,102,41,36,171,
    128,118,192,80,128,67,87,113,171,63,49,52,15,58,196,248,
    62,163,68,13,163,60,125,157,176,45,168,207,206,116,128,58,
    121,54,125,122,56,146,129,202,183,113,224,203,244,216,9,252,
    36,73,149,227,135,161,227,43,149,69,135,199,74,230,142,74,
    157,157,188,211,36,227,175,149,64,171,232,77,39,37,176,8,
    4,8,44,253,18,70,129,194,151,117,126,97,253,231,82,33,
    72,134,105,152,227,56,145,24,72,229,18,147,234,18,54,191,
    42,183,99,52,118,236,18,59,185,140,251,170,197,48,244,243,
    220,227,237,104,156,17,71,171,95,249,241,177,84,52,31,161,
    162,112,87,234,234,141,230,134,185,107,36,117,41,52,41,210,
    75,210,36,156,34,207,81,176,67,236,92,99,228,45,3,97,
    111,3,113,183,128,173,13,109,196,225,170,17,144,120,86,129,
    58,70,220,85,82,6,48,10,68,17,80,16,125,103,24,118,
    58,6,199,13,150,147,157,211,161,30,45,118,9,220,238,77,
    106,182,168,185,85,170,98,30,250,104,95,212,199,29,226,193,
    96,37,4,102,33,110,229,96,251,51,14,118,253,220,193,48,
    100,30,144,163,24,228,78,231,142,98,146,66,178,71,133,87,
    144,11,34,48,240,115,205,23,88,77,238,42,137,111,151,48,
    118,9,155,117,128,14,106,0,117,201,66,140,78,247,250,251,
    84,186,253,195,80,233,64,171,116,143,120,88,46,112,213,102,
    60,181,68,64,160,48,10,5,179,114,31,99,103,186,73,202,
    173,171,117,19,19,226,139,164,205,153,141,179,35,215,20,58,
    202,104,109,235,142,69,8,236,155,112,181,200,88,57,5,133,
    73,150,126,51,117,210,190,163,160,228,225,225,78,190,187,147,
    127,130,97,195,121,196,129,72,7,14,29,26,50,57,201,48,
    4,52,249,69,187,181,199,46,238,21,105,7,213,79,217,159,
    173,198,74,231,40,150,171,140,130,215,220,52,222,170,52,78,
    2,124,66,12,180,88,221,38,108,226,211,18,204,165,151,114,
    68,229,122,132,191,226,243,41,41,158,100,151,64,21,166,123,
    160,101,96,241,72,80,247,199,51,72,154,131,112,238,71,184,
    219,227,210,41,109,168,112,67,143,73,236,147,159,252,5,184,
    122,19,240,103,32,140,32,20,10,207,98,31,166,135,76,189,
    78,211,255,0,28,172,222,145,36,13,237,161,70,17,206,208,
    129,243,251,60,85,231,204,223,192,95,107,145,238,204,4,65,
    249,205,44,234,179,122,126,179,42,159,102,112,125,167,28,102,
    205,58,63,25,108,232,231,52,77,187,185,89,185,249,121,208,
    172,106,43,140,93,243,192,221,162,222,218,35,46,191,56,71,
    29,37,143,155,98,221,168,97,233,167,212,220,174,96,36,202,
    177,255,51,195,219,23,163,125,45,251,121,58,194,126,78,92,
    89,44,199,138,205,25,91,47,175,220,166,81,186,205,157,202,
    109,36,7,252,55,92,213,83,107,16,38,206,12,129,71,48,
    44,126,232,244,99,129,108,64,207,38,7,227,194,85,20,254,
    39,202,224,71,65,115,38,155,176,142,246,181,246,42,88,104,
    139,83,243,205,220,130,13,25,253,97,236,143,15,67,255,209,
    87,180,61,241,16,148,30,105,148,2,173,214,5,34,111,18,
    239,147,137,95,63,46,5,123,53,183,64,243,51,220,173,18,
    136,221,42,76,3,142,46,191,31,74,103,44,199,135,120,200,
    27,70,19,167,31,251,3,182,160,89,8,252,180,20,88,49,
    4,46,102,247,156,66,216,126,234,4,105,130,153,226,56,80,
    105,230,132,18,143,63,50,116,110,59,156,102,156,40,119,252,
    67,252,234,7,74,123,199,172,211,115,97,233,103,131,156,17,
    121,244,154,186,115,69,128,135,71,221,8,203,232,175,75,133,
    233,99,88,149,51,184,114,214,174,134,73,24,143,53,106,170,
    3,226,61,106,126,66,205,14,204,59,181,116,113,183,30,109,
    75,74,181,49,102,53,5,31,64,244,140,103,52,59,127,219,
    239,15,191,139,223,235,75,151,194,251,109,154,41,23,232,220,
    77,109,147,82,75,175,85,94,225,44,241,224,50,221,151,132,
    54,143,92,162,56,177,240,191,198,9,246,169,185,122,211,225,
    247,26,30,220,59,63,24,121,220,159,67,81,120,188,47,52,
    136,186,176,109,29,26,70,162,60,5,212,37,229,187,136,245,
    11,168,243,130,76,250,74,106,59,222,152,163,220,28,111,52,
    51,97,101,205,82,184,234,92,116,191,18,240,140,235,175,233,
    149,90,125,206,198,21,47,176,88,194,26,254,132,117,224,25,
    186,140,63,199,175,85,169,130,144,145,200,215,94,93,29,186,
    70,39,86,252,201,68,38,225,121,253,205,95,230,6,10,10,
    102,125,56,47,124,176,216,190,130,207,219,110,75,226,213,164,
    101,179,54,42,71,157,167,129,25,216,71,165,105,59,43,80,
    143,226,46,25,86,199,237,42,100,187,191,168,76,181,121,17,
    181,79,158,255,54,202,21,157,251,222,251,13,11,175,162,170,
    162,87,214,32,163,63,148,177,84,114,198,234,12,133,226,4,
    28,74,76,142,233,20,143,99,124,148,193,247,216,243,230,155,
    61,30,16,28,105,91,74,117,148,61,108,204,31,27,162,105,
    53,5,39,238,11,247,192,154,207,31,65,89,178,79,115,151,
    67,201,74,165,78,190,178,44,147,37,187,20,29,68,247,253,
    177,190,121,226,27,20,151,8,184,31,150,22,97,85,234,115,
    29,31,148,244,209,21,221,135,171,10,46,34,220,93,26,167,
    222,120,111,183,20,102,247,201,115,84,78,224,189,146,84,141,
    240,157,233,120,143,47,135,234,147,74,137,105,234,91,20,158,
    78,234,20,222,189,84,207,121,235,163,76,142,233,219,103,196,
    163,186,249,206,149,7,209,88,95,0,170,181,11,223,195,204,
    199,254,198,133,209,92,102,145,31,71,223,234,27,191,114,88,
    145,114,47,18,36,21,85,111,92,3,212,194,47,163,45,147,
    3,196,38,154,97,165,62,181,8,69,15,74,117,206,160,187,
    190,108,174,176,212,245,185,190,173,120,68,247,222,249,19,108,
    232,54,175,185,210,20,182,65,119,200,166,104,137,182,176,196,
    114,187,105,54,237,102,195,68,232,210,200,186,104,153,205,214,
    178,152,253,223,70,64,183,140,237,165,166,248,47,30,144,1,
    193,
};

EmbeddedPython embedded_m5_internal_param_FUPool(
    "m5/internal/param_FUPool.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_FUPool.py",
    "m5.internal.param_FUPool",
    data_m5_internal_param_FUPool,
    2177,
    6822);

} // anonymous namespace
