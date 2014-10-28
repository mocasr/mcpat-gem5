#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_I8254[] = {
    120,156,205,88,123,111,219,214,21,63,151,148,100,75,182,98,
    59,182,227,60,156,90,109,230,78,43,22,171,203,226,36,88,
    131,96,73,60,96,25,86,39,163,6,36,213,134,177,52,121,
    45,81,230,67,35,175,157,170,176,255,153,131,109,255,237,67,
    12,251,99,223,99,159,99,95,101,59,231,92,146,166,28,27,
    40,208,162,170,45,94,28,222,231,121,252,206,227,210,133,236,
    175,138,207,47,91,0,233,127,5,128,135,63,1,1,64,40,
    160,39,64,72,1,222,50,28,84,33,185,15,94,21,222,1,
    244,12,144,6,156,34,97,194,31,12,136,230,121,77,13,2,
    147,123,4,140,27,32,43,208,171,194,235,104,9,42,178,6,
    7,13,72,190,4,33,68,36,224,141,55,3,222,44,188,195,
    221,145,168,243,134,179,224,53,152,168,131,55,199,68,3,198,
    139,32,231,160,135,155,207,64,175,137,91,125,130,91,93,225,
    173,254,67,91,121,56,178,2,94,147,166,35,47,95,208,204,
    10,205,228,51,174,240,46,11,57,103,139,208,91,202,233,171,
    37,122,185,68,175,148,232,213,18,125,173,68,175,149,232,235,
    37,250,70,137,190,89,162,111,149,232,245,18,125,187,68,127,
    192,244,2,200,37,24,110,192,176,5,195,15,97,31,149,190,
    88,72,246,17,72,19,134,119,160,119,7,36,254,62,130,83,
    180,139,183,84,90,241,35,94,113,181,88,177,201,43,62,134,
    222,199,32,241,183,169,87,212,160,219,94,69,91,251,255,195,
    191,54,218,26,212,60,54,71,50,73,253,56,178,253,104,63,
    246,13,26,175,81,67,200,112,169,153,201,32,242,156,32,242,
    111,96,124,120,70,6,145,19,192,141,5,201,18,24,112,194,
    196,137,1,227,54,28,11,24,86,192,51,225,24,143,169,18,
    3,125,1,167,6,252,209,164,9,39,216,86,208,168,31,64,
    69,105,124,12,217,168,122,167,25,56,169,194,113,21,186,111,
    142,13,234,56,168,67,242,47,248,122,157,55,157,229,77,13,
    56,198,182,2,167,21,56,169,193,107,156,132,93,195,58,137,
    47,222,28,163,164,216,211,109,87,144,219,221,146,184,36,138,
    231,39,145,19,74,22,221,30,57,137,19,218,47,30,221,219,
    190,223,110,228,51,226,116,107,228,168,129,197,75,76,210,69,
    56,82,188,85,28,73,53,135,196,190,31,121,118,24,123,135,
    129,84,179,180,143,189,239,7,210,182,121,240,69,56,138,19,
    245,171,36,137,19,139,212,201,157,65,236,20,43,72,153,110,
    16,167,178,77,167,241,49,22,109,175,104,246,254,136,119,36,
    6,152,77,90,236,201,212,77,252,145,66,43,233,29,105,54,
    237,214,38,251,112,147,14,176,233,12,226,80,118,100,232,7,
    227,206,142,76,15,84,60,234,60,147,145,59,8,157,228,192,
    143,250,29,231,126,167,47,195,237,187,169,114,246,2,121,247,
    83,249,232,193,190,227,62,68,233,221,206,222,161,31,120,157,
    55,143,30,116,70,99,53,136,163,78,184,221,241,35,37,81,
    91,65,167,164,167,45,28,190,74,39,190,245,251,182,207,178,
    218,3,25,140,100,210,164,222,155,196,141,88,20,243,162,38,
    76,209,22,77,164,170,248,152,98,221,152,19,187,62,73,235,
    146,6,8,100,102,14,171,127,2,27,16,237,127,96,64,178,
    78,160,25,226,79,144,149,17,58,93,26,51,120,236,119,164,
    38,221,59,52,9,10,186,243,152,129,134,136,195,153,143,201,
    246,17,48,90,170,48,172,129,70,17,130,79,195,42,25,83,
    139,211,105,27,3,55,175,64,250,143,201,29,162,69,64,51,
    96,64,193,174,107,120,212,95,24,152,221,54,49,190,203,32,
    81,3,63,141,223,70,108,10,162,25,79,93,212,201,171,241,
    203,189,161,116,85,186,129,29,95,196,135,45,215,137,162,88,
    181,28,207,107,57,74,37,254,222,161,146,105,75,197,173,205,
    180,93,39,219,47,229,56,43,246,27,143,114,92,17,6,16,
    87,250,197,243,93,133,47,203,252,194,250,79,165,66,140,12,
    98,47,197,126,218,162,47,149,69,76,170,43,216,60,205,143,
    99,48,182,107,57,116,82,25,236,171,6,163,208,73,83,155,
    143,163,126,6,28,173,62,114,130,67,169,104,62,34,69,225,
    169,68,234,131,166,5,185,235,36,116,46,51,233,209,142,226,
    200,27,35,203,190,187,73,220,92,103,224,205,3,65,111,21,
    97,55,131,109,13,154,8,195,69,195,37,233,42,25,232,24,
    112,215,72,23,192,32,16,89,52,65,240,157,98,204,105,27,
    28,52,88,76,118,205,22,81,180,216,34,108,91,183,168,89,
    167,230,118,174,137,41,168,163,121,94,29,247,136,5,131,117,
    224,154,153,180,133,123,237,78,184,215,141,51,247,194,112,217,
    37,55,49,200,153,206,220,196,36,125,36,79,50,159,32,7,
    68,88,224,112,201,19,88,75,214,34,73,95,203,65,108,17,
    50,203,240,236,151,224,105,145,129,24,155,214,141,203,52,186,
    241,131,208,104,95,107,116,155,88,152,207,80,213,100,52,53,
    132,75,144,48,50,253,178,110,119,144,24,175,145,110,203,90,
    93,195,92,248,58,106,114,82,227,196,200,101,137,14,49,90,
    217,154,168,16,254,246,77,184,150,37,171,148,34,194,40,137,
    191,26,183,226,253,150,130,156,135,199,155,233,214,102,250,25,
    198,140,214,19,142,66,58,106,232,184,144,200,81,130,254,95,
    231,23,237,211,54,251,183,157,165,28,212,62,37,126,54,26,
    235,156,67,88,170,18,138,92,211,82,120,163,80,56,241,255,
    25,157,223,96,109,155,176,134,79,67,48,147,118,204,209,148,
    43,17,30,197,231,25,233,157,68,151,64,53,170,213,213,34,
    176,116,36,167,245,227,9,28,125,255,178,89,159,224,97,59,
    185,71,214,160,64,13,61,38,113,79,78,242,55,224,178,77,
    192,95,129,16,130,64,200,220,138,29,152,30,50,244,50,77,
    255,19,112,160,186,32,63,26,218,61,141,44,148,161,247,166,
    15,121,170,78,151,191,129,191,151,162,220,169,9,130,82,155,
    153,21,102,229,212,86,41,28,154,161,245,141,210,87,101,210,
    243,201,94,3,39,165,105,218,199,205,194,199,207,2,102,81,
    85,97,224,154,2,234,102,245,201,54,49,249,226,12,115,148,
    55,110,137,101,163,132,164,159,82,115,183,0,145,200,251,190,
    95,126,55,206,7,250,82,222,179,117,112,253,53,49,85,97,
    49,22,106,28,126,113,235,23,221,167,246,243,151,191,125,185,
    219,213,123,21,14,84,205,29,232,94,225,64,146,3,255,59,
    174,236,169,53,8,30,167,134,192,235,28,150,64,116,147,170,
    128,172,66,175,70,174,198,213,171,200,60,81,228,81,144,162,
    231,68,86,97,125,237,106,77,22,8,209,198,167,230,171,105,
    69,29,178,255,227,192,9,247,60,231,137,67,167,19,11,110,
    238,155,70,46,207,98,89,30,242,43,113,153,72,252,250,105,
    46,215,209,180,34,206,207,240,176,66,30,246,47,47,118,57,
    204,252,126,32,91,161,12,247,240,154,55,240,71,173,253,192,
    233,179,253,204,76,222,151,185,188,138,1,112,62,199,167,20,
    203,118,227,150,27,71,152,48,14,93,21,39,45,79,226,13,
    72,122,173,187,45,206,54,45,63,109,57,123,56,234,184,74,
    251,201,164,247,115,113,233,36,253,148,235,200,131,183,68,78,
    211,254,54,222,117,125,172,164,247,114,125,233,139,88,145,58,
    184,120,214,78,135,169,24,111,54,106,172,3,227,3,106,126,
    66,205,38,76,57,195,116,240,176,47,233,84,82,105,13,99,
    87,93,232,219,39,77,120,69,115,211,247,93,126,239,155,184,
    188,254,118,147,57,126,141,102,202,25,186,118,83,91,167,4,
    211,107,228,95,130,230,184,115,158,62,187,120,53,238,185,66,
    33,98,230,219,134,8,246,167,105,122,210,224,59,141,12,214,
    189,31,138,56,214,207,33,43,62,46,139,10,162,44,107,83,
    71,133,161,200,175,1,101,65,249,75,196,213,73,200,217,110,
    34,29,37,181,17,111,78,79,106,14,52,154,151,97,97,202,
    92,180,226,90,244,176,16,239,148,43,176,241,74,169,62,103,
    203,138,215,88,46,97,13,127,204,26,176,13,93,198,159,97,
    183,82,40,98,1,155,72,190,181,75,202,208,37,58,113,226,
    140,70,50,242,206,202,111,30,153,22,32,40,136,5,112,86,
    249,96,173,189,130,207,251,14,75,194,149,100,101,155,86,11,
    23,157,162,117,25,211,127,206,237,218,38,213,159,5,111,139,
    172,170,195,117,17,169,173,95,20,118,90,59,7,88,60,194,
    30,249,17,93,250,46,29,195,202,139,107,219,236,157,53,200,
    200,247,100,32,149,44,219,92,209,193,217,237,215,147,152,18,
    227,49,222,197,248,34,131,239,129,109,79,53,105,60,194,195,
    250,116,42,37,56,74,26,53,76,27,171,162,94,169,11,206,
    214,231,62,255,106,54,57,35,114,193,62,78,45,14,34,11,
    133,54,249,83,101,158,34,217,157,232,18,186,235,132,250,147,
    19,127,59,177,62,164,230,78,110,16,118,8,125,169,227,107,
    146,190,182,162,235,112,41,193,149,131,181,69,253,180,44,220,
    222,202,101,217,210,178,80,105,27,169,110,124,152,184,242,21,
    142,25,60,75,221,186,112,114,215,15,245,199,56,181,116,110,
    220,75,28,164,87,207,245,166,50,241,157,192,255,90,170,214,
    133,251,61,115,82,223,125,229,199,59,242,200,119,229,37,135,
    158,141,95,191,152,169,113,170,100,248,222,98,25,29,134,246,
    231,50,140,147,241,231,177,39,223,19,255,105,86,96,233,41,
    246,145,164,74,236,18,62,39,231,94,194,39,14,102,202,217,
    184,112,252,121,16,187,7,210,203,230,220,190,124,206,78,28,
    146,50,215,207,51,236,121,137,229,68,125,153,243,58,171,93,
    136,71,213,10,33,231,34,165,18,52,39,187,184,214,97,73,
    47,184,215,176,171,37,178,239,163,82,19,222,117,114,113,22,
    138,9,249,108,143,178,127,151,151,78,211,47,245,165,68,127,
    170,121,66,69,28,251,25,125,200,172,47,212,69,205,160,175,
    231,166,104,136,166,168,136,249,102,221,172,215,234,85,19,125,
    151,122,150,69,195,172,55,230,197,229,255,27,232,221,13,99,
    99,174,46,254,15,25,191,79,34,
};

EmbeddedPython embedded_m5_internal_param_I8254(
    "m5/internal/param_I8254.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_I8254.py",
    "m5.internal.param_I8254",
    data_m5_internal_param_I8254,
    2281,
    7154);

} // anonymous namespace
