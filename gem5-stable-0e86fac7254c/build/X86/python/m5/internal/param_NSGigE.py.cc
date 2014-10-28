#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_NSGigE[] = {
    120,156,205,89,109,111,27,199,17,158,189,35,41,145,22,45,
    201,242,187,101,139,78,170,152,118,107,49,117,253,134,198,48,
    26,91,70,235,0,81,220,99,1,59,108,209,235,233,110,73,
    30,117,47,196,221,202,14,3,233,75,101,180,253,80,160,63,
    162,232,135,254,143,254,175,118,102,246,238,116,162,164,56,64,
    139,50,146,184,24,238,206,206,238,204,60,51,59,187,114,33,
    251,169,226,231,23,45,128,244,172,1,224,225,159,128,0,32,
    20,208,19,32,164,0,111,5,118,170,144,220,7,175,10,239,
    1,122,6,72,3,14,144,48,225,183,6,68,11,60,167,6,
    129,201,61,2,38,13,144,21,232,85,225,117,180,12,21,89,
    131,157,6,36,127,0,33,68,36,224,141,55,7,222,60,188,
    71,233,72,212,89,224,60,120,13,38,234,224,157,97,162,1,
    147,37,144,103,160,135,194,231,160,215,68,81,119,80,212,89,
    22,245,47,18,229,225,200,121,240,154,196,142,123,249,154,56,
    43,196,201,107,156,101,41,139,249,206,150,160,183,156,211,231,
    74,244,74,137,62,95,162,47,148,232,139,37,250,82,137,190,
    92,162,175,148,232,171,37,250,90,137,94,45,209,215,75,244,
    141,18,189,86,162,91,37,250,102,137,254,136,233,69,144,203,
    48,250,24,70,63,130,209,58,244,209,73,75,133,37,62,1,
    105,194,232,22,244,110,129,196,191,79,224,0,253,232,45,151,
    102,180,121,198,185,98,198,109,158,113,7,122,119,64,226,223,
    109,61,163,6,221,246,5,196,134,255,111,252,105,11,164,212,
    2,54,111,101,146,250,113,100,251,81,63,246,13,26,175,81,
    67,72,114,169,153,203,32,245,156,32,245,79,96,60,121,70,
    6,169,125,64,193,130,116,9,12,216,103,98,223,128,73,27,
    246,4,140,42,224,153,176,135,203,84,105,3,3,1,7,6,
    252,206,36,134,125,108,43,8,130,27,80,81,26,79,35,6,
    129,150,52,7,251,85,216,171,66,247,205,158,65,29,59,117,
    72,254,1,223,174,178,208,121,22,106,192,30,182,21,56,168,
    192,126,13,94,35,19,118,141,234,164,190,120,179,135,154,98,
    79,183,93,193,221,110,149,212,37,85,60,63,137,156,80,170,
    38,210,246,216,73,156,208,222,234,254,210,31,188,104,55,114,
    150,56,221,24,59,106,104,241,28,147,140,17,142,21,203,138,
    35,169,206,32,209,247,35,207,14,99,111,55,144,106,158,4,
    217,125,63,144,182,205,131,47,195,113,156,168,23,73,18,39,
    22,217,147,59,131,216,41,102,144,53,221,32,78,101,155,86,
    227,101,44,18,175,136,187,63,102,137,180,1,222,39,77,246,
    100,234,38,254,88,161,155,180,68,226,38,105,109,114,16,55,
    41,57,172,51,140,67,217,145,161,31,76,58,155,50,221,81,
    241,184,243,76,70,238,48,116,146,29,63,26,116,156,251,157,
    129,12,31,220,77,149,179,29,200,187,159,202,199,15,251,142,
    251,232,222,131,251,110,103,123,215,15,188,206,155,199,15,59,
    227,137,26,198,81,39,124,208,241,35,37,209,92,65,167,108,
    168,13,28,63,71,75,190,243,7,182,207,202,218,67,25,140,
    101,66,54,77,175,210,118,196,146,88,16,53,97,138,182,104,
    34,85,197,143,41,86,141,51,98,203,39,117,93,50,1,193,
    204,204,129,245,119,96,23,34,2,118,12,72,86,9,54,35,
    252,19,228,103,4,79,151,198,12,30,251,53,217,73,247,142,
    76,2,131,238,220,99,168,33,230,144,243,9,121,63,2,198,
    75,21,70,53,208,56,66,248,105,96,37,19,106,145,157,196,
    24,40,188,2,233,223,142,74,136,150,0,253,128,41,8,187,
    46,226,82,127,100,104,118,219,180,241,45,70,137,26,250,105,
    252,46,98,95,16,205,193,212,69,155,188,154,124,181,61,146,
    174,74,215,176,227,235,120,183,229,58,81,20,171,150,227,121,
    45,71,169,196,223,222,85,50,109,169,184,181,158,182,235,228,
    252,229,28,104,133,188,201,56,7,22,129,0,129,165,191,120,
    190,171,240,203,10,127,97,251,167,82,33,72,134,177,151,98,
    63,137,24,72,101,209,38,213,89,108,62,207,151,99,52,182,
    107,57,118,82,25,244,85,131,97,232,164,169,205,203,81,63,
    35,142,102,191,117,130,93,169,136,31,161,162,112,85,34,245,
    66,51,195,220,101,210,58,87,154,12,105,71,113,228,77,112,
    207,190,187,78,219,185,204,200,91,0,194,222,5,196,221,28,
    182,53,104,34,14,151,12,151,212,171,100,168,99,196,93,36,
    99,0,163,64,100,9,5,209,119,128,105,167,109,112,222,96,
    61,57,56,91,68,209,100,139,192,109,93,163,102,149,154,235,
    185,41,102,97,143,230,180,61,238,209,30,12,54,130,107,102,
    234,22,1,182,117,36,192,174,28,6,24,166,204,46,5,138,
    65,225,116,24,40,38,25,36,121,154,69,5,133,32,2,3,
    135,75,177,192,102,178,150,72,253,90,14,99,139,176,89,6,
    232,160,4,80,139,60,196,232,180,174,156,102,210,181,31,134,
    73,7,218,164,15,104,15,11,25,174,154,140,167,134,112,9,
    20,70,102,96,54,238,38,18,147,75,100,220,178,89,47,225,
    129,248,58,106,242,201,198,167,35,215,50,58,203,104,107,107,
    162,66,8,236,155,112,49,59,177,82,74,10,227,36,254,102,
    210,138,251,45,5,249,30,158,172,167,27,235,233,103,152,54,
    90,79,57,17,233,196,161,83,67,34,199,9,166,128,58,127,
    209,97,109,115,136,219,217,177,131,230,167,211,159,189,198,70,
    231,44,150,170,132,146,215,204,44,222,40,44,78,10,124,70,
    27,104,176,185,77,184,132,159,134,224,93,218,49,103,84,174,
    71,120,20,63,207,200,240,164,187,4,170,108,173,174,214,129,
    213,35,69,173,91,71,144,52,3,229,172,59,184,218,102,30,
    148,53,40,112,67,31,147,182,79,113,242,103,224,234,77,192,
    159,128,48,130,80,200,34,139,99,152,62,228,234,21,98,255,
    61,112,178,58,225,144,52,116,132,26,89,58,195,0,78,31,
    49,171,62,51,191,128,191,148,50,221,129,9,130,206,55,51,
    171,207,202,231,91,165,136,105,6,215,247,58,195,42,71,131,
    159,28,54,116,82,98,211,97,110,22,97,126,152,52,139,218,
    10,115,215,44,112,55,175,151,182,105,151,47,15,81,71,135,
    199,53,177,98,148,176,244,19,106,238,22,48,18,121,223,255,
    121,195,107,211,217,190,116,250,217,58,195,254,138,118,85,97,
    61,22,107,124,98,235,233,69,216,84,243,176,185,87,132,141,
    228,132,255,158,171,122,106,13,194,196,129,33,240,234,135,197,
    15,221,186,42,32,171,208,171,81,128,113,225,42,178,248,19,
    121,242,163,164,121,228,52,97,27,109,105,235,21,176,208,30,
    167,230,155,153,37,27,114,250,147,192,9,183,61,231,169,164,
    229,105,15,110,30,145,70,174,208,82,89,33,138,38,113,154,
    78,252,245,211,92,177,183,51,75,52,63,213,254,212,10,113,
    88,121,177,203,217,229,55,67,217,10,101,184,141,151,188,161,
    63,110,245,3,103,192,30,52,51,133,191,202,21,86,12,129,
    233,211,61,165,20,182,21,183,220,56,194,147,98,215,85,113,
    210,242,36,94,127,164,215,186,219,226,99,166,229,167,45,103,
    27,71,29,87,233,232,56,26,244,92,88,58,201,32,101,68,
    238,188,35,114,166,8,176,241,170,235,99,25,221,207,13,166,
    175,97,197,153,193,149,179,14,53,60,132,241,90,163,38,58,
    33,62,164,230,54,53,235,48,235,163,165,3,252,182,3,41,
    25,181,134,57,171,46,248,2,162,57,94,17,119,122,60,238,
    255,250,125,226,94,63,246,100,209,95,35,78,57,71,247,110,
    106,235,116,180,244,26,121,231,25,110,23,184,179,153,119,158,
    229,118,145,59,151,242,71,166,101,238,60,7,189,21,122,245,
    160,158,243,148,81,230,254,219,140,194,209,55,211,184,11,254,
    167,137,196,186,247,131,209,199,250,25,100,37,202,105,73,68,
    148,149,109,234,36,50,18,249,125,161,172,41,191,90,172,76,
    225,211,118,19,233,40,169,253,120,117,134,122,115,102,210,155,
    137,10,111,230,202,21,55,168,71,133,130,7,92,169,77,206,
    151,42,121,118,174,120,141,101,21,86,251,123,108,3,219,208,
    5,255,33,126,43,133,41,8,25,145,124,103,151,205,161,171,
    121,218,138,51,30,203,200,59,172,212,121,100,102,160,160,180,
    151,192,97,137,132,101,249,121,252,28,15,219,138,206,73,185,
    182,236,214,106,17,168,179,116,48,3,251,93,238,90,126,5,
    61,204,247,22,57,86,103,248,34,185,91,63,47,92,213,154,
    70,173,23,58,88,123,217,78,16,196,46,34,134,174,138,31,
    102,194,162,77,45,146,125,142,246,171,27,39,77,244,28,229,
    216,253,68,106,217,31,96,33,201,205,76,114,209,123,202,36,
    153,186,31,146,91,176,28,145,155,247,50,24,56,144,61,25,
    72,212,171,44,128,81,157,93,251,113,134,74,226,9,222,65,
    249,254,134,223,3,219,158,237,145,249,24,87,219,161,101,233,
    241,146,142,204,26,30,154,23,248,183,94,169,11,174,88,166,
    30,192,245,94,127,12,249,93,101,146,90,156,25,23,11,116,
    240,91,109,94,37,112,134,160,27,248,150,19,234,39,55,126,
    58,178,110,82,243,113,14,48,14,113,125,161,229,27,162,190,
    179,99,54,224,114,138,171,39,107,131,250,201,65,225,131,141,
    92,161,13,173,208,11,53,148,201,166,124,251,204,65,15,25,
    204,162,174,127,39,167,239,74,117,237,68,142,87,174,159,141,
    95,61,121,60,112,84,63,78,194,83,22,120,25,169,228,121,
    140,77,28,240,235,220,113,142,238,36,85,50,60,182,186,140,
    118,67,251,75,25,198,201,228,203,216,147,234,230,212,248,231,
    89,61,169,89,236,183,146,10,79,14,178,227,75,28,229,61,
    69,81,28,212,143,178,124,143,58,62,254,28,195,113,71,122,
    25,207,201,218,50,207,102,28,58,216,127,242,42,93,63,95,
    101,121,106,220,75,104,214,133,169,222,84,38,190,19,248,223,
    74,181,58,109,0,207,75,44,39,26,200,92,247,147,23,220,
    12,157,239,246,175,31,103,227,132,211,124,144,95,239,79,0,
    19,213,143,229,14,46,50,75,167,54,71,118,34,7,62,250,
    52,97,33,101,238,236,16,163,40,83,87,166,83,75,121,230,
    76,179,128,190,3,234,23,177,167,244,191,149,180,135,13,189,
    24,215,23,235,162,102,208,255,41,76,209,16,77,81,17,11,
    205,186,89,175,213,171,38,102,10,234,89,17,13,179,222,88,
    16,31,254,93,195,124,210,48,214,154,117,241,31,216,81,218,
    225,
};

EmbeddedPython embedded_m5_internal_param_NSGigE(
    "m5/internal/param_NSGigE.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_NSGigE.py",
    "m5.internal.param_NSGigE",
    data_m5_internal_param_NSGigE,
    2369,
    7574);

} // anonymous namespace
