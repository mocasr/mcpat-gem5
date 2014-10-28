#include "sim/init.hh"

namespace {

const uint8_t data_m5_simulate[] = {
    120,156,197,25,73,111,27,215,249,155,25,146,18,41,82,164,
    22,43,86,156,216,99,199,139,220,216,146,145,196,142,27,184,
    110,98,57,94,144,88,54,70,110,228,178,113,216,17,231,73,
    28,114,22,106,230,209,146,10,169,1,162,160,77,47,65,219,
    83,123,43,122,236,165,151,2,65,143,5,90,20,62,4,232,
    57,215,246,214,31,208,67,15,233,247,125,111,30,69,58,81,
    123,169,29,82,28,189,245,219,183,247,166,9,217,199,194,223,
    155,54,64,186,106,0,120,248,103,64,0,80,239,183,13,168,
    27,186,109,66,221,212,109,11,234,150,110,231,160,158,211,237,
    60,212,243,186,93,128,122,65,183,71,160,62,162,219,163,80,
    31,229,182,9,65,17,194,18,212,75,96,80,223,130,96,12,
    194,50,212,43,170,159,131,96,28,194,42,212,171,170,159,231,
    126,13,234,53,236,31,134,250,4,248,22,136,81,104,79,66,
    123,10,188,34,92,202,58,211,224,149,250,157,67,224,141,193,
    165,250,12,225,246,202,240,49,178,116,24,214,1,220,89,16,
    207,131,123,4,188,10,124,140,60,191,0,222,56,55,94,4,
    175,202,141,163,224,213,184,113,12,188,9,110,216,224,77,114,
    227,56,120,83,220,56,1,222,52,55,94,34,104,248,231,29,
    130,143,81,82,39,153,195,25,8,78,65,120,26,234,167,145,
    98,3,150,231,102,81,222,254,151,248,89,154,67,129,131,44,
    224,195,139,27,94,44,85,191,140,143,94,215,115,165,120,251,
    145,136,100,170,70,243,248,88,115,165,27,168,238,40,62,92,
    41,19,207,111,74,223,36,136,111,210,163,15,208,149,113,136,
    83,212,148,126,232,71,235,114,162,63,218,136,226,168,233,54,
    91,56,218,164,13,69,252,17,248,69,50,130,191,155,172,33,
    82,12,64,104,192,174,1,134,52,161,109,65,59,7,123,0,
    187,38,236,152,144,190,66,20,161,182,246,112,58,98,156,237,
    17,154,54,182,142,210,124,123,148,58,215,31,214,96,215,130,
    29,220,91,228,201,141,219,176,114,192,130,146,90,208,134,149,
    29,3,218,99,144,252,147,36,33,43,208,30,135,118,21,104,
    176,6,106,106,207,36,187,192,231,110,14,182,46,0,114,214,
    7,136,246,225,21,72,23,123,134,113,253,225,148,6,62,9,
    59,57,38,117,227,175,8,63,71,166,66,216,144,112,130,56,
    13,73,199,216,254,33,179,13,16,28,130,221,252,1,184,167,
    7,112,23,24,235,12,203,100,4,118,242,208,126,14,118,176,
    129,246,142,102,142,212,152,134,129,157,12,213,202,70,199,200,
    201,195,208,41,65,178,110,224,7,251,15,72,112,179,4,102,
    31,195,243,176,103,161,192,143,64,251,133,255,38,206,23,149,
    180,126,101,28,36,206,163,106,193,31,15,92,112,76,45,248,
    226,192,5,182,90,240,239,3,23,28,87,11,94,48,15,90,
    112,66,45,248,142,185,66,252,188,196,189,29,128,228,51,83,
    158,132,246,41,104,159,134,29,210,20,236,142,66,54,114,6,
    118,70,89,81,91,199,7,65,246,21,57,167,231,55,126,142,
    80,207,66,251,91,180,140,141,240,56,28,64,198,203,138,140,
    63,227,134,115,220,68,37,47,207,145,209,47,177,27,42,135,
    26,193,71,220,149,126,28,165,233,235,52,39,132,103,203,216,
    246,163,84,186,145,244,209,29,109,39,70,31,61,107,175,138,
    181,56,17,118,211,13,2,116,161,193,21,115,103,37,1,219,
    148,20,83,59,98,155,221,75,255,150,201,189,74,216,64,166,
    219,64,148,44,51,234,44,12,228,240,209,117,101,75,245,232,
    17,207,81,120,230,71,250,30,62,22,90,113,40,22,68,232,
    7,219,11,215,69,218,145,113,119,225,154,136,154,173,208,77,
    58,72,201,130,251,218,194,186,8,47,158,71,122,86,3,113,
    254,130,184,124,105,205,109,190,254,202,197,215,154,11,105,210,
    92,232,110,203,86,28,45,132,23,23,82,63,236,5,72,240,
    60,14,81,40,185,18,184,225,170,231,94,125,159,112,129,14,
    34,126,228,97,0,242,137,178,185,243,52,72,129,38,188,232,
    140,244,5,182,218,22,77,153,50,237,36,28,57,134,141,117,
    33,111,179,72,154,194,49,117,232,146,126,179,147,202,73,10,
    98,254,214,205,32,94,117,131,27,137,216,232,33,249,219,188,
    203,19,105,83,68,30,10,50,85,161,202,67,109,220,77,186,
    45,55,186,231,38,110,152,162,59,98,92,140,186,73,188,181,
    157,141,240,190,94,216,109,52,227,104,205,95,103,50,214,252,
    64,48,157,113,234,148,180,92,219,177,31,49,71,113,79,122,
    126,194,205,52,78,164,240,36,217,65,55,193,233,134,31,249,
    76,106,51,136,83,193,176,219,105,28,13,194,166,62,243,128,
    44,102,227,13,55,109,80,12,230,121,162,133,55,222,14,187,
    8,253,237,36,137,19,135,165,89,226,24,175,55,49,26,148,
    16,178,90,102,49,251,114,217,15,151,121,96,156,40,72,4,
    234,102,113,241,46,139,151,215,224,198,8,219,247,16,172,18,
    55,109,98,213,37,98,125,127,39,118,238,37,241,170,184,71,
    12,43,65,234,161,119,253,84,138,72,36,41,115,47,34,50,
    17,6,128,43,69,18,185,1,131,109,162,101,179,164,145,197,
    197,150,104,118,186,4,137,153,238,69,169,72,124,55,240,127,
    36,148,2,83,22,94,16,187,30,17,160,68,22,161,219,52,
    18,145,246,66,161,242,80,183,139,90,229,133,204,38,47,172,
    245,51,28,245,179,44,87,212,105,13,113,74,148,105,162,204,
    140,136,74,200,180,44,101,111,25,201,126,131,20,237,216,180,
    164,168,85,197,186,39,207,241,20,47,8,232,217,184,208,24,
    211,212,15,3,55,9,221,7,132,212,168,153,85,179,96,84,
    172,82,110,10,198,45,252,153,69,227,164,121,194,152,48,42,
    216,178,140,178,113,18,127,51,198,184,81,49,70,204,25,171,
    68,107,140,108,237,208,175,100,21,140,73,163,134,115,19,8,
    21,71,114,77,194,144,203,42,184,187,20,93,126,67,226,64,
    121,5,20,64,218,156,181,85,202,206,66,99,238,137,208,152,
    87,161,241,4,172,160,178,92,118,106,12,159,40,80,74,199,
    148,248,85,127,12,218,101,104,87,212,80,145,178,98,150,61,
    183,14,131,172,42,128,38,160,90,179,88,188,145,194,10,85,
    87,85,222,58,193,249,151,83,237,167,251,49,111,74,151,58,
    108,49,40,186,68,246,186,78,149,2,9,153,135,67,166,235,
    76,235,64,147,205,179,227,220,64,203,203,140,75,138,173,125,
    47,32,251,78,156,83,180,239,4,61,230,233,177,64,16,42,
    236,125,111,227,218,197,64,184,81,6,7,173,84,72,231,85,
    29,236,50,163,165,25,65,22,201,96,181,146,231,114,218,22,
    221,100,93,121,80,103,147,154,206,101,194,242,109,109,100,79,
    219,210,156,91,8,250,23,132,227,48,97,66,147,168,146,177,
    24,133,92,205,154,178,42,102,5,13,169,96,178,97,176,249,
    65,86,213,85,148,97,180,217,42,6,50,143,53,44,40,18,
    117,179,151,220,199,96,189,207,206,83,231,233,29,4,253,59,
    194,97,50,205,156,52,137,48,234,90,68,253,43,216,248,41,
    134,118,131,74,180,159,0,213,164,104,76,153,101,79,113,61,
    122,126,127,100,227,8,172,112,138,167,253,75,44,11,51,131,
    56,69,208,164,146,197,46,12,57,201,207,88,191,131,88,62,
    49,50,7,185,142,54,189,103,100,88,177,48,238,228,32,169,
    195,39,40,206,2,99,85,142,194,46,81,160,16,182,15,185,
    72,171,104,126,135,232,177,152,30,99,128,158,87,137,158,163,
    192,37,193,195,233,12,3,214,6,106,215,123,198,6,31,176,
    134,202,4,178,79,47,113,253,136,217,227,76,55,127,65,25,
    160,161,7,188,240,105,235,44,165,152,123,101,29,243,201,86,
    55,185,250,153,86,94,1,124,182,24,74,119,206,91,125,219,
    122,151,8,163,20,162,18,219,117,34,255,142,27,185,235,34,
    225,176,142,142,167,92,157,93,14,19,79,220,139,36,155,58,
    187,220,253,164,39,36,197,139,166,242,222,193,253,74,10,20,
    127,177,26,107,176,96,48,169,243,17,42,66,100,222,118,3,
    115,134,58,66,177,171,170,214,210,83,206,7,20,31,20,49,
    127,32,76,147,108,215,228,171,39,204,50,6,250,18,166,132,
    154,161,156,203,210,148,57,68,143,115,191,239,117,125,146,159,
    166,235,145,102,126,79,56,72,242,144,175,86,138,70,209,232,
    155,168,169,195,7,5,85,74,33,186,112,229,136,175,140,213,
    80,41,164,146,249,156,178,84,218,168,52,74,154,8,69,184,
    146,248,82,172,186,24,86,204,62,191,207,46,104,174,32,232,
    191,16,142,28,43,98,234,255,202,97,69,113,120,59,122,132,
    165,17,213,52,223,8,139,15,16,244,227,167,197,226,152,142,
    57,14,231,200,111,132,193,27,8,250,243,1,6,97,40,144,
    50,131,30,12,39,57,100,14,195,11,242,167,6,247,56,77,
    96,68,193,240,254,145,9,17,7,83,29,191,251,145,28,227,
    251,205,91,170,238,193,240,173,206,167,6,214,239,122,186,31,
    200,211,151,9,111,191,68,182,195,94,42,241,104,200,199,66,
    60,58,198,145,237,218,84,184,218,234,144,52,207,81,128,252,
    128,206,140,205,254,190,57,18,238,19,117,15,31,23,252,212,
    207,78,81,92,224,222,223,238,10,117,160,32,159,101,147,30,
    72,220,101,14,156,89,117,254,86,16,176,184,84,108,36,98,
    169,154,190,252,172,84,197,212,239,51,248,55,194,86,99,165,
    85,177,128,45,27,37,252,230,49,254,53,181,117,246,239,158,
    122,74,129,59,58,127,210,211,130,53,147,85,247,102,166,58,
    82,26,107,101,104,141,5,51,74,167,59,156,150,247,184,220,
    236,88,92,10,143,104,53,210,220,168,214,100,148,7,214,245,
    128,70,73,148,124,180,20,88,73,218,241,154,45,81,232,246,
    153,83,233,153,121,219,190,147,233,151,199,78,165,118,156,224,
    115,62,189,136,123,150,183,177,244,12,109,55,224,140,99,251,
    145,141,229,42,30,160,236,48,246,196,188,125,71,132,113,178,
    205,29,187,135,210,117,163,117,225,205,243,129,199,169,15,105,
    159,19,135,130,230,252,0,178,244,71,8,245,145,76,129,186,
    131,144,84,82,173,176,222,7,134,149,206,249,124,203,96,24,
    2,97,126,54,170,39,235,109,40,14,247,105,250,130,144,142,
    179,5,28,193,44,120,12,173,160,132,71,152,38,145,70,134,
    91,208,250,255,28,137,199,99,73,50,78,122,190,121,43,82,
    214,192,154,38,11,56,75,213,13,234,76,41,122,235,10,77,
    93,127,248,26,93,3,210,186,28,217,58,174,43,167,15,72,
    112,234,198,207,179,216,10,46,240,214,28,109,221,184,64,127,
    116,62,225,237,147,240,190,73,23,126,116,159,151,135,15,112,
    62,166,251,188,175,155,46,240,244,167,124,93,149,167,187,62,
    42,10,139,116,35,229,229,97,86,89,221,110,9,182,142,25,
    188,245,57,163,191,149,200,203,103,167,43,226,228,95,116,198,
    242,24,99,102,182,180,162,48,176,98,214,200,86,20,250,134,
    141,157,34,116,10,144,92,166,11,89,143,239,28,177,88,221,
    159,86,119,168,233,10,79,143,210,200,240,244,24,79,63,226,
    233,226,87,119,43,175,41,177,188,126,203,139,74,140,84,177,
    135,94,168,215,230,51,76,201,159,120,213,216,19,152,242,26,
    211,99,22,122,121,0,211,198,99,250,91,217,30,167,136,133,
    168,102,119,199,96,37,58,10,57,52,100,186,25,157,52,13,
    131,97,86,104,150,1,26,240,0,235,251,228,180,41,199,181,
    27,71,42,143,145,140,103,134,180,215,174,170,60,118,222,92,
    33,87,175,49,67,99,204,208,47,77,108,144,120,249,52,218,
    65,136,31,153,88,83,234,248,62,61,0,91,30,226,211,42,
    223,51,51,174,227,10,215,236,144,41,180,103,8,35,159,118,
    127,141,232,16,224,99,83,62,55,0,198,27,199,184,66,158,
    157,126,136,102,189,188,233,203,102,203,94,188,247,189,148,226,
    131,107,43,247,156,47,149,108,252,92,219,182,61,177,230,246,
    2,121,206,150,45,63,181,49,2,181,98,207,230,164,155,218,
    110,228,217,234,120,154,226,180,208,123,237,251,184,148,247,175,
    138,150,251,200,199,136,212,116,35,138,81,158,159,146,215,122,
    246,234,182,141,225,129,83,14,109,236,136,237,205,56,241,108,
    140,78,8,44,146,188,249,12,189,124,32,68,103,232,190,115,
    141,78,215,231,236,205,150,143,228,134,254,122,139,131,158,39,
    82,63,33,144,182,191,134,153,46,144,126,55,16,188,59,238,
    138,196,229,107,83,155,238,243,252,132,112,185,118,86,137,103,
    164,34,66,97,175,199,76,70,76,240,112,211,90,156,132,184,
    192,143,24,76,170,238,2,69,38,144,165,88,138,55,152,63,
    45,138,208,69,86,148,16,137,147,112,32,166,82,160,238,75,
    133,8,148,45,87,177,230,107,162,148,40,104,21,105,96,222,
    190,45,25,32,242,138,28,7,189,180,133,205,192,166,151,34,
    130,245,131,43,21,89,131,90,122,43,147,90,250,6,119,245,
    172,125,254,188,189,156,197,64,175,191,67,173,104,118,123,116,
    239,70,75,230,226,192,107,96,255,156,29,137,77,106,156,181,
    101,15,165,152,42,224,239,100,170,249,10,18,173,29,130,113,
    79,137,77,203,119,65,25,197,19,2,216,108,137,40,19,21,
    10,92,81,194,225,183,63,70,100,165,233,113,28,226,164,214,
    117,83,180,49,59,32,66,81,61,108,128,107,152,168,72,171,
    252,110,41,165,188,193,124,112,145,131,182,38,50,218,9,53,
    49,134,82,61,135,108,225,191,179,124,2,76,233,37,23,38,
    73,132,20,81,9,148,165,210,107,110,42,72,1,4,111,73,
    108,146,50,236,185,83,233,89,90,167,164,174,168,192,245,8,
    84,233,42,61,246,53,139,117,170,117,145,200,71,98,158,107,
    177,161,53,94,44,20,234,180,215,165,187,88,158,193,188,228,
    197,143,68,50,143,169,132,201,35,199,58,213,183,17,116,155,
    181,53,145,8,42,230,246,205,11,41,32,102,238,42,122,6,
    200,29,196,61,52,251,63,112,211,205,77,118,90,24,50,99,
    218,187,52,119,88,87,5,156,185,73,26,92,220,57,120,34,
    246,67,85,1,170,11,117,146,63,23,119,1,18,108,169,58,
    128,43,117,5,179,65,48,185,178,224,91,157,76,242,170,170,
    24,235,27,131,240,238,246,36,103,237,140,214,134,116,59,162,
    65,132,114,109,209,24,0,150,242,241,28,237,116,191,12,229,
    202,84,65,66,56,142,171,107,143,46,223,207,59,133,126,165,
    74,199,19,71,232,74,149,112,220,69,20,55,146,56,84,149,
    42,179,216,212,196,102,94,195,248,180,249,243,4,238,89,165,
    203,121,190,0,167,234,134,95,66,40,191,226,118,230,90,188,
    51,27,87,100,103,19,234,157,65,54,211,32,137,213,134,37,
    214,136,176,250,115,58,207,180,86,86,2,92,68,234,254,65,
    189,22,225,60,84,48,70,205,170,65,183,5,39,176,86,58,
    134,85,83,153,46,127,249,10,152,126,101,195,122,226,57,137,
    207,130,49,49,48,54,109,90,124,177,60,193,87,208,83,198,
    120,110,50,71,181,87,197,172,153,83,60,170,238,140,166,248,
    136,192,41,3,207,14,253,23,5,1,217,153,254,212,128,187,
    95,126,168,190,85,152,59,67,58,187,70,143,89,125,206,192,
    8,180,127,40,225,171,88,182,16,140,142,234,85,134,51,169,
    203,93,190,14,10,47,206,247,164,31,204,211,155,145,77,186,
    33,200,222,150,76,168,57,253,98,98,158,95,149,56,124,33,
    114,73,123,6,109,228,215,75,142,165,205,230,142,187,69,55,
    151,78,66,163,252,74,138,40,86,86,24,235,125,75,113,36,
    156,171,52,68,55,191,14,33,116,190,75,15,186,110,226,171,
    200,129,3,22,155,45,25,168,243,129,54,96,231,199,144,213,
    221,125,242,232,157,137,243,225,144,201,60,155,151,118,104,176,
    189,64,92,165,0,148,94,161,98,26,181,94,182,248,153,125,
    107,104,59,248,179,10,104,9,21,252,214,242,229,91,5,180,
    146,226,108,49,95,156,41,230,240,107,21,75,197,82,245,251,
    255,1,127,113,176,34,
};

EmbeddedPython embedded_m5_simulate(
    "m5/simulate.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/python/m5/simulate.py",
    "m5.simulate",
    data_m5_simulate,
    3622,
    8719);

} // anonymous namespace
