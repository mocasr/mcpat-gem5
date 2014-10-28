#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_X86IntelMPPolarity[] = {
    120,156,205,87,205,110,219,70,16,158,37,41,218,146,173,88,
    142,243,219,184,141,138,194,168,26,52,86,17,216,73,128,4,
    65,243,83,32,41,82,55,165,14,113,212,162,44,77,174,36,
    202,20,41,144,107,187,44,228,75,29,180,189,245,33,138,30,
    250,30,125,175,116,102,150,148,229,32,1,122,179,37,113,48,
    28,46,103,103,190,253,102,118,229,67,241,169,224,245,101,19,
    32,123,131,74,128,63,1,17,192,72,64,87,128,144,2,130,
    37,216,173,64,186,1,65,5,94,3,116,13,144,6,28,161,
    98,194,247,6,196,139,252,142,13,145,201,22,1,121,13,164,
    5,221,10,188,140,151,193,146,54,236,214,32,253,9,132,16,
    177,128,237,96,14,130,121,120,141,222,81,169,178,195,121,8,
    106,172,84,33,88,96,165,6,121,3,228,2,116,209,249,28,
    116,235,232,234,6,186,58,199,174,254,37,87,1,62,105,64,
    80,167,225,24,203,43,26,105,209,72,158,227,28,123,89,2,
    105,194,176,1,221,6,43,203,208,93,102,229,60,116,207,179,
    178,2,221,21,86,46,64,247,2,229,208,105,45,35,6,225,
    27,252,180,4,106,106,17,197,190,76,179,48,137,221,48,238,
    37,161,65,207,109,18,4,157,79,98,174,192,240,49,97,248,
    15,48,128,129,81,96,120,8,32,232,30,32,50,224,144,149,
    67,3,242,22,76,4,12,45,8,76,152,224,52,21,56,18,
    208,23,112,100,192,15,38,13,56,68,105,97,214,31,129,165,
    52,128,67,206,90,123,154,131,195,10,76,42,208,217,158,24,
    100,216,173,66,250,55,252,178,202,78,231,217,169,1,19,148,
    22,28,89,112,104,195,75,28,132,166,97,149,176,18,219,19,
    204,20,45,157,150,133,209,110,205,164,75,169,4,97,26,123,
    35,169,174,160,238,202,120,111,228,110,223,189,253,44,86,50,
    250,230,197,139,36,242,210,80,229,173,90,57,58,201,214,199,
    158,26,56,252,186,73,184,140,198,138,221,38,177,84,11,168,
    244,194,56,112,71,73,176,23,73,53,79,62,221,94,24,73,
    215,229,135,207,70,227,36,85,95,165,105,146,58,4,45,27,
    163,196,155,190,65,192,250,81,146,201,22,205,198,211,56,228,
    94,209,232,222,152,61,82,0,28,50,189,28,200,204,79,195,
    177,194,21,211,30,105,52,121,107,209,90,177,200,20,138,246,
    32,25,201,182,28,133,81,222,126,34,179,93,149,140,219,143,
    100,236,15,70,94,186,27,198,253,182,183,209,238,203,209,230,
    205,76,121,59,145,188,249,133,188,123,187,231,249,119,110,109,
    110,248,237,157,189,48,10,218,136,75,123,156,171,65,18,183,
    71,155,237,16,33,66,228,162,246,123,48,91,199,161,231,105,
    246,131,176,239,134,156,183,59,144,209,88,166,117,178,126,64,
    145,137,134,88,20,182,48,69,75,212,81,171,224,101,138,85,
    99,65,108,133,148,185,79,104,16,249,204,146,110,127,1,47,
    44,242,98,215,128,116,149,200,52,196,159,160,213,71,74,117,
    232,153,193,207,190,35,200,180,117,104,18,69,180,113,194,4,
    68,38,226,200,251,196,137,24,152,69,21,24,218,160,217,133,
    164,212,116,75,115,146,56,156,220,24,232,220,130,236,207,147,
    30,226,6,224,146,96,37,162,233,18,78,245,43,19,182,211,
    162,192,183,152,48,106,16,102,201,65,204,203,66,58,151,88,
    7,49,121,145,127,187,51,148,190,202,174,163,225,85,178,215,
    244,189,56,78,84,211,11,130,166,167,84,26,238,236,41,153,
    53,85,210,92,203,90,85,226,193,114,201,185,169,191,124,92,
    114,140,248,128,28,211,55,65,232,43,188,89,225,27,198,63,
    147,10,249,50,72,130,12,237,228,162,47,149,67,65,170,115,
    40,30,150,211,49,49,91,118,73,163,76,70,61,85,99,70,
    122,89,230,242,116,100,103,242,209,219,251,94,180,39,149,205,
    28,243,20,206,74,170,158,232,44,208,143,75,186,204,159,48,
    117,227,36,14,114,12,63,244,215,40,178,43,76,194,69,32,
    26,94,68,10,206,161,180,161,142,148,108,24,62,101,106,21,
    4,100,242,93,34,92,128,9,33,138,142,131,68,60,194,190,
    212,50,184,177,112,202,92,178,77,210,232,101,135,120,238,92,
    35,177,74,226,195,18,149,83,134,166,254,54,52,183,40,28,
    131,241,240,205,34,243,105,217,109,157,40,187,171,199,101,135,
    237,181,67,229,99,80,145,29,151,143,73,216,164,15,138,90,
    161,194,68,186,224,227,153,10,97,196,156,6,33,97,151,228,
    118,136,177,179,180,237,207,208,214,161,197,98,206,58,87,223,
    135,238,245,51,135,110,95,163,187,73,225,44,22,108,171,51,
    203,106,194,39,170,24,5,214,140,243,19,84,242,203,132,243,
    44,194,151,113,31,125,25,215,121,67,228,77,149,247,124,221,
    134,52,240,90,177,136,151,61,19,46,21,27,93,70,93,99,
    156,38,63,231,205,164,215,84,80,198,112,127,45,91,95,203,
    238,97,95,105,62,224,78,165,59,139,238,29,169,28,167,216,
    35,170,124,163,235,222,229,30,224,22,91,20,174,196,69,66,
    216,40,241,231,54,151,169,148,186,219,89,0,191,54,5,159,
    114,185,71,177,212,24,121,19,46,227,85,19,28,176,155,112,
    247,229,19,13,63,197,235,17,173,1,193,32,129,14,131,78,
    71,167,195,153,82,206,206,167,39,248,117,186,121,58,55,112,
    226,39,101,213,218,48,101,19,93,38,101,66,133,244,59,158,
    26,4,17,234,55,32,230,32,65,138,210,227,34,167,139,8,
    176,66,195,127,4,110,108,239,216,91,13,93,194,70,209,250,
    176,194,179,59,60,84,111,181,95,195,31,51,93,241,200,4,
    65,219,162,89,28,246,102,183,69,107,90,244,76,185,255,181,
    245,89,39,187,3,173,221,192,203,104,152,238,3,230,180,15,
    28,55,216,233,233,12,155,219,41,179,113,94,71,225,82,192,
    207,142,185,72,123,206,53,177,98,204,48,236,115,18,55,167,
    228,18,165,237,244,98,191,254,246,38,49,179,127,186,186,49,
    63,165,0,45,78,105,201,230,181,120,235,47,131,78,230,226,
    116,65,242,204,33,139,179,68,194,40,251,14,118,41,60,24,
    170,156,143,35,122,202,169,137,90,209,22,158,56,244,169,185,
    73,239,125,76,226,19,18,159,145,7,154,76,151,51,23,133,
    110,94,177,60,224,246,197,44,113,214,201,78,208,63,244,85,
    184,47,159,134,253,1,15,211,183,207,147,3,69,1,61,78,
    240,63,79,58,42,49,80,180,227,111,189,19,30,62,7,249,
    251,94,122,86,218,1,195,120,95,183,232,7,244,199,32,219,
    64,65,7,155,234,82,85,216,6,157,172,77,81,195,67,142,
    37,22,235,85,179,106,87,43,38,30,116,200,178,34,106,102,
    181,86,21,252,53,254,3,229,150,103,13,
};

EmbeddedPython embedded_m5_internal_enum_X86IntelMPPolarity(
    "m5/internal/enum_X86IntelMPPolarity.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/enum_X86IntelMPPolarity.py",
    "m5.internal.enum_X86IntelMPPolarity",
    data_m5_internal_enum_X86IntelMPPolarity,
    1515,
    3881);

} // anonymous namespace
