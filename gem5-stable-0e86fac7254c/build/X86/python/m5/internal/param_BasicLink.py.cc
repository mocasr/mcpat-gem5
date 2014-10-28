#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BasicLink[] = {
    120,156,205,88,255,111,227,72,21,127,99,59,105,147,54,109,
    186,253,182,219,22,106,4,21,225,196,54,199,178,221,93,113,
    171,21,44,139,196,33,212,59,92,160,123,225,192,184,246,36,
    113,234,216,145,61,221,94,78,237,47,116,5,252,198,223,128,
    16,63,240,127,240,127,113,239,189,177,221,52,219,61,173,4,
    34,219,198,163,241,120,230,205,251,242,121,95,102,124,200,255,
    42,248,252,216,6,200,58,2,32,192,159,128,8,96,40,0,
    223,133,20,16,172,194,105,5,210,135,16,84,224,53,64,199,
    0,105,192,21,118,76,248,157,1,241,34,175,169,66,100,242,
    136,128,113,29,164,5,157,10,28,199,43,96,201,42,156,214,
    33,253,35,8,33,98,1,47,131,57,8,230,225,53,82,199,
    78,141,9,206,67,80,231,78,13,130,5,238,212,97,220,4,
    185,0,29,36,62,7,157,6,146,250,0,73,45,49,169,127,
    19,169,0,191,172,65,208,160,233,200,203,103,52,211,162,153,
    188,199,18,83,89,46,56,107,66,103,165,232,223,153,232,175,
    114,127,25,228,10,12,214,96,176,14,131,13,232,162,192,205,
    146,234,38,72,19,6,119,161,115,23,36,254,54,225,10,117,
    18,172,76,172,184,199,43,238,148,43,182,120,197,54,116,182,
    65,226,111,75,175,168,194,81,107,29,245,28,254,7,255,90,
    168,103,80,139,216,188,146,105,22,38,177,27,198,221,36,52,
    232,123,149,26,178,138,79,205,92,110,158,159,146,121,254,5,
    108,155,192,200,205,115,9,72,88,144,44,145,1,151,220,185,
    52,96,220,130,11,1,3,11,2,19,46,112,155,10,49,208,
    19,112,101,192,231,38,77,184,196,214,66,133,126,19,44,165,
    109,51,96,133,106,74,115,112,89,129,139,10,28,189,188,48,
    104,224,180,6,233,63,225,203,29,38,58,207,68,13,184,192,
    214,130,43,11,46,171,112,140,147,112,104,80,35,241,197,203,
    11,148,20,71,142,90,22,114,123,56,33,46,137,18,132,105,
    236,13,165,106,98,223,29,121,169,55,116,159,123,89,232,255,
    50,140,79,91,245,98,86,146,237,143,60,213,119,120,153,73,
    250,24,142,20,147,75,98,169,22,176,211,13,227,192,29,38,
    193,89,36,213,60,209,114,187,97,36,93,151,63,126,60,28,
    37,169,250,89,154,38,169,67,42,229,193,40,241,202,21,164,
    80,63,74,50,217,162,221,120,27,135,200,43,154,221,29,49,
    69,98,128,89,165,197,129,204,252,52,28,41,180,148,166,72,
    179,137,90,139,108,196,77,134,38,129,118,63,25,202,182,28,
    134,209,184,253,66,102,167,42,25,181,159,203,216,239,15,189,
    244,52,140,123,109,239,97,187,39,135,7,247,51,229,157,68,
    242,254,135,242,201,163,174,231,63,126,112,240,208,111,159,156,
    133,81,208,126,249,228,81,123,52,86,253,36,110,15,15,218,
    97,172,36,106,44,106,79,233,106,31,167,220,161,93,207,195,
    158,27,178,188,110,95,70,35,153,54,104,116,139,56,18,77,
    177,40,170,194,20,45,209,192,94,5,31,83,236,24,11,226,
    48,36,137,125,210,2,129,205,44,224,245,15,96,67,34,14,
    78,13,72,119,8,60,3,252,9,178,54,66,232,136,190,25,
    252,237,87,164,42,61,58,48,9,18,122,240,130,1,135,200,
    195,153,79,9,3,49,48,106,42,48,168,130,70,19,130,80,
    195,43,29,83,139,211,137,140,129,196,45,200,254,118,147,66,
    220,4,52,5,58,53,14,109,224,86,127,98,128,30,181,136,
    241,67,6,138,234,135,89,114,30,179,57,168,207,46,117,132,
    58,249,116,252,201,201,64,250,42,219,197,129,207,146,51,219,
    247,226,56,81,182,23,4,182,167,84,26,158,156,41,153,217,
    42,177,247,178,86,141,236,191,82,96,173,164,55,30,21,216,
    34,28,32,182,244,75,16,250,10,95,86,249,133,245,159,73,
    133,56,233,39,65,134,227,68,162,39,149,67,76,170,37,108,
    126,82,108,199,128,108,85,11,248,100,50,234,170,58,35,209,
    203,50,151,183,163,113,6,29,173,126,229,69,103,82,209,124,
    68,139,194,93,169,171,55,154,37,236,238,146,224,133,220,164,
    75,55,78,226,96,140,108,135,254,30,113,116,151,193,183,8,
    4,191,117,132,222,28,182,85,104,32,20,155,134,79,18,90,
    57,240,24,116,27,164,15,96,32,136,60,178,32,0,175,48,
    254,180,12,14,32,44,42,187,168,77,61,90,236,16,190,157,
    109,106,118,168,249,70,161,141,25,169,164,49,173,146,7,196,
    134,193,122,240,205,92,226,210,205,14,111,184,217,189,107,55,
    195,240,121,68,238,98,144,83,93,187,139,73,58,73,159,229,
    190,65,142,136,240,192,207,19,30,193,154,114,40,168,50,190,
    24,204,14,33,116,18,166,189,9,152,58,100,36,198,168,115,
    239,109,90,221,125,111,180,218,211,90,61,32,54,22,115,116,
    53,24,85,117,225,19,52,140,92,199,172,223,23,216,25,111,
    146,126,39,53,187,137,249,241,56,110,112,162,227,100,201,101,
    130,14,55,90,225,186,99,17,14,187,38,108,228,9,44,163,
    232,48,74,147,47,198,118,210,181,21,20,60,60,221,203,246,
    247,178,143,48,126,216,207,56,34,233,8,162,99,68,42,71,
    41,198,130,26,191,104,255,118,217,215,221,60,5,161,5,168,
    24,96,195,177,222,57,156,101,42,165,40,54,75,165,215,75,
    165,147,12,31,17,15,117,214,184,9,155,248,212,5,51,234,
    38,28,93,185,66,225,175,248,60,39,221,147,248,18,168,110,
    116,142,180,24,44,33,201,234,124,247,6,158,102,35,159,243,
    1,110,248,162,240,206,42,148,232,161,199,36,9,200,97,254,
    2,92,210,9,248,51,16,82,16,16,185,139,177,51,211,67,
    6,95,165,233,127,0,14,92,183,228,76,67,187,170,145,135,
    54,244,228,236,49,79,213,41,244,23,240,215,137,168,119,101,
    130,160,116,103,230,69,219,100,186,179,74,231,102,136,189,83,
    74,179,110,70,1,178,89,223,203,104,154,246,119,179,244,247,
    235,0,90,86,91,24,196,102,132,190,121,189,187,75,140,126,
    124,141,61,202,37,219,98,213,152,64,212,247,169,185,95,130,
    73,20,99,255,127,158,119,167,131,255,68,62,116,117,192,253,
    57,49,102,177,40,203,85,142,10,37,133,210,133,42,133,11,
    61,40,93,72,114,10,120,205,53,63,181,6,129,227,202,16,
    120,200,194,162,136,206,55,22,200,10,116,170,228,108,92,211,
    138,220,23,69,17,11,41,134,222,200,47,172,169,67,173,195,
    18,31,218,244,212,124,49,203,216,67,214,127,26,121,195,147,
    192,123,246,91,226,128,216,240,11,239,52,10,153,154,147,50,
    145,103,137,183,137,197,175,31,22,178,189,154,101,220,249,1,
    110,88,202,196,94,22,36,62,7,155,95,247,165,61,148,195,
    19,60,8,246,195,145,221,141,188,30,219,209,204,101,254,164,
    144,89,49,16,166,179,126,70,17,237,48,177,253,36,198,244,
    113,230,171,36,181,3,137,231,35,25,216,247,109,206,61,118,
    152,217,222,9,126,245,124,165,61,229,102,12,224,178,211,75,
    123,25,87,152,167,231,212,157,53,14,92,60,17,135,88,103,
    31,23,58,211,71,181,50,145,112,105,173,221,14,147,51,158,
    123,212,88,135,200,71,212,124,143,154,61,120,15,242,77,27,
    55,252,13,237,76,170,173,98,20,171,9,181,60,25,0,62,
    165,53,217,155,97,224,239,239,18,6,244,45,75,30,12,170,
    52,83,206,209,33,157,218,26,165,156,78,189,24,92,224,118,
    145,7,27,197,224,18,183,203,60,216,44,6,87,184,189,195,
    131,171,197,149,207,26,15,174,67,103,131,238,77,104,100,147,
    162,206,220,127,27,117,216,61,103,237,152,191,255,159,6,27,
    231,193,251,36,146,243,67,200,171,154,183,5,26,49,41,111,
    67,7,154,129,40,206,26,147,194,242,213,199,198,155,232,117,
    253,84,122,74,106,131,110,205,86,122,142,97,154,31,183,52,
    107,33,98,121,6,123,92,138,121,197,37,222,120,109,226,32,
    192,86,22,199,88,143,225,97,225,130,53,225,26,250,188,112,
    141,101,171,84,8,233,54,150,231,238,148,82,244,121,128,184,
    241,70,35,25,7,215,181,62,127,153,37,64,40,70,6,112,
    93,94,97,97,191,134,207,155,142,108,233,137,133,204,108,223,
    74,233,186,51,182,52,227,60,44,108,220,226,19,109,153,31,
    28,178,176,206,8,101,50,112,126,84,218,108,251,22,16,71,
    8,153,216,31,211,105,243,107,191,99,153,199,5,117,254,174,
    190,115,203,220,19,47,14,206,195,64,245,93,148,14,83,50,
    19,125,167,137,68,157,216,158,254,160,182,110,89,125,46,195,
    94,95,49,241,175,249,76,36,9,135,250,245,118,217,176,235,
    134,193,219,101,207,191,151,178,235,119,70,18,71,132,64,70,
    18,61,110,106,157,190,231,213,105,58,144,88,129,36,99,60,
    8,243,9,18,223,35,215,157,121,126,126,130,27,126,78,59,
    175,129,206,207,85,204,208,235,249,127,205,170,9,46,147,166,
    110,230,53,195,116,114,210,231,165,113,230,112,168,93,46,241,
    197,55,200,69,93,194,193,134,170,254,67,111,168,111,1,249,
    42,203,249,22,53,223,46,32,202,38,210,231,106,62,165,234,
    219,3,12,44,92,195,113,201,230,236,23,216,29,30,236,23,
    82,237,107,169,142,194,161,190,242,228,75,236,225,129,90,153,
    154,22,164,30,246,215,167,70,51,153,134,94,20,126,169,175,
    58,139,97,46,81,166,233,18,63,229,27,23,54,55,115,1,
    155,57,149,189,48,67,34,76,161,156,157,71,68,82,182,218,
    185,5,94,147,43,103,13,9,125,12,209,215,52,207,232,242,
    63,123,138,13,93,102,214,150,107,162,106,208,45,186,41,234,
    162,33,44,177,216,168,153,181,106,173,98,34,108,104,100,85,
    212,205,90,125,81,208,255,46,130,167,110,236,46,213,196,87,
    164,37,79,106,
};

EmbeddedPython embedded_m5_internal_param_BasicLink(
    "m5/internal/param_BasicLink.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_BasicLink.py",
    "m5.internal.param_BasicLink",
    data_m5_internal_param_BasicLink,
    2212,
    7016);

} // anonymous namespace
