#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubyController[] = {
    120,156,205,89,95,111,219,200,17,159,37,37,217,146,173,216,
    142,255,37,182,19,43,77,141,83,15,141,117,77,227,36,192,
    5,65,47,201,1,119,125,240,93,233,3,226,168,69,121,52,
    185,178,40,83,164,74,174,146,211,193,238,67,29,180,125,235,
    135,40,250,208,239,209,143,211,239,208,206,204,146,18,229,88,
    87,23,45,32,219,210,98,57,156,157,221,153,249,205,236,236,
    202,133,244,175,136,223,95,212,0,146,223,11,0,15,63,2,
    2,128,174,128,166,0,33,5,120,203,112,82,132,248,17,120,
    69,120,15,208,52,64,26,112,142,29,19,126,109,64,56,207,
    99,74,16,152,76,17,48,168,128,44,64,179,8,175,195,37,
    40,200,18,156,84,32,254,22,132,16,161,128,67,111,6,188,
    89,120,143,210,177,83,102,129,179,224,85,184,83,6,111,142,
    59,21,24,44,130,156,131,38,10,159,129,102,21,69,125,140,
    162,110,176,168,127,144,40,15,223,172,128,87,37,118,92,203,
    27,226,44,16,39,207,113,131,165,44,100,43,91,132,230,82,
    214,191,153,235,47,231,250,43,185,254,106,174,191,198,253,5,
    144,75,208,89,135,206,45,232,220,134,22,26,101,113,56,243,
    6,72,19,58,155,208,220,4,137,159,13,56,71,187,121,75,
    185,17,91,60,226,230,112,196,29,30,113,23,154,119,65,226,
    231,142,30,81,130,131,250,42,250,194,255,23,254,213,209,23,
    160,230,177,121,43,227,196,143,66,219,15,91,145,111,208,251,
    18,53,228,57,151,154,153,212,133,47,201,133,127,7,246,159,
    103,164,46,60,3,20,44,72,151,192,128,51,238,156,25,48,
    168,195,169,128,78,1,60,19,78,113,154,34,45,224,88,192,
    185,1,191,49,137,225,12,219,2,26,253,46,20,148,246,95,
    135,141,174,37,205,192,89,17,78,139,112,112,120,106,16,225,
    164,12,241,223,224,251,45,22,58,203,66,13,56,197,182,0,
    231,5,56,43,193,107,100,66,82,167,76,234,139,195,83,212,
    20,41,7,245,2,174,118,63,167,46,169,226,249,113,232,116,
    165,34,75,216,61,39,118,186,182,213,63,26,188,140,66,21,
    71,65,32,227,122,37,99,141,146,221,158,163,218,22,143,53,
    201,40,221,158,98,153,81,40,213,28,118,90,126,232,217,221,
    200,235,7,82,205,146,64,187,229,7,210,182,249,229,151,221,
    94,20,171,207,227,56,138,45,178,43,19,131,200,25,142,32,
    171,186,65,148,200,58,205,198,211,88,36,94,17,119,171,199,
    18,105,1,188,94,26,236,201,196,141,253,158,66,119,105,137,
    196,77,210,234,228,40,110,146,223,97,211,104,71,93,217,144,
    93,63,24,52,94,201,228,68,69,189,198,11,25,186,237,174,
    19,159,248,225,113,195,121,212,56,150,221,189,7,137,114,142,
    2,249,224,19,249,244,113,203,113,159,60,220,123,228,54,142,
    250,126,224,53,14,159,62,110,244,6,170,29,133,141,238,94,
    195,15,149,68,179,5,141,203,12,182,139,124,55,105,234,119,
    254,177,237,179,210,118,91,6,61,25,87,137,186,65,203,18,
    139,98,94,148,132,41,234,162,138,189,34,126,77,177,101,204,
    137,125,159,212,118,201,20,4,59,51,3,218,95,129,93,138,
    136,56,49,32,222,34,24,117,240,35,200,239,8,166,3,122,
    103,240,187,95,145,189,52,181,99,18,56,52,241,148,161,135,
    24,68,206,103,132,134,16,24,63,69,232,148,64,227,10,225,
    168,129,22,15,168,69,118,18,99,160,240,2,36,127,25,151,
    16,46,2,250,3,83,0,146,214,112,170,63,48,84,15,234,
    180,240,125,70,139,106,251,73,244,46,100,159,80,159,131,235,
    0,109,242,245,224,171,163,142,116,85,178,141,132,55,81,191,
    230,58,97,24,169,154,227,121,53,71,169,216,63,234,43,153,
    212,84,84,219,73,234,101,2,193,82,6,184,161,188,65,47,
    3,24,129,1,1,166,31,60,223,85,248,176,204,15,108,255,
    68,42,4,75,59,242,18,164,147,136,99,169,44,90,164,186,
    129,205,103,217,116,140,202,122,41,195,80,34,131,150,170,48,
    28,157,36,177,121,58,162,51,242,104,244,91,39,232,75,69,
    252,8,25,133,179,82,87,79,52,117,236,221,34,237,51,229,
    201,160,118,24,133,222,0,215,238,187,59,180,172,91,140,192,
    121,32,12,174,34,254,102,176,45,65,21,241,184,104,184,164,
    102,33,69,31,35,111,141,140,2,140,6,145,38,26,68,225,
    57,166,163,186,193,249,132,245,229,96,173,81,143,6,91,4,
    114,107,147,154,45,106,238,100,38,153,166,93,170,23,237,242,
    144,214,98,176,49,92,51,85,123,24,112,251,99,1,119,123,
    20,112,152,82,15,40,112,12,10,175,81,224,152,100,152,248,
    121,26,37,20,146,8,20,124,157,139,13,54,151,181,72,102,
    40,101,176,182,8,171,121,192,30,231,0,107,145,167,24,173,
    214,237,73,166,221,190,94,166,61,214,166,221,163,181,204,167,
    56,171,50,190,42,194,37,144,24,169,161,217,200,175,176,51,
    88,39,35,231,205,187,142,27,231,235,176,202,59,32,239,162,
    92,99,232,236,163,173,174,59,5,66,100,203,132,181,116,103,
    75,40,89,244,226,232,187,65,45,106,213,20,100,107,120,182,
    147,236,238,36,159,98,58,169,61,231,4,165,19,138,78,25,
    177,236,197,152,26,202,252,160,195,221,230,208,183,211,109,9,
    221,64,123,35,123,143,141,207,217,45,81,49,37,181,169,91,
    190,50,180,60,41,242,41,45,164,194,102,55,97,29,191,21,
    193,171,181,35,206,184,92,191,240,91,252,190,32,7,144,13,
    36,80,229,105,29,104,93,88,77,82,216,250,104,12,89,83,
    84,210,250,24,103,125,149,5,107,9,134,56,162,175,73,106,
    80,252,252,9,184,234,19,240,71,32,204,32,52,210,136,227,
    216,166,47,185,126,153,216,127,11,156,204,46,217,76,13,29,
    185,70,154,238,48,176,147,39,204,170,247,214,95,194,159,115,
    153,240,220,4,65,251,160,153,214,117,249,125,176,48,140,117,
    6,219,149,246,186,194,120,82,32,199,181,157,132,216,116,248,
    155,195,240,31,37,213,97,45,134,57,109,154,56,156,213,75,
    176,105,181,95,142,80,72,155,204,166,88,54,114,216,250,41,
    53,15,134,176,18,25,109,74,11,223,190,184,43,228,118,75,
    91,103,226,47,104,117,5,214,103,161,196,165,221,103,71,24,
    255,142,171,70,162,134,161,85,204,66,235,225,48,180,36,111,
    18,239,249,164,64,173,65,120,57,55,4,30,223,176,128,162,
    147,83,1,100,17,154,37,10,66,46,130,69,26,163,34,75,
    148,148,96,199,118,32,182,219,190,182,232,16,50,26,13,212,
    124,55,237,152,101,64,60,11,156,238,145,231,60,127,67,203,
    160,181,184,89,212,26,153,98,139,121,197,40,226,196,36,221,
    248,241,147,76,193,183,211,86,208,250,25,69,116,166,24,135,
    160,23,185,156,137,190,105,203,90,87,118,143,240,32,217,246,
    123,181,86,224,28,179,71,205,84,241,175,50,197,21,67,226,
    98,133,144,80,186,219,143,106,110,20,34,202,250,174,138,226,
    154,39,241,104,37,189,218,131,26,111,81,53,63,169,57,41,
    6,117,4,141,39,8,46,86,157,248,56,225,186,244,228,29,
    117,167,109,176,116,191,245,67,31,75,244,102,102,56,125,212,
    27,238,55,92,149,235,112,196,141,28,143,76,106,160,147,232,
    99,106,126,66,205,14,92,151,109,169,129,179,30,210,244,100,
    228,18,230,185,178,80,43,180,196,49,206,175,105,116,242,97,
    126,248,231,85,242,131,190,216,65,6,89,130,206,12,183,179,
    180,43,53,203,25,177,194,237,28,19,231,51,98,149,219,27,
    76,92,200,136,139,220,46,49,241,102,70,92,230,118,133,137,
    171,25,113,141,219,117,38,222,202,136,183,185,221,96,226,102,
    70,220,226,246,14,19,239,102,217,108,155,137,53,104,222,203,
    174,176,126,68,153,173,244,191,102,54,142,254,169,123,157,226,
    254,219,255,107,66,179,30,94,59,189,172,159,67,90,86,77,
    74,102,6,228,14,75,79,116,50,211,30,196,226,107,176,146,
    43,214,217,6,226,53,86,74,88,208,159,114,169,111,27,186,
    166,31,185,155,107,31,190,195,161,51,79,40,223,217,151,69,
    145,46,220,9,72,78,175,39,67,111,84,148,243,155,169,219,
    144,178,84,7,70,213,15,86,224,43,248,253,16,245,164,110,
    78,123,70,119,113,136,243,141,235,160,11,225,33,26,166,233,
    251,99,105,218,34,135,235,196,60,204,201,218,123,187,19,242,
    159,141,123,85,152,248,116,85,151,216,152,215,109,119,224,226,
    217,10,143,139,255,237,16,44,211,248,178,242,210,183,92,3,
    95,42,44,150,122,120,224,40,52,219,128,103,190,50,51,205,
    185,128,204,23,232,170,54,73,64,118,137,76,179,252,71,38,
    146,78,219,96,250,172,238,79,26,224,6,253,4,189,102,251,
    30,11,190,10,31,201,214,23,89,25,73,221,153,52,172,39,
    145,129,4,255,48,7,137,36,252,210,131,250,241,36,214,163,
    126,171,69,204,254,247,218,203,87,98,36,209,116,177,155,163,
    169,143,38,13,12,251,148,149,236,168,101,127,243,226,243,132,
    39,185,42,47,205,67,149,198,56,121,242,26,99,36,218,201,
    0,45,216,253,97,101,242,140,153,50,57,26,39,8,69,151,
    55,158,68,176,202,75,147,156,162,184,74,111,131,60,137,69,
    94,52,176,109,125,140,199,231,192,182,175,71,245,243,148,22,
    4,233,133,54,85,63,37,177,122,225,191,92,40,11,46,74,
    47,252,142,162,215,78,39,47,125,116,29,36,22,111,58,11,
    195,52,194,87,253,89,1,200,187,11,93,208,236,59,93,125,
    83,203,55,141,214,61,106,238,103,73,136,183,5,125,207,193,
    23,6,250,74,7,119,18,174,152,185,64,182,40,213,40,58,
    60,119,247,118,51,5,119,71,10,30,176,147,248,231,134,238,
    30,159,12,63,228,123,25,68,238,137,244,244,21,54,71,202,
    4,158,87,81,215,65,250,230,165,28,7,126,55,149,176,116,
    225,189,23,211,168,213,11,212,68,198,190,19,80,56,144,101,
    50,50,223,27,94,182,44,42,170,198,40,92,171,178,70,31,
    30,93,25,105,177,60,246,41,65,176,200,177,161,233,206,75,
    238,86,247,38,225,62,47,226,90,192,83,159,63,245,13,222,
    115,138,194,228,5,54,116,227,93,94,40,139,146,65,191,183,
    152,162,34,170,162,32,230,171,101,179,92,42,23,77,132,48,
    81,150,69,197,44,87,230,197,232,127,27,129,92,49,182,151,
    202,226,223,32,153,64,123,
};

EmbeddedPython embedded_m5_internal_param_RubyController(
    "m5/internal/param_RubyController.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_RubyController.py",
    "m5.internal.param_RubyController",
    data_m5_internal_param_RubyController,
    2359,
    7622);

} // anonymous namespace
