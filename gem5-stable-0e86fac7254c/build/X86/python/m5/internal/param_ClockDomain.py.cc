#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_ClockDomain[] = {
    120,156,205,88,91,111,220,198,21,62,67,238,82,218,149,214,
    146,44,219,242,173,17,139,66,200,54,168,181,137,99,217,6,
    98,24,109,162,2,77,30,148,148,219,68,206,38,45,67,145,
    179,187,92,241,178,32,71,118,54,144,94,42,163,237,91,127,
    68,209,135,254,143,254,175,246,156,51,36,197,149,98,32,64,
    11,172,165,229,96,56,156,57,115,46,223,185,204,248,80,252,
    53,241,249,181,13,144,15,4,64,128,63,1,17,64,44,0,
    223,133,20,16,108,194,113,19,178,71,16,52,225,53,192,192,
    0,105,192,57,118,76,248,198,128,100,149,215,88,16,153,60,
    34,96,214,6,217,128,65,19,14,147,13,104,72,11,142,219,
    144,125,7,66,136,68,192,139,96,9,130,101,120,141,212,177,
    211,98,130,203,16,180,185,211,130,96,133,59,109,152,173,131,
    92,129,1,18,95,130,65,7,73,189,135,164,174,49,169,127,
    19,169,0,191,220,128,160,67,211,145,151,175,105,102,131,102,
    242,30,215,152,202,90,201,217,58,12,54,202,254,245,90,127,
    147,251,107,32,55,96,114,3,38,55,97,114,11,134,40,240,
    122,69,117,11,164,9,147,219,48,184,13,18,127,91,112,142,
    58,9,54,106,43,238,240,138,235,213,138,187,188,226,30,12,
    238,129,196,223,93,189,194,130,126,247,38,234,57,252,15,254,
    117,81,207,160,86,177,121,41,179,60,76,19,55,76,134,105,
    104,208,119,139,26,178,138,79,205,82,97,158,79,200,60,255,
    2,182,77,96,20,230,57,3,36,44,72,150,200,128,51,238,
    156,25,48,235,194,169,128,73,3,2,19,78,113,155,38,49,
    48,18,112,110,192,183,38,77,56,195,182,129,10,125,7,26,
    74,219,102,194,10,213,148,150,224,172,9,167,77,232,191,56,
    53,104,224,184,5,217,63,225,135,251,76,116,153,137,26,112,
    138,109,3,206,27,112,102,193,33,78,194,161,73,139,196,23,
    47,78,81,82,28,233,119,27,200,237,65,77,92,18,37,8,
    179,196,139,165,186,142,125,119,234,101,94,236,126,18,165,254,
    241,126,26,123,97,210,109,151,243,210,124,119,234,169,177,195,
    11,77,210,72,60,85,76,48,77,164,90,193,206,48,76,2,
    55,78,131,147,72,170,101,162,230,14,195,72,186,46,127,252,
    52,158,166,153,250,109,150,165,153,67,74,229,193,40,245,170,
    21,164,82,63,74,115,217,165,221,120,27,135,200,43,154,61,
    156,50,69,98,128,153,165,197,129,204,253,44,156,42,180,149,
    166,72,179,137,90,151,172,196,77,158,96,211,27,167,177,236,
    201,56,140,102,189,125,153,31,171,116,218,251,88,38,254,56,
    246,178,227,48,25,245,188,71,189,145,140,247,30,228,202,59,
    138,228,131,247,229,211,199,67,207,127,242,112,239,145,223,59,
    58,9,163,160,247,226,233,227,222,116,166,198,105,210,139,247,
    122,97,162,36,234,44,234,93,209,214,46,78,34,61,230,175,
    194,145,27,178,196,238,88,70,83,153,117,104,244,46,241,36,
    214,197,170,176,132,41,186,162,131,189,38,62,166,184,111,172,
    136,131,144,100,246,73,15,4,56,179,132,216,63,128,141,137,
    88,56,54,32,187,79,0,154,224,79,144,197,17,70,125,250,
    102,240,183,223,147,178,244,232,196,36,88,232,193,83,6,29,
    162,15,103,62,35,28,160,86,8,57,77,152,88,160,17,133,
    64,212,16,203,102,212,226,116,34,99,32,241,6,228,127,159,
    167,144,172,3,26,3,29,27,135,110,225,86,127,102,144,246,
    187,196,248,1,67,69,141,195,60,125,149,176,65,168,207,110,
    213,71,157,124,49,251,252,104,34,125,149,111,227,192,215,233,
    137,237,123,73,146,42,219,11,2,219,83,42,11,143,78,148,
    204,109,149,218,59,121,183,69,8,216,40,209,86,209,155,77,
    75,116,17,18,16,93,250,37,8,125,133,47,155,252,194,250,
    207,165,66,164,140,211,32,199,113,34,49,146,202,33,38,213,
    53,108,126,83,110,199,144,236,90,37,128,114,25,13,85,155,
    177,232,229,185,203,219,209,56,195,142,86,191,244,162,19,169,
    104,62,226,69,225,174,212,213,27,45,22,120,183,73,244,82,
    114,210,166,155,164,73,48,67,198,67,127,135,120,186,205,240,
    91,5,2,224,77,4,223,18,182,22,116,16,140,235,134,79,
    50,54,10,232,49,236,110,145,70,128,161,32,138,248,130,16,
    60,199,40,212,53,56,140,176,176,236,166,54,245,104,177,67,
    8,119,238,81,115,159,154,159,149,250,88,152,82,58,151,149,
    242,144,24,49,88,19,190,89,200,92,185,218,193,156,171,221,
    185,112,53,12,163,125,114,25,131,28,235,194,101,76,210,74,
    246,188,240,15,114,70,132,8,126,174,121,5,235,202,89,39,
    29,88,37,160,29,66,105,29,170,163,26,84,29,50,19,227,
    212,185,243,38,189,110,191,69,122,29,105,189,238,17,35,171,
    5,194,58,140,172,182,240,9,30,70,161,101,214,240,62,118,
    102,91,164,225,186,110,183,48,83,30,38,29,78,121,156,54,
    185,96,208,65,71,171,92,119,26,132,197,161,9,183,138,84,
    150,83,140,152,102,233,247,51,59,29,218,10,74,30,158,237,
    228,187,59,249,71,24,69,236,231,28,151,116,28,209,145,34,
    147,211,12,35,66,139,95,180,151,187,236,241,110,145,138,208,
    6,84,22,176,233,88,243,28,212,114,149,81,44,91,172,218,
    219,149,218,73,138,143,136,139,54,235,220,132,45,124,218,130,
    89,117,83,142,178,92,173,240,87,124,62,38,237,147,2,36,
    80,13,233,244,181,32,44,35,73,235,188,59,135,169,69,73,
    232,188,135,91,238,151,62,106,65,133,32,122,76,146,129,220,
    230,175,192,5,158,128,191,0,161,5,65,81,56,26,187,52,
    61,100,244,77,154,254,39,224,0,246,35,217,211,208,14,107,
    20,33,14,253,57,127,194,83,117,50,253,12,254,86,139,126,
    231,38,8,74,124,102,81,194,213,19,95,163,114,113,134,217,
    79,74,110,141,249,88,64,86,27,123,57,77,211,94,111,86,
    94,127,17,72,171,202,11,67,217,194,16,184,172,247,119,137,
    213,79,47,240,71,89,229,158,216,52,106,168,250,21,53,15,
    42,64,137,114,108,17,92,111,95,78,3,181,220,232,234,208,
    251,59,98,173,193,194,172,89,92,96,214,104,84,174,212,44,
    93,233,97,229,74,146,211,193,107,62,7,80,107,16,68,206,
    13,129,7,47,44,146,232,204,211,0,217,132,129,69,78,199,
    85,174,40,124,82,148,81,145,162,233,92,174,97,109,29,104,
    61,86,40,209,0,160,230,251,197,70,33,194,192,179,200,139,
    143,2,239,249,87,196,3,49,226,151,94,106,148,82,173,215,
    165,34,15,19,111,18,140,95,223,47,165,123,185,216,8,244,
    1,110,89,73,197,254,22,164,62,135,157,63,140,165,29,203,
    248,8,15,136,227,112,106,15,35,111,196,182,52,11,169,63,
    47,165,86,12,134,203,85,64,78,177,237,32,181,253,52,193,
    100,114,226,171,52,179,3,137,167,38,25,216,15,108,206,68,
    118,152,219,222,17,126,245,124,165,61,102,62,26,112,41,234,
    101,163,156,171,206,227,87,212,93,60,22,92,60,43,135,88,
    125,31,150,90,211,71,184,42,173,112,193,173,221,15,147,53,
    158,134,212,76,135,203,199,212,252,146,154,29,120,43,178,79,
    15,183,252,146,246,38,245,90,24,209,90,66,109,204,135,130,
    47,104,93,126,53,32,236,255,148,128,160,239,96,138,176,96,
    129,92,162,243,59,93,177,52,139,43,22,12,17,214,255,26,
    34,216,147,22,239,67,127,252,191,70,6,231,225,219,37,148,
    243,33,20,197,200,155,162,130,1,181,147,197,19,29,21,180,
    237,176,100,153,221,168,21,183,172,0,113,136,245,5,22,192,
    167,92,26,187,134,174,129,47,12,205,21,3,223,115,144,95,
    37,242,149,123,5,148,186,202,37,252,120,211,169,76,130,139,
    10,150,191,44,86,123,228,235,46,92,20,12,88,174,222,192,
    231,42,210,73,208,154,220,140,232,102,133,237,187,11,23,228,
    3,205,95,17,233,86,230,34,157,67,118,214,177,173,10,107,
    58,202,177,229,232,104,23,200,72,42,121,213,120,106,29,170,
    243,96,32,49,5,164,51,60,151,112,57,143,239,145,235,190,
    5,225,241,41,110,249,109,105,67,10,143,150,104,53,90,130,
    243,211,165,171,82,205,40,21,175,186,100,157,229,14,187,205,
    90,165,12,190,208,43,211,1,251,7,29,201,14,188,88,95,
    201,240,173,130,243,115,106,126,81,234,147,177,173,15,55,124,
    80,208,135,56,244,5,78,158,156,43,157,93,26,167,163,114,
    188,183,91,74,179,171,165,233,135,177,190,127,226,59,197,120,
    143,67,123,125,90,144,161,160,236,95,245,209,92,102,161,23,
    133,63,232,123,167,114,88,145,36,151,233,18,63,213,27,103,
    19,182,121,77,141,108,224,76,142,194,28,201,48,141,106,126,
    225,196,164,100,245,14,252,72,210,153,91,187,120,56,232,58,
    80,159,153,159,147,31,228,207,176,161,219,165,214,90,75,88,
    6,93,108,154,162,45,58,162,33,86,59,45,179,101,181,154,
    38,66,134,70,54,69,219,108,181,87,5,253,111,35,132,218,
    198,118,171,37,254,11,91,213,169,137,
};

EmbeddedPython embedded_m5_internal_param_ClockDomain(
    "m5/internal/param_ClockDomain.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_ClockDomain.py",
    "m5.internal.param_ClockDomain",
    data_m5_internal_param_ClockDomain,
    2058,
    6399);

} // anonymous namespace
