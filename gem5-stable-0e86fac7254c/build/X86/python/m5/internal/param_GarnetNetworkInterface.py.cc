#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_GarnetNetworkInterface[] = {
    120,156,205,89,109,111,219,200,17,158,37,41,57,146,173,216,
    142,237,188,58,103,21,7,163,186,160,182,174,105,156,4,189,
    32,184,222,165,104,211,15,190,43,93,192,142,90,148,165,201,
    149,68,153,47,2,185,182,79,7,251,75,29,180,253,80,160,
    63,162,232,135,254,143,254,175,118,102,150,164,105,95,124,206,
    161,7,156,108,113,177,26,238,206,206,203,51,51,187,43,15,
    242,191,26,62,159,182,1,178,84,0,248,248,17,16,2,68,
    2,122,2,132,20,224,47,193,65,13,210,39,224,215,224,45,
    64,207,0,105,192,25,118,76,248,189,1,241,28,207,169,67,
    104,50,69,192,164,9,210,130,94,13,118,227,69,176,100,29,
    14,154,144,254,9,132,16,177,128,61,127,6,252,27,240,22,
    185,99,167,193,12,111,128,223,228,78,3,252,89,238,52,97,
    178,0,114,22,122,200,124,6,122,45,100,245,8,89,221,100,
    86,255,33,86,62,190,89,6,191,69,195,81,150,55,52,210,
    162,145,188,198,77,230,50,95,72,182,0,189,197,162,127,171,
    210,95,170,244,151,43,253,21,238,207,131,92,132,209,109,24,
    221,129,209,93,232,163,33,22,202,213,238,129,52,97,116,31,
    122,247,65,226,231,30,156,161,173,252,197,202,140,7,60,227,
    86,57,99,149,103,60,132,222,67,144,248,89,213,51,234,176,
    211,89,65,251,7,255,197,191,14,218,31,212,28,54,71,50,
    205,130,36,118,130,184,159,4,6,189,175,83,67,222,242,168,
    153,201,221,246,57,185,237,223,192,62,243,141,220,109,167,128,
    140,5,233,18,26,112,202,157,83,3,38,29,56,17,48,178,
    192,55,225,4,151,169,145,0,3,1,103,6,252,193,164,1,
    167,216,90,104,232,15,192,82,218,103,35,54,180,230,52,3,
    167,53,56,169,193,206,222,137,65,132,131,6,164,255,130,175,
    87,153,233,13,102,106,192,9,182,22,156,89,112,90,135,93,
    28,132,164,81,131,212,23,123,39,168,41,82,118,58,22,74,
    187,93,81,151,84,241,131,52,118,35,169,30,98,223,25,187,
    169,27,57,191,114,211,88,170,109,169,142,147,244,224,117,172,
    100,218,119,61,217,105,22,83,146,108,115,236,170,161,205,60,
    76,50,78,52,86,204,59,193,121,179,216,233,7,177,239,68,
    137,127,24,74,117,131,24,59,253,32,148,142,195,47,95,71,
    227,36,85,191,76,211,36,181,201,190,76,12,19,183,156,65,
    214,245,194,36,147,29,90,141,151,177,137,189,162,209,253,49,
    115,36,1,88,110,154,236,203,204,75,131,177,66,183,105,142,
    52,154,184,117,200,97,220,100,19,108,186,195,36,146,93,25,
    5,225,164,251,74,102,7,42,25,119,63,147,177,55,140,220,
    244,32,136,7,93,247,73,119,32,163,173,141,76,185,251,161,
    220,248,88,62,127,138,170,63,123,188,245,196,235,238,31,6,
    161,223,221,123,254,180,59,158,168,97,18,119,163,173,110,64,
    198,137,221,176,251,109,134,219,196,241,183,72,132,227,96,224,
    4,172,188,51,148,225,88,166,45,162,222,39,241,196,130,152,
    19,117,97,138,142,104,97,175,134,143,41,86,141,89,177,29,
    144,250,30,153,132,96,104,22,192,251,39,176,139,17,33,7,
    6,164,171,4,171,17,126,4,225,0,193,181,67,239,12,126,
    247,91,178,155,166,142,76,2,139,38,158,48,20,17,147,56,
    242,5,161,35,6,198,83,13,70,117,208,56,67,120,106,224,
    165,19,106,113,56,177,49,144,185,5,217,63,46,114,136,23,
    0,253,130,105,0,73,183,113,169,63,51,116,119,58,36,248,
    54,163,70,13,131,44,57,142,217,55,212,231,96,219,65,155,
    124,57,249,98,127,36,61,149,173,33,225,77,114,216,246,220,
    56,78,84,219,245,253,182,171,84,26,236,31,42,153,181,85,
    210,94,207,58,13,2,195,98,1,188,146,223,100,92,0,141,
    64,129,64,211,95,252,192,83,248,101,137,191,176,253,51,169,
    16,52,195,196,207,144,78,44,6,82,217,36,164,186,137,205,
    47,138,229,24,157,157,122,129,165,76,134,125,213,100,88,186,
    89,230,240,114,68,103,4,210,236,35,55,60,148,138,198,35,
    116,20,174,74,93,189,208,212,96,240,46,89,161,48,2,25,
    214,137,147,216,159,160,14,129,183,78,226,221,101,36,206,1,
    97,113,5,113,56,131,109,29,90,136,203,5,195,35,117,173,
    28,133,140,192,219,100,28,96,84,136,60,1,33,26,207,48,
    77,117,12,206,51,172,55,7,111,155,122,52,217,38,176,219,
    15,168,89,165,230,97,97,154,105,176,79,235,178,125,30,147,
    76,6,27,197,51,115,245,203,0,220,190,16,128,247,206,3,
    16,83,238,14,5,146,65,225,118,30,72,38,25,40,125,153,
    71,13,133,40,2,7,95,87,98,133,205,102,47,144,57,234,
    5,204,109,194,110,21,192,131,10,128,109,242,24,163,215,190,
    119,149,137,215,166,211,196,3,109,226,45,146,105,46,199,93,
    139,241,214,20,30,129,198,200,13,206,198,126,133,157,201,29,
    50,118,213,204,119,176,192,238,198,45,174,148,92,109,121,255,
    161,179,146,182,190,238,88,132,208,190,9,183,243,10,152,81,
    18,25,167,201,87,147,118,210,111,43,40,100,120,177,158,109,
    174,103,159,96,154,105,191,228,196,165,19,141,78,37,169,28,
    167,152,50,26,252,69,167,1,135,83,130,147,151,45,116,7,
    237,38,216,139,236,4,206,122,153,74,41,217,77,141,7,154,
    165,7,72,161,79,72,160,38,155,223,132,59,248,52,5,75,
    237,36,156,145,121,191,195,111,241,249,140,28,65,182,144,64,
    187,83,123,71,235,196,234,146,226,246,143,47,32,109,10,148,
    181,31,225,234,175,138,32,174,67,137,43,122,76,82,135,226,
    234,175,192,187,69,1,127,1,194,16,66,37,143,68,142,121,
    122,8,10,75,52,252,143,192,201,238,29,69,215,208,17,109,
    228,233,16,3,62,123,198,67,117,13,254,13,252,173,146,41,
    207,76,16,84,47,205,124,63,88,173,151,86,153,3,24,124,
    239,85,19,173,139,201,130,28,56,116,51,26,166,211,130,89,
    166,133,243,164,91,238,221,48,215,77,129,171,56,200,80,20,
    135,164,126,125,142,74,42,70,15,196,146,81,193,218,79,168,
    217,40,97,38,10,218,15,172,192,218,229,234,81,169,174,142,
    206,216,191,38,41,45,214,107,190,174,200,199,151,25,149,1,
    87,43,2,238,113,25,112,146,75,201,91,62,111,80,107,16,
    122,206,12,129,7,63,220,118,209,153,203,2,89,131,94,157,
    66,147,183,208,34,143,92,81,164,81,74,191,23,234,20,91,
    111,91,219,181,4,144,198,6,53,95,77,75,36,51,60,94,
    132,110,180,239,187,47,247,72,28,146,201,43,98,217,40,20,
    92,168,42,72,113,40,174,210,145,191,126,92,40,122,52,45,
    138,218,63,197,213,75,5,57,64,253,196,227,60,245,187,161,
    108,71,50,218,199,227,233,48,24,183,251,161,59,96,15,155,
    185,1,190,40,12,160,24,34,151,247,21,25,37,195,237,164,
    237,37,49,214,164,67,79,37,105,219,151,120,80,147,126,123,
    163,205,5,173,29,100,109,119,31,223,186,158,210,113,117,49,
    125,240,150,215,77,7,25,239,110,15,142,169,59,45,134,203,
    171,116,16,7,184,225,127,83,24,80,31,32,203,234,196,123,
    124,29,164,88,254,241,0,166,38,58,213,62,165,230,35,106,
    214,97,218,138,88,23,87,223,37,49,200,232,117,204,134,13,
    161,40,143,191,123,198,151,196,45,251,102,30,249,251,251,228,
    17,125,117,148,103,147,58,141,148,51,116,195,64,109,131,138,
    90,175,89,16,103,185,157,99,98,171,32,222,228,118,158,137,
    11,197,149,213,34,19,111,65,111,137,238,119,136,178,76,25,
    106,230,255,205,80,28,189,83,227,37,138,91,231,123,77,76,
    246,227,169,213,207,254,25,228,155,167,171,146,146,168,42,223,
    210,73,105,36,138,147,79,85,115,190,175,249,240,26,60,59,
    94,42,93,37,181,223,239,79,145,93,56,19,106,225,220,210,
    251,133,242,229,89,241,89,105,128,51,222,99,78,150,43,103,
    20,6,131,216,197,13,33,158,99,78,216,70,142,161,143,50,
    231,248,183,74,83,33,63,136,229,241,21,34,105,115,233,115,
    11,137,230,142,199,50,246,207,207,36,252,102,90,140,199,105,
    87,194,249,102,15,15,32,203,248,124,51,45,144,250,21,107,
    48,12,106,101,34,152,38,64,112,160,140,10,40,240,253,242,
    121,253,177,9,8,186,226,148,197,198,254,121,233,218,71,215,
    69,193,81,144,42,7,95,103,116,124,254,46,195,113,75,202,
    39,215,146,162,54,174,157,236,101,14,86,72,231,8,135,240,
    114,223,109,6,173,200,183,233,21,226,245,97,30,248,188,212,
    251,140,163,5,248,118,222,103,24,241,28,95,134,82,201,111,
    13,13,222,118,231,87,41,190,196,189,78,50,193,115,60,159,
    121,241,123,232,56,211,85,252,159,227,234,116,234,204,232,2,
    153,138,127,29,203,255,10,255,55,172,134,224,189,217,165,31,
    41,180,236,31,64,113,190,155,100,54,231,236,249,18,103,124,
    127,94,236,127,56,55,17,54,182,221,72,95,123,242,117,157,
    253,35,106,62,44,160,202,201,68,95,10,240,169,90,223,131,
    96,30,226,141,35,239,19,237,77,162,211,49,40,218,218,44,
    20,220,212,10,126,30,38,222,129,244,245,61,47,187,45,218,
    226,95,28,174,24,250,42,137,92,164,63,120,231,136,157,32,
    202,25,45,94,122,239,167,52,107,229,18,53,147,105,224,134,
    193,215,250,134,184,32,243,157,218,187,164,163,106,117,129,194,
    59,48,150,246,178,135,24,70,169,28,4,25,18,152,225,133,
    137,121,50,38,31,170,143,174,131,116,149,213,84,97,80,159,
    189,244,29,215,75,250,181,37,251,20,27,186,35,110,204,55,
    68,221,160,95,42,76,209,20,45,97,137,185,86,195,108,212,
    27,53,19,113,74,148,37,209,52,27,205,57,81,252,175,33,
    102,155,198,90,171,33,254,7,76,116,251,136,
};

EmbeddedPython embedded_m5_internal_param_GarnetNetworkInterface(
    "m5/internal/param_GarnetNetworkInterface.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_GarnetNetworkInterface.py",
    "m5.internal.param_GarnetNetworkInterface",
    data_m5_internal_param_GarnetNetworkInterface,
    2236,
    7426);

} // anonymous namespace
