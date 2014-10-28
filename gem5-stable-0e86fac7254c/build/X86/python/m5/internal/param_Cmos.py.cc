#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_Cmos[] = {
    120,156,221,89,123,111,219,200,17,159,37,37,217,146,173,88,
    142,95,121,56,177,114,57,55,234,161,177,174,105,156,28,112,
    65,208,60,10,52,135,59,39,39,21,77,206,45,202,210,228,
    74,166,44,146,2,185,182,79,87,187,64,235,224,218,255,250,
    33,138,254,209,239,209,143,211,239,208,206,204,146,52,37,219,
    184,3,218,70,119,181,197,197,238,236,107,102,246,55,143,37,
    29,72,254,138,248,252,180,14,16,79,25,0,46,254,4,244,
    1,124,1,219,2,132,20,224,46,193,94,17,162,251,224,22,
    225,45,192,182,1,210,128,19,172,152,240,43,3,130,89,158,
    83,130,190,201,20,1,195,10,200,2,108,23,225,117,48,15,
    5,89,130,189,10,68,191,5,33,68,32,224,141,59,5,238,
    52,188,197,213,177,82,230,5,167,193,173,112,165,12,238,12,
    87,42,48,172,129,156,129,109,92,124,10,182,171,184,212,7,
    184,212,37,94,234,31,180,148,139,61,203,224,86,105,56,242,
    242,5,141,44,208,72,222,227,18,175,50,151,114,86,131,237,
    249,180,126,57,87,95,200,213,23,185,62,71,187,118,80,230,
    90,182,240,18,72,19,122,203,176,189,12,18,127,75,112,130,
    106,73,38,173,228,22,184,146,171,95,205,213,175,229,234,215,
    115,245,213,92,253,70,174,126,51,87,95,203,213,235,92,159,
    7,57,15,189,91,208,123,15,122,183,153,211,203,25,167,239,
    51,167,235,176,189,14,18,127,239,107,78,23,114,51,126,192,
    51,22,179,25,119,120,70,3,182,27,32,241,119,71,207,40,
    65,187,177,130,160,240,254,133,127,13,129,53,53,139,197,129,
    140,98,47,12,44,47,232,132,158,65,253,37,42,8,66,14,
    21,83,9,150,158,17,150,254,14,12,36,215,72,176,116,12,
    184,176,32,89,250,6,28,115,229,216,128,97,3,142,4,244,
    10,224,154,112,132,219,20,137,129,174,128,19,3,126,109,210,
    128,99,44,11,120,250,55,161,160,52,144,122,124,250,122,165,
    41,56,46,194,81,17,218,111,142,12,34,236,149,33,250,27,
    124,181,202,139,78,243,162,6,28,97,89,128,147,2,28,151,
    224,53,14,66,82,175,76,226,139,55,71,40,41,82,218,141,
    2,114,187,149,19,151,68,113,189,40,176,125,169,102,176,110,
    13,236,200,246,173,103,126,24,55,42,233,128,48,222,24,216,
    106,183,197,51,76,82,133,63,80,188,82,24,232,105,29,47,
    112,45,63,116,247,251,82,77,211,50,86,199,235,75,203,226,
    206,23,254,32,140,212,207,162,40,140,90,164,77,38,246,67,
    59,155,65,186,116,250,97,44,27,180,27,111,211,162,229,21,
    141,238,12,120,69,98,32,227,210,149,177,19,121,3,133,135,
    164,87,164,209,180,90,131,142,135,139,184,139,69,115,55,244,
    101,83,250,94,127,216,124,46,227,61,21,14,154,79,101,224,
    236,250,118,180,231,5,221,166,125,191,217,149,254,230,221,88,
    217,59,125,121,247,67,249,209,131,142,237,60,188,183,121,223,
    105,238,236,123,125,183,249,230,163,7,205,193,80,237,134,65,
    211,223,108,122,129,146,168,172,126,243,84,77,27,216,123,153,
    54,60,244,186,150,199,162,90,187,178,63,144,81,149,168,215,
    136,25,81,19,179,162,36,76,209,16,85,172,21,241,49,197,
    170,49,35,182,60,18,214,33,5,16,196,204,20,84,127,5,
    62,62,60,253,61,3,162,85,130,76,15,127,130,206,24,129,
    211,166,62,131,251,62,39,45,105,106,207,36,32,104,226,17,
    195,12,241,134,35,31,209,201,7,192,88,41,66,175,4,26,
    67,8,61,13,170,104,72,37,14,167,101,12,92,188,0,241,
    95,70,87,8,106,128,167,128,126,7,73,203,184,213,31,25,
    150,237,6,49,190,197,24,81,187,94,28,30,6,124,18,84,
    103,67,106,163,78,94,13,95,238,244,164,163,226,53,36,124,
    17,238,215,29,59,8,66,85,183,93,183,110,43,21,121,59,
    251,74,198,117,21,214,215,227,70,153,142,126,62,133,89,182,
    222,112,144,194,138,32,128,176,210,13,215,115,20,54,22,184,
    193,250,143,165,66,136,236,134,110,140,116,90,162,43,85,139,
    152,84,151,176,120,146,110,199,88,108,148,82,228,196,178,223,
    81,21,6,161,29,199,22,111,71,116,198,27,205,62,176,251,
    251,82,209,120,4,138,194,93,169,170,55,154,16,226,174,144,
    204,169,200,164,70,43,8,3,119,136,28,123,206,58,49,115,
    133,113,55,11,132,188,37,68,221,20,150,37,168,34,10,107,
    134,67,194,21,18,204,49,222,150,73,21,192,24,16,137,43,
    65,236,157,160,195,105,24,236,49,88,74,54,204,58,213,104,
    114,139,160,221,186,78,197,42,21,55,82,69,188,123,109,84,
    199,181,113,143,56,48,88,5,142,153,8,155,25,215,214,136,
    113,93,61,53,46,116,149,109,50,18,131,76,233,212,72,76,
    82,71,244,56,177,8,50,63,4,5,118,231,236,128,149,212,
    170,145,240,165,20,194,45,194,101,30,156,221,28,56,91,116,
    62,140,204,214,213,139,20,186,246,93,80,104,87,43,116,147,
    56,152,77,48,85,101,44,85,132,67,128,48,18,245,178,106,
    159,99,101,184,66,170,205,43,117,5,195,224,235,160,202,241,
    140,99,34,167,46,218,191,104,93,235,74,129,208,215,49,97,
    57,137,83,49,185,131,65,20,126,57,172,135,157,186,130,148,
    135,71,235,241,198,122,252,49,58,140,250,99,118,65,218,101,
    104,167,16,201,65,132,198,95,230,134,54,104,139,141,219,74,
    194,13,42,127,137,148,106,164,42,103,255,21,171,136,220,214,
    132,244,93,201,244,77,236,127,76,219,87,88,217,38,172,224,
    83,17,204,163,21,178,39,229,28,132,123,241,121,74,106,39,
    201,37,80,26,219,106,107,9,88,56,18,179,117,103,4,69,
    239,92,180,214,7,184,215,243,212,28,75,144,97,134,30,147,
    152,39,11,249,19,112,190,38,224,107,32,124,32,12,18,155,
    98,235,165,135,142,121,129,134,255,6,216,73,157,19,26,13,
    109,155,70,226,198,208,116,227,135,60,84,71,202,79,224,207,
    57,15,119,98,130,160,168,102,38,25,89,62,170,21,50,107,
    102,96,125,171,200,85,24,53,123,58,174,93,59,166,97,218,
    192,205,204,192,79,157,101,150,79,161,215,122,247,152,155,214,
    27,91,196,227,139,83,196,81,200,184,46,22,140,28,142,126,
    68,197,221,12,66,34,165,189,83,118,215,198,125,124,46,226,
    89,218,175,254,156,120,42,176,20,115,37,78,30,149,159,25,
    75,49,53,150,127,102,198,34,217,197,191,229,252,157,74,131,
    176,112,98,8,188,221,233,123,29,14,192,91,93,111,138,203,
    105,66,20,222,220,18,98,133,203,25,38,206,166,196,42,151,
    151,152,56,151,18,107,92,206,51,241,114,74,92,224,114,145,
    137,75,41,113,153,203,21,38,94,73,137,87,185,188,198,196,
    235,41,113,149,203,27,76,188,73,137,25,93,3,215,152,136,
    215,167,91,233,13,246,61,114,8,20,145,216,236,210,135,93,
    53,185,248,145,200,199,231,186,165,79,60,3,178,198,40,21,
    95,78,200,53,18,76,31,245,109,127,199,181,31,191,166,205,
    137,3,39,245,32,70,42,78,45,47,14,89,191,184,72,34,
    110,126,152,138,117,48,33,183,248,99,220,43,19,135,157,128,
    27,58,236,11,127,177,43,235,190,244,119,240,18,186,235,13,
    234,157,190,221,205,156,102,150,195,60,4,78,216,244,209,161,
    199,28,46,230,162,41,75,47,94,163,123,195,136,123,196,177,
    216,50,116,208,61,61,103,118,88,108,35,132,143,64,30,90,
    202,215,113,148,218,246,96,32,3,247,52,70,114,207,4,17,
    96,225,101,220,195,100,223,206,57,42,12,140,139,248,156,133,
    54,137,150,147,148,253,85,49,243,92,215,38,38,9,31,122,
    39,61,244,198,109,200,199,104,190,161,104,7,135,41,15,94,
    31,213,80,135,160,31,82,177,158,157,86,149,221,26,30,22,
    250,65,135,210,179,49,10,122,71,62,65,221,204,117,250,94,
    48,54,156,40,185,225,216,100,38,116,231,110,184,31,241,248,
    49,18,77,152,210,36,106,231,186,125,215,30,142,205,96,82,
    110,6,181,243,12,132,103,88,10,71,89,10,243,44,13,165,
    61,206,18,147,114,27,80,59,215,125,120,150,165,195,49,150,
    168,157,95,240,236,140,225,216,12,106,183,30,80,157,146,76,
    87,246,165,146,56,78,213,32,75,245,93,137,249,100,56,196,
    204,147,243,54,108,247,45,107,146,89,88,19,247,250,37,36,
    239,35,74,24,224,75,152,195,143,254,151,11,101,193,111,50,
    112,193,23,237,39,214,179,151,159,190,220,106,243,10,103,131,
    40,93,176,190,49,136,38,97,169,0,178,8,219,37,10,69,
    252,166,231,63,9,69,236,184,39,104,189,251,240,223,140,64,
    173,123,223,17,105,90,63,129,36,19,191,40,250,152,137,168,
    47,83,81,21,159,248,248,29,56,166,116,127,43,172,59,97,
    128,22,176,239,168,48,170,187,178,227,5,210,173,223,173,243,
    117,172,238,197,117,123,7,123,109,71,233,51,29,77,144,249,
    213,139,29,117,99,118,2,123,135,84,157,144,142,200,200,15,
    50,127,61,53,226,175,91,20,130,181,135,126,48,226,166,39,
    105,230,109,125,48,16,151,18,51,71,147,166,104,73,253,175,
    104,228,57,166,124,248,109,76,89,231,195,137,65,151,56,11,
    157,162,148,152,202,50,103,161,149,148,56,195,229,44,19,171,
    105,34,122,137,137,115,176,93,163,87,252,68,153,39,127,48,
    245,125,247,7,71,255,87,254,32,147,230,155,253,129,200,139,
    90,133,52,27,77,94,144,229,229,228,172,101,126,4,132,150,
    19,73,91,201,73,231,99,236,96,52,43,191,207,206,241,127,
    154,106,83,82,65,169,246,169,42,52,12,54,51,24,76,56,
    217,102,95,246,7,248,190,39,217,95,167,199,217,160,132,230,
    92,167,125,154,86,191,201,142,103,121,20,165,184,129,53,72,
    178,230,11,186,210,180,48,105,243,235,222,220,48,229,249,146,
    167,159,71,167,185,252,121,3,27,58,159,164,115,79,242,201,
    28,66,62,39,254,90,48,217,200,66,201,227,239,32,113,107,
    58,129,44,103,105,35,7,239,177,47,165,154,79,210,178,126,
    197,53,140,91,236,89,230,50,109,243,103,189,244,170,195,86,
    70,249,244,150,237,235,239,51,252,165,161,117,139,138,219,233,
    129,177,197,234,183,160,252,98,81,191,230,69,139,226,204,130,
    19,137,214,6,209,105,154,191,185,145,10,179,161,133,161,204,
    54,80,109,188,182,56,242,21,246,25,60,74,93,63,119,112,
    219,243,245,151,43,62,150,124,191,27,217,88,95,26,163,198,
    50,242,236,190,247,149,228,100,91,145,156,116,7,195,235,64,
    36,187,94,140,163,84,253,220,141,158,218,177,231,188,242,194,
    231,242,192,115,228,5,220,156,246,95,57,159,219,33,238,224,
    159,153,44,131,125,223,250,76,250,97,52,252,44,116,229,25,
    189,60,73,18,49,61,196,58,144,148,177,93,192,231,232,216,
    11,248,196,206,68,107,107,231,246,63,235,135,206,158,116,147,
    49,55,46,30,243,60,244,73,203,171,227,12,187,110,212,178,
    131,174,76,121,157,214,214,199,189,106,145,32,117,158,82,201,
    241,142,146,116,174,68,76,158,189,239,140,158,218,226,153,185,
    137,97,146,77,168,149,81,203,206,207,156,160,189,234,215,102,
    250,131,199,99,250,100,30,147,151,163,143,129,229,185,178,40,
    25,244,1,218,20,21,81,21,5,49,91,45,155,229,82,185,
    104,162,77,19,101,65,84,204,114,101,86,232,255,229,249,178,
    168,24,105,43,255,191,86,160,158,181,217,178,248,55,50,77,
    26,114,
};

EmbeddedPython embedded_m5_internal_param_Cmos(
    "m5/internal/param_Cmos.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_Cmos.py",
    "m5.internal.param_Cmos",
    data_m5_internal_param_Cmos,
    2610,
    9058);

} // anonymous namespace
