#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ClockedObject[] = {
    120,156,205,88,91,111,219,200,21,62,67,82,180,165,88,177,
    29,59,113,18,187,53,219,194,168,118,209,88,219,52,78,2,
    108,96,180,187,41,176,219,7,239,150,46,106,199,123,97,105,
    114,36,81,230,69,32,199,201,106,97,191,212,65,219,183,254,
    136,162,15,253,31,253,95,237,57,103,72,90,242,58,64,128,
    22,144,109,113,48,28,206,156,57,151,239,92,102,2,40,255,
    26,248,252,218,1,40,122,2,32,196,159,128,24,32,17,112,
    36,64,72,1,225,10,156,52,32,127,2,97,3,222,2,28,
    25,32,13,184,192,142,9,95,25,144,46,240,26,27,98,147,
    71,4,140,91,32,45,56,106,192,65,186,12,150,180,225,164,
    5,249,159,64,8,145,10,56,12,231,32,156,135,183,72,29,
    59,77,38,56,15,97,139,59,77,8,111,113,167,5,227,37,
    144,183,224,8,137,207,193,81,27,73,125,136,164,110,51,169,
    127,19,169,16,191,172,66,216,166,233,200,203,43,154,105,209,
    76,222,227,54,83,89,172,56,91,130,163,229,170,127,103,162,
    191,50,209,95,229,254,34,200,101,24,222,133,225,61,24,174,
    1,42,36,92,170,119,184,15,210,132,225,3,56,122,0,18,
    127,247,225,2,245,19,46,79,172,120,200,43,238,212,43,214,
    121,197,6,28,109,128,196,223,186,94,97,195,126,231,46,234,
    60,250,15,254,117,80,231,160,22,176,121,45,243,34,202,82,
    47,74,123,89,100,208,119,155,26,178,80,64,205,92,105,170,
    79,201,84,255,2,182,83,104,148,166,58,7,36,44,72,150,
    216,128,115,238,156,27,48,238,192,153,128,161,5,161,9,103,
    184,77,131,24,232,11,184,48,224,107,147,38,156,99,107,161,
    114,127,12,150,210,118,26,178,114,53,165,57,56,111,192,89,
    3,246,15,207,12,26,56,105,66,254,79,248,126,131,137,206,
    51,81,3,206,176,181,224,194,130,115,27,14,112,18,14,13,
    155,36,190,56,60,67,73,113,100,191,99,33,183,123,19,226,
    146,40,97,148,167,126,34,213,42,246,189,145,159,251,137,247,
    105,156,5,39,50,252,226,120,40,3,213,105,85,51,179,98,
    123,228,171,129,203,75,77,210,73,50,82,76,50,75,165,186,
    133,157,94,148,134,94,146,133,167,177,84,243,68,207,235,69,
    177,244,60,254,248,121,50,202,114,245,219,60,207,114,151,212,
    202,131,113,230,215,43,72,169,65,156,21,178,67,187,241,54,
    46,145,87,52,187,55,98,138,196,0,179,75,139,67,89,4,
    121,52,82,104,45,77,145,102,19,181,14,217,137,155,98,132,
    77,119,144,37,178,43,147,40,30,119,95,202,226,68,101,163,
    238,39,50,13,6,137,159,159,68,105,191,235,63,233,246,101,
    178,243,168,80,254,113,44,31,125,36,159,63,237,249,193,179,
    199,59,79,130,238,241,105,20,135,221,195,231,79,187,163,177,
    26,100,105,55,217,233,70,169,146,168,181,184,123,141,190,182,
    113,218,29,218,249,77,212,247,34,150,217,27,200,120,36,243,
    54,141,62,36,174,196,146,88,16,182,48,69,71,180,177,215,
    192,199,20,27,198,45,177,23,145,212,1,105,130,64,103,86,
    48,251,7,176,65,17,15,39,6,228,27,4,162,33,254,4,
    89,29,161,180,79,223,12,254,246,123,82,151,30,29,154,4,
    13,61,120,198,192,67,4,226,204,23,132,133,20,24,61,13,
    24,218,160,81,133,96,212,48,203,199,212,226,116,34,99,32,
    113,11,138,191,79,83,72,151,0,205,129,142,142,67,247,112,
    171,63,51,80,247,59,196,248,30,131,69,13,162,34,123,147,
    178,73,168,207,174,181,143,58,249,114,172,245,84,108,226,192,
    171,236,212,9,252,52,205,148,227,135,161,227,43,149,71,199,
    167,74,22,142,202,156,173,162,211,36,12,44,87,120,171,233,
    141,71,21,190,8,11,136,47,253,18,70,129,194,151,21,126,
    97,253,23,82,33,86,6,89,88,224,56,145,232,75,229,18,
    147,234,54,54,191,169,182,99,80,118,236,10,66,133,140,123,
    170,197,104,244,139,194,227,237,104,156,129,71,171,95,251,241,
    169,84,52,31,17,163,112,87,234,234,141,102,13,189,251,36,
    124,37,59,233,211,75,179,52,28,35,235,81,176,69,92,221,
    103,0,46,0,65,240,46,194,111,14,91,27,218,8,199,37,
    35,32,41,173,18,124,12,188,123,164,19,96,48,136,50,202,
    32,8,47,48,22,117,12,14,38,44,46,187,170,67,61,90,
    236,18,198,221,117,106,54,168,249,81,165,145,25,170,165,125,
    85,45,143,137,21,131,117,17,152,165,212,181,187,237,77,185,
    219,131,75,119,195,112,186,79,110,99,144,115,93,186,141,73,
    122,201,119,75,31,33,135,68,152,224,231,9,207,96,109,185,
    75,164,5,187,2,181,75,72,157,132,107,127,2,174,46,25,
    138,177,234,62,120,151,102,55,111,148,102,251,90,179,59,196,
    202,66,137,178,54,163,171,37,2,130,136,81,234,153,117,252,
    18,59,227,53,210,241,164,118,215,48,103,30,164,109,78,126,
    156,64,185,140,208,161,71,43,93,119,44,194,99,207,132,123,
    101,82,43,40,82,140,242,236,187,177,147,245,28,5,21,15,
    47,182,138,237,173,226,99,140,37,206,46,71,39,29,77,116,
    188,200,229,40,199,184,208,228,23,237,235,30,251,189,87,166,
    36,180,2,21,8,108,60,214,61,135,182,66,229,20,209,102,
    173,248,86,173,120,146,227,99,226,163,197,90,55,97,13,159,
    150,96,102,189,140,23,112,229,194,95,241,249,132,244,79,42,
    144,64,181,165,187,175,69,97,41,73,94,247,231,83,184,154,
    157,140,238,135,184,233,203,202,83,109,168,81,68,143,73,82,
    144,243,252,21,184,220,19,240,23,32,196,32,48,74,119,99,
    199,166,135,12,191,66,211,191,5,14,100,215,228,81,67,187,
    173,81,134,58,244,234,226,25,79,213,105,245,119,240,183,137,
    40,120,97,130,160,20,104,150,5,221,100,10,180,106,71,103,
    168,189,87,154,179,166,35,2,217,109,224,23,52,77,251,190,
    89,251,254,101,64,173,171,48,12,104,51,68,225,188,230,192,
    35,102,63,191,196,32,229,151,117,177,98,76,32,235,23,212,
    60,170,65,37,170,177,217,240,189,121,53,33,76,228,73,79,
    7,225,207,136,57,139,197,89,180,57,206,77,81,169,93,170,
    81,185,212,227,218,165,36,167,134,183,124,54,160,214,32,160,
    92,24,2,15,102,88,52,209,153,200,2,217,128,35,155,156,
    143,235,94,81,250,166,168,226,35,237,55,149,119,88,99,123,
    90,151,53,86,52,12,168,249,110,214,241,136,144,240,34,246,
    147,227,208,223,61,32,46,136,149,160,242,86,163,146,107,105,
    82,46,242,52,241,46,209,248,245,163,74,190,215,179,142,69,
    191,196,77,107,185,216,243,194,44,224,0,244,135,129,116,18,
    153,28,227,193,113,16,141,156,94,236,247,217,158,102,41,247,
    23,149,220,138,1,113,181,42,40,40,202,237,101,78,144,165,
    152,90,78,3,149,229,78,40,241,44,37,67,231,145,195,121,
    201,137,10,199,63,198,175,62,30,200,216,115,166,227,2,151,
    167,126,222,47,184,18,61,121,67,221,155,128,7,15,79,209,
    17,214,228,135,149,222,244,209,174,78,50,92,134,107,55,196,
    228,141,103,36,53,214,161,243,41,53,31,80,179,5,55,36,
    23,117,113,211,63,210,238,164,98,27,163,91,83,112,237,54,
    53,241,75,90,91,252,48,52,188,122,159,208,160,111,107,112,
    130,180,97,56,199,237,60,101,34,186,143,177,202,251,24,26,
    212,247,49,250,18,168,77,17,196,254,95,35,8,187,217,172,
    21,76,14,246,237,255,53,112,184,143,111,154,88,238,175,160,
    172,90,222,21,52,12,152,56,136,60,211,65,67,219,15,107,
    155,241,234,68,37,204,42,16,7,88,136,96,181,124,198,117,
    180,103,232,130,249,210,216,92,90,240,229,200,26,54,169,124,
    227,93,131,87,93,20,19,138,252,209,72,166,225,101,193,203,
    95,102,173,65,10,6,62,92,214,22,88,221,174,226,243,67,
    196,147,176,19,178,51,178,27,53,198,31,222,0,81,8,12,
    189,58,24,222,158,10,134,46,89,91,135,191,58,242,105,211,
    253,244,250,48,131,103,150,19,47,204,18,63,74,233,240,245,
    62,211,176,216,41,111,54,170,33,214,174,34,221,132,50,150,
    74,94,135,15,69,76,149,103,212,80,98,26,202,198,120,82,
    226,227,5,190,199,158,119,35,2,244,115,220,244,27,40,15,
    126,20,160,109,60,124,54,173,166,224,60,121,229,42,87,51,
    75,149,180,46,162,199,133,203,254,185,88,43,157,175,27,171,
    164,196,142,72,7,197,61,63,209,215,69,124,223,225,254,132,
    154,159,85,38,99,23,210,7,46,62,186,232,163,37,58,29,
    39,113,206,217,238,54,141,211,190,201,206,118,37,209,246,132,
    68,47,217,42,124,231,153,236,168,245,107,39,238,71,137,22,
    91,45,95,249,30,230,180,248,238,149,209,66,230,145,31,71,
    223,235,91,179,106,88,145,172,87,9,18,199,245,27,231,60,
    198,198,148,178,25,8,185,236,71,5,18,98,42,245,138,50,
    158,144,41,148,243,14,56,78,174,190,9,192,209,149,171,62,
    241,239,210,189,114,177,139,13,221,143,53,23,155,194,54,232,
    114,214,20,45,209,22,150,88,104,55,205,166,221,108,152,8,
    46,26,89,17,45,179,217,90,16,250,127,19,193,214,50,54,
    91,77,241,95,255,199,238,221,
};

EmbeddedPython embedded_m5_internal_param_ClockedObject(
    "m5/internal/param_ClockedObject.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_ClockedObject.py",
    "m5.internal.param_ClockedObject",
    data_m5_internal_param_ClockedObject,
    2104,
    6613);

} // anonymous namespace
