#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_System[] = {
    120,156,205,90,109,115,219,198,17,94,128,47,18,105,209,146,
    172,23,191,201,22,109,71,49,227,198,162,227,88,182,27,187,
    106,108,43,77,147,153,40,41,212,25,59,106,26,4,2,142,
    34,248,2,112,128,147,109,102,164,47,81,166,237,135,206,244,
    71,116,250,161,95,250,43,250,135,250,11,218,221,61,30,8,
    146,146,172,118,50,165,37,241,230,184,183,183,119,187,251,236,
    238,29,32,23,122,63,57,252,124,92,6,136,255,97,0,120,
    248,103,64,11,160,109,192,182,1,134,48,192,155,131,102,14,
    162,123,224,229,224,71,128,109,19,132,9,135,216,201,192,239,
    76,8,166,120,78,30,90,25,166,24,208,45,130,200,194,118,
    14,158,7,179,144,21,121,104,22,33,250,14,12,195,8,12,
    120,225,77,128,55,9,63,162,116,236,20,88,224,36,120,69,
    238,20,192,59,195,157,34,116,103,64,156,129,109,20,62,1,
    219,37,20,117,11,69,157,101,81,255,36,81,30,142,204,131,
    87,34,118,220,203,215,196,153,37,78,94,227,44,75,153,214,
    59,155,129,237,89,221,63,151,234,207,165,250,243,169,254,66,
    170,191,152,234,159,79,245,47,164,250,23,83,253,75,220,159,
    6,49,11,141,203,208,88,130,198,21,168,161,17,103,146,157,
    94,5,145,129,198,50,108,47,131,192,191,171,112,136,118,246,
    102,83,51,202,60,227,92,50,227,26,207,184,14,219,215,65,
    224,223,53,53,35,15,91,149,5,244,157,255,111,252,169,160,
    239,64,78,97,243,82,68,177,31,6,182,31,212,66,223,164,
    241,60,53,228,105,151,154,137,158,203,159,145,203,255,14,236,
    111,207,236,185,252,0,80,176,65,186,180,76,56,224,206,129,
    9,221,10,236,27,208,200,130,151,129,125,92,38,71,27,216,
    53,224,208,132,111,50,196,112,128,109,22,157,116,21,178,82,
    249,187,193,78,82,146,38,224,32,7,251,57,216,122,177,111,
    18,161,89,128,232,111,240,253,18,11,157,100,161,38,236,99,
    155,133,195,44,28,228,225,57,50,33,169,81,32,245,141,23,
    251,168,41,82,182,42,89,220,237,102,74,93,82,197,243,163,
    192,105,11,89,194,190,221,113,34,167,109,111,117,99,41,218,
    149,162,102,9,227,213,142,35,235,22,207,201,144,49,218,29,
    201,178,194,64,200,51,216,169,249,129,103,183,67,111,175,37,
    228,36,9,178,107,126,75,216,54,15,126,214,238,132,145,252,
    36,138,194,200,34,123,50,177,21,58,201,12,178,166,219,10,
    99,81,161,213,120,25,139,196,75,226,174,117,88,34,109,128,
    247,73,147,61,17,187,145,223,145,232,38,37,145,184,73,90,
    133,28,196,77,76,14,171,214,195,182,168,138,182,223,234,86,
    55,68,220,148,97,167,250,84,4,110,189,237,68,77,63,216,
    173,58,247,170,187,162,189,118,59,150,206,78,75,220,190,35,
    30,222,175,57,238,131,187,107,247,220,234,206,158,223,242,170,
    47,30,222,175,118,186,178,30,6,213,246,90,213,15,164,64,
    115,181,170,105,67,173,226,248,57,90,242,149,191,107,251,172,
    172,93,23,173,142,136,200,166,241,37,218,142,49,99,76,25,
    121,35,99,84,140,18,246,114,248,201,24,75,230,25,99,211,
    39,117,93,50,1,193,44,163,129,245,87,96,23,34,2,154,
    38,68,75,4,155,6,254,25,228,103,4,207,22,141,153,60,
    246,27,178,147,162,54,50,4,6,69,220,103,168,33,230,144,
    243,49,121,63,0,198,75,14,26,121,80,56,66,248,41,96,
    69,93,106,145,157,196,152,40,60,11,241,95,6,37,4,51,
    128,126,192,20,129,164,69,92,234,7,134,230,86,133,54,190,
    201,40,145,117,63,14,95,5,236,11,234,115,48,109,161,77,
    190,234,126,185,211,16,174,140,151,145,240,117,184,87,118,157,
    32,8,101,217,241,188,178,35,101,228,239,236,73,17,151,101,
    88,94,137,43,5,114,254,172,6,90,34,175,219,209,192,34,
    16,32,176,212,23,207,119,37,126,153,227,47,108,255,88,72,
    4,73,61,244,98,164,147,136,93,33,45,218,164,60,139,205,
    19,189,28,163,177,146,215,216,137,69,171,38,139,12,67,39,
    142,109,94,142,232,140,56,154,253,210,105,237,9,73,252,8,
    21,137,171,82,87,45,52,54,204,93,32,173,181,210,100,72,
    59,8,3,175,139,123,246,221,21,218,206,5,70,222,20,16,
    246,22,16,119,19,216,230,161,132,56,156,49,93,82,47,219,
    67,29,35,110,145,140,1,140,2,163,151,80,16,125,135,152,
    118,42,38,231,13,214,147,131,179,76,61,154,108,17,184,173,
    203,212,44,81,115,69,155,98,28,246,40,13,219,227,46,237,
    193,100,35,184,153,158,186,73,128,109,14,4,216,197,126,128,
    97,202,220,162,64,49,41,156,250,129,146,33,131,68,235,189,
    168,160,16,68,96,224,112,42,22,216,76,214,12,169,159,215,
    48,182,8,155,105,128,238,166,0,106,145,135,24,157,214,197,
    227,76,186,252,118,152,116,87,153,116,141,246,48,213,195,85,
    137,241,84,52,92,2,133,217,51,48,27,119,3,59,221,243,
    100,220,180,89,207,99,65,124,30,148,184,178,113,117,228,179,
    134,202,50,202,218,170,147,37,4,214,50,176,216,171,88,49,
    37,133,78,20,190,238,150,195,90,89,130,222,195,227,149,120,
    117,37,126,132,105,163,188,206,137,72,37,14,149,26,34,209,
    137,48,5,20,248,139,10,107,155,67,220,238,149,29,52,63,
    85,127,246,26,27,157,179,88,44,35,74,94,99,179,120,49,
    177,56,41,240,136,54,80,100,115,103,224,60,126,138,6,239,
    210,14,57,163,242,121,132,71,241,243,148,12,79,186,11,160,
    147,167,181,165,116,96,245,72,81,235,230,0,146,198,160,156,
    117,11,87,219,208,65,153,135,4,55,244,201,208,246,41,78,
    254,8,124,122,51,224,15,64,24,65,40,244,34,139,99,152,
    62,228,234,57,98,255,22,56,89,29,81,36,77,21,161,102,
    47,157,97,0,199,15,152,85,213,204,207,225,79,169,76,119,
    152,1,131,234,91,166,119,62,75,215,183,108,18,211,12,174,
    83,213,176,236,96,240,147,195,234,78,76,108,42,204,51,73,
    152,247,147,102,114,182,194,220,53,14,220,77,170,165,109,218,
    229,103,125,212,81,241,184,108,204,153,41,44,189,79,205,237,
    4,70,134,166,253,159,55,188,60,156,237,83,213,207,86,25,
    246,215,180,171,44,235,49,157,231,138,173,166,39,97,147,211,
    97,179,145,132,141,224,132,255,35,159,234,169,53,9,19,135,
    166,129,87,51,60,252,208,173,40,11,34,7,219,121,125,155,
    155,160,91,139,186,133,97,200,145,175,25,214,250,195,233,144,
    210,232,64,125,97,171,109,42,123,38,64,81,24,160,230,245,
    216,210,15,193,224,113,203,105,239,120,206,250,239,105,121,218,
    131,171,99,212,212,10,205,164,21,162,248,50,142,211,137,191,
    222,209,138,189,28,91,234,249,0,87,75,20,226,64,243,66,
    151,243,205,111,235,162,220,22,237,29,188,246,213,253,78,185,
    214,114,118,217,131,153,158,194,95,106,133,37,131,98,184,222,
    199,148,212,54,195,178,27,6,88,59,246,92,25,70,101,79,
    224,133,72,120,229,219,101,46,60,101,63,46,59,59,56,234,
    184,82,197,203,96,26,224,163,166,19,237,198,140,209,230,43,
    234,142,21,1,54,94,126,125,60,88,127,155,32,64,195,57,
    65,64,73,25,164,97,232,211,80,218,253,124,39,155,79,226,
    141,14,15,95,136,118,24,117,191,8,61,161,44,112,9,198,
    124,172,25,216,211,119,3,138,154,61,239,127,154,242,188,82,
    20,161,254,231,55,232,26,15,232,154,28,46,172,123,227,86,
    120,96,99,142,86,88,93,184,146,243,1,223,146,84,90,197,
    3,23,94,97,101,87,21,191,251,212,188,71,13,93,45,172,
    135,212,124,4,227,62,80,84,113,181,111,160,87,173,242,88,
    169,10,120,185,41,24,234,234,201,92,95,209,140,120,52,227,
    255,203,56,69,198,87,143,225,122,121,63,79,156,98,130,158,
    184,80,91,160,67,197,118,81,19,207,112,59,197,196,146,38,
    158,229,118,154,137,51,154,56,203,237,57,38,206,105,226,60,
    183,11,76,92,212,196,243,220,94,96,226,69,77,188,196,237,
    101,38,46,105,226,21,110,175,50,113,89,19,203,220,94,99,
    226,117,77,188,193,237,59,76,92,209,196,119,185,189,201,196,
    138,38,190,199,237,45,38,254,76,19,223,231,246,54,19,87,
    53,177,202,237,29,38,126,160,137,119,185,253,144,137,247,52,
    113,141,219,251,76,124,160,137,15,185,253,57,19,63,210,196,
    71,220,62,102,226,47,52,113,157,219,95,50,241,99,77,124,
    194,237,83,38,62,211,85,121,131,137,159,192,246,175,116,121,
    254,244,39,41,207,92,202,198,90,196,106,240,83,86,101,235,
    238,91,163,143,245,33,244,110,0,199,85,228,255,178,0,205,
    13,37,1,219,141,132,35,223,134,250,67,101,94,109,166,126,
    100,225,97,5,31,36,10,30,242,69,168,59,159,186,40,179,
    115,141,231,120,107,193,203,244,62,219,192,54,213,125,186,143,
    223,108,98,10,66,70,32,94,217,105,115,168,203,50,109,197,
    233,116,68,224,165,106,213,236,56,65,65,149,230,64,231,116,
    160,7,165,48,143,159,209,176,37,245,82,218,178,91,115,73,
    160,142,211,193,12,236,31,180,107,43,116,15,233,151,88,139,
    46,245,170,168,246,235,233,122,226,170,229,97,212,242,147,114,
    188,103,70,118,219,137,155,116,150,122,35,15,150,122,46,228,
    131,100,121,126,120,90,19,119,47,90,44,242,184,49,18,197,
    167,82,254,42,203,35,49,229,184,117,97,183,240,184,107,199,
    254,247,130,101,189,145,137,132,78,19,232,7,233,242,226,240,
    68,204,2,244,180,70,137,61,126,148,228,209,185,85,19,228,
    59,195,172,175,194,168,105,35,200,109,183,217,145,182,27,238,
    5,146,101,158,138,145,196,83,50,57,98,76,94,25,22,176,
    19,134,210,14,99,74,90,49,47,113,50,7,201,166,211,74,
    154,120,164,166,97,228,139,248,88,59,168,209,148,29,152,32,
    223,61,82,189,29,177,235,7,195,150,56,37,43,45,177,160,
    109,49,60,42,47,15,11,137,187,237,157,176,197,47,131,104,
    145,147,198,73,50,133,124,159,52,202,206,215,18,21,108,71,
    138,75,141,107,113,125,210,168,225,48,5,123,201,222,142,31,
    213,102,213,132,81,151,6,123,109,101,47,223,59,198,233,3,
    28,218,233,105,162,92,57,210,1,110,103,47,30,118,213,233,
    56,105,145,121,237,169,161,193,81,203,81,232,68,78,176,219,
    195,216,73,227,218,178,125,146,188,121,18,120,58,123,168,159,
    45,94,251,106,247,167,229,165,101,22,135,144,214,31,150,75,
    71,230,192,176,86,163,167,88,180,206,137,12,36,60,121,13,
    169,104,39,228,2,222,207,105,146,70,138,113,36,105,244,199,
    70,209,161,64,64,215,71,84,239,72,252,12,112,104,252,164,
    137,39,6,240,144,2,167,100,61,34,214,83,74,220,29,22,
    194,47,62,99,117,11,230,190,27,6,129,112,233,45,109,106,
    237,255,97,26,237,227,26,78,123,35,39,159,29,216,234,158,
    192,48,21,3,231,29,62,4,245,94,194,120,136,217,40,236,
    218,182,122,154,142,223,91,182,61,222,171,236,99,224,11,41,
    196,244,160,128,174,178,116,145,93,56,229,111,33,91,48,248,
    121,210,208,63,44,40,109,110,128,126,182,220,141,45,162,88,
    211,201,113,131,223,173,235,155,62,157,76,248,141,201,166,211,
    86,175,72,249,85,159,69,198,183,110,232,19,11,159,7,212,
    11,8,126,162,175,222,177,224,241,146,31,118,241,179,45,107,
    149,232,148,68,218,107,171,90,229,85,65,249,174,255,12,130,
    95,239,183,215,216,181,105,182,39,189,71,101,138,211,126,41,
    232,153,26,31,42,210,92,202,126,131,188,35,43,42,38,28,
    84,111,160,249,224,52,58,254,172,21,186,77,225,245,120,174,
    28,207,179,17,182,29,164,31,189,202,150,175,87,153,29,26,
    247,34,154,181,48,68,141,69,228,59,45,58,246,44,13,27,
    0,79,108,22,37,86,173,251,36,215,49,53,202,7,167,97,
    189,200,3,201,55,126,42,146,186,253,48,228,35,12,95,252,
    18,241,244,132,181,119,19,32,236,141,214,191,244,180,177,198,
    134,122,42,173,222,218,173,83,214,142,63,199,134,222,106,23,
    166,11,70,222,164,255,165,200,24,69,163,100,100,141,169,82,
    33,83,200,23,114,25,140,31,162,204,25,197,76,161,56,101,
    140,254,46,231,11,70,209,92,190,90,48,254,3,78,239,124,
    142,
};

EmbeddedPython embedded_m5_internal_param_System(
    "m5/internal/param_System.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_System.py",
    "m5.internal.param_System",
    data_m5_internal_param_System,
    2817,
    9674);

} // anonymous namespace
