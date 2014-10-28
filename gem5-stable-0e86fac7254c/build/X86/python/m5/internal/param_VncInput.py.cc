#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_VncInput[] = {
    120,156,205,88,91,111,220,198,21,62,67,114,41,113,165,181,
    36,203,178,124,107,196,162,16,186,13,98,109,234,90,182,209,
    24,70,154,58,64,220,7,37,229,182,145,179,77,195,82,228,
    236,46,87,92,114,65,142,236,108,32,189,68,70,210,183,254,
    136,162,15,253,31,253,95,237,57,103,72,106,87,174,209,0,
    9,186,145,150,131,225,112,230,204,185,124,231,50,19,66,249,
    215,192,231,125,23,160,232,9,128,8,127,2,18,128,177,0,
    124,23,82,64,180,9,199,13,200,239,67,212,128,87,0,61,
    3,164,1,231,216,49,225,79,6,164,171,188,198,134,196,228,
    17,1,211,38,72,11,122,13,56,76,55,192,146,54,28,55,
    33,255,11,8,33,82,1,207,163,37,136,150,225,21,82,199,
    142,195,4,151,33,106,114,199,129,104,133,59,77,152,174,131,
    92,129,30,18,95,130,94,11,73,189,141,164,174,48,169,127,
    17,169,8,191,92,131,168,69,211,145,151,207,104,166,69,51,
    121,143,43,76,101,173,226,108,29,122,27,85,255,234,76,127,
    147,251,107,32,55,96,116,13,70,91,48,186,14,125,20,120,
    189,166,186,13,210,132,209,13,232,221,0,137,191,109,56,71,
    157,68,27,51,43,110,242,138,171,245,138,91,188,226,54,244,
    110,131,196,223,45,189,194,134,110,123,11,245,28,255,27,255,
    218,168,103,80,171,216,188,144,121,17,103,169,31,167,253,44,
    54,232,187,77,13,89,37,164,102,169,52,207,111,201,60,255,
    4,182,77,100,148,230,57,3,36,44,72,150,196,128,51,238,
    156,25,48,109,195,169,128,145,5,145,9,167,184,77,131,24,
    24,8,56,55,224,115,147,38,156,97,107,161,66,223,2,75,
    105,219,140,88,161,154,210,18,156,53,224,180,1,221,231,167,
    6,13,28,59,144,255,3,190,186,195,68,151,153,168,1,167,
    216,90,112,110,193,153,13,135,56,9,135,70,14,137,47,158,
    159,162,164,56,210,109,91,200,237,193,140,184,36,74,20,231,
    105,48,150,106,13,251,254,36,200,131,177,255,105,26,62,75,
    39,39,170,221,172,38,101,197,222,36,80,67,143,87,153,164,
    142,241,68,49,181,44,149,106,5,59,253,56,141,252,113,22,
    157,36,82,45,19,41,191,31,39,210,247,249,227,179,241,36,
    203,213,135,121,158,229,30,105,148,7,147,44,168,87,144,62,
    195,36,43,100,155,118,227,109,60,34,175,104,118,127,194,20,
    137,1,230,148,22,71,178,8,243,120,162,208,80,154,34,205,
    38,106,109,50,17,55,197,49,54,157,97,54,150,29,57,142,
    147,105,231,169,44,142,85,54,233,124,32,211,112,56,14,242,
    227,56,29,116,130,251,157,129,28,239,223,45,84,112,148,200,
    187,239,202,71,15,250,65,248,240,222,254,253,176,115,116,18,
    39,81,231,249,163,7,157,201,84,13,179,180,51,222,239,196,
    169,146,168,176,164,51,175,170,61,156,113,149,54,125,25,15,
    252,152,197,245,135,50,153,200,188,69,163,183,136,33,177,46,
    86,133,45,76,209,22,45,236,53,240,49,197,29,99,69,28,
    196,36,112,72,74,32,168,153,21,184,254,14,108,70,68,193,
    177,1,249,29,130,206,8,127,130,108,141,0,234,210,55,131,
    191,253,158,52,165,71,71,38,1,66,15,158,50,220,16,119,
    56,243,49,33,32,5,198,76,3,70,54,104,44,33,4,53,
    184,242,41,181,56,157,200,24,72,220,130,226,111,243,20,210,
    117,64,75,160,75,227,208,117,220,234,107,134,103,183,77,140,
    31,48,78,212,48,46,178,151,41,91,131,250,236,80,93,212,
    201,39,211,143,143,70,50,84,197,14,14,124,150,157,184,97,
    144,166,153,114,131,40,114,3,165,242,248,232,68,201,194,85,
    153,187,91,180,29,50,255,70,5,181,154,222,116,82,65,139,
    96,128,208,210,47,81,28,42,124,217,228,23,214,127,33,21,
    194,100,152,69,5,142,19,137,129,84,30,49,169,174,96,243,
    155,106,59,198,99,219,174,208,83,200,164,175,154,12,196,160,
    40,124,222,142,198,25,115,180,250,69,144,156,72,69,243,17,
    44,10,119,165,174,222,104,129,168,187,65,114,87,98,147,42,
    253,52,75,163,41,114,29,135,187,196,208,13,198,222,42,16,
    250,182,16,121,75,216,218,208,66,36,174,27,33,9,104,149,
    184,99,204,93,39,117,0,227,64,148,97,5,241,119,142,193,
    167,109,112,244,96,73,217,65,93,234,209,98,143,224,237,221,
    166,230,14,53,63,169,148,177,24,141,180,46,107,228,30,113,
    97,176,26,66,179,20,184,118,178,131,57,39,187,121,225,100,
    24,58,187,228,44,6,185,212,133,179,152,164,146,252,73,233,
    25,228,134,8,14,252,60,227,15,172,40,111,157,20,96,87,
    80,246,8,159,179,32,29,204,128,212,35,27,49,66,189,155,
    111,82,234,206,143,69,169,3,173,212,125,226,98,181,196,86,
    139,49,213,20,33,1,195,40,85,204,234,125,138,157,233,54,
    169,119,86,177,219,152,26,15,211,22,231,56,206,147,92,33,
    232,88,163,245,173,59,22,161,176,111,194,245,50,119,21,20,
    26,38,121,246,229,212,205,250,174,130,138,135,199,187,197,222,
    110,241,30,6,15,247,9,135,35,29,62,116,128,200,229,36,
    199,64,224,240,139,118,110,159,29,221,47,211,15,26,128,234,
    0,182,27,171,157,99,89,161,114,10,97,11,212,121,179,214,
    57,137,240,30,177,208,100,133,155,176,141,79,83,48,159,126,
    198,145,149,107,19,254,138,207,7,164,122,146,94,2,85,140,
    94,87,75,193,2,146,168,222,207,231,208,180,16,241,188,183,
    113,191,167,149,107,218,80,99,135,30,147,4,32,111,249,22,
    184,150,19,240,13,16,78,16,14,165,127,177,39,211,67,230,
    222,164,233,95,0,7,173,255,146,46,13,237,167,70,25,214,
    208,141,139,135,60,85,103,207,223,193,95,103,34,222,185,9,
    130,50,157,89,86,107,179,153,206,170,61,155,1,246,157,178,
    153,53,31,2,200,100,195,160,160,105,218,217,205,218,217,47,
    130,103,93,103,97,4,91,12,246,150,245,230,62,241,249,236,
    2,121,148,70,110,139,77,99,6,79,239,80,115,183,134,146,
    168,198,254,239,44,239,92,142,251,51,153,208,215,177,246,35,
    226,203,98,73,214,108,150,177,34,80,187,79,163,114,159,123,
    181,251,72,14,254,175,184,210,167,214,32,100,156,27,2,143,
    86,88,12,209,169,198,2,217,128,158,77,142,198,165,172,40,
    253,80,84,97,144,194,231,92,102,97,61,29,104,13,214,224,
    208,118,167,230,203,5,134,29,82,203,227,36,24,31,69,193,
    147,79,137,1,226,34,172,60,211,168,68,90,159,21,137,188,
    74,188,73,42,126,125,183,18,237,197,2,67,206,47,201,226,
    149,72,236,96,81,22,114,156,249,195,80,186,99,57,62,194,
    195,223,48,158,184,253,36,24,176,21,205,82,228,143,43,145,
    21,195,224,114,182,47,40,152,29,100,110,152,165,152,55,78,
    66,149,229,110,36,241,80,36,35,247,174,203,73,199,141,11,
    55,56,194,175,65,168,180,151,204,187,63,23,155,65,62,40,
    184,174,60,126,73,221,5,163,192,199,67,112,140,197,245,97,
    165,50,125,60,171,51,8,215,211,218,229,48,41,227,97,71,
    77,117,112,124,64,205,47,168,217,133,197,39,154,14,238,247,
    71,218,152,20,107,99,252,114,4,115,94,205,249,132,86,20,
    175,71,128,163,239,18,1,244,181,74,25,7,108,154,41,151,
    232,84,78,173,67,169,166,215,172,46,105,86,120,112,149,110,
    68,34,155,71,174,80,196,88,250,190,17,131,125,107,193,94,
    245,231,31,52,80,120,247,126,68,18,121,191,130,178,24,121,
    83,144,16,179,226,182,116,144,24,137,234,124,48,43,43,223,
    85,108,189,134,61,63,204,101,160,164,182,230,173,133,202,206,
    209,71,179,227,215,54,173,4,172,79,77,15,107,33,207,185,
    46,155,94,155,169,221,217,196,226,16,139,40,172,239,79,89,
    15,190,161,75,252,11,28,91,181,58,232,222,36,149,47,253,
    121,149,232,10,158,152,9,38,19,153,70,23,213,57,127,89,
    32,56,40,184,5,112,81,18,97,41,126,13,159,215,93,152,
    68,156,145,152,141,219,168,157,118,177,102,102,136,247,43,3,
    183,233,246,239,34,174,123,100,94,29,201,235,32,238,253,186,
    54,152,251,58,126,251,57,93,201,132,193,68,157,228,146,142,
    136,255,123,18,22,105,124,170,156,27,101,229,178,131,68,50,
    145,8,193,121,18,138,120,42,15,208,145,196,92,154,77,241,
    44,199,167,32,124,79,124,127,209,169,230,17,238,247,57,109,
    76,249,133,82,141,141,201,102,75,56,150,35,56,211,95,186,
    80,214,156,82,221,175,171,253,105,225,113,196,89,171,117,205,
    55,159,85,110,101,175,163,115,236,1,170,76,95,167,146,154,
    189,159,82,243,179,202,92,236,52,250,80,200,103,44,125,242,
    69,15,227,50,132,171,14,111,143,198,233,114,97,188,191,87,
    137,179,167,197,233,198,99,125,87,199,151,175,227,125,181,113,
    105,90,148,7,216,223,186,52,90,200,60,14,146,248,43,125,
    71,87,13,243,181,242,101,186,196,79,253,198,217,121,46,36,
    178,121,115,57,136,11,164,193,4,234,201,101,104,120,84,113,
    127,9,96,179,11,23,140,4,93,69,235,251,133,39,116,99,
    93,60,198,134,238,224,156,53,71,216,6,221,253,154,162,41,
    90,194,18,171,45,199,116,108,167,97,34,90,104,100,83,52,
    77,167,185,42,232,127,7,145,211,52,118,86,28,241,31,228,
    37,238,57,
};

EmbeddedPython embedded_m5_internal_param_VncInput(
    "m5/internal/param_VncInput.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_VncInput.py",
    "m5.internal.param_VncInput",
    data_m5_internal_param_VncInput,
    2131,
    6684);

} // anonymous namespace
