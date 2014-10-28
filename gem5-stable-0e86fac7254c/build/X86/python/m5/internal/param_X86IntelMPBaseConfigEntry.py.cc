#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_X86IntelMPBaseConfigEntry[] = {
    120,156,205,88,109,115,220,72,17,238,145,180,114,180,246,198,
    235,56,137,243,6,94,234,202,176,92,17,239,93,136,147,80,
    151,74,113,73,174,138,80,224,4,45,224,220,114,32,100,105,
    118,87,107,189,108,73,227,228,246,202,254,130,83,192,55,126,
    4,197,7,254,7,255,139,235,238,145,228,181,15,115,71,65,
    21,107,175,166,70,163,81,171,95,158,126,166,103,2,40,255,
    26,120,253,184,3,80,12,4,64,136,63,1,49,64,34,0,
    239,133,20,16,174,195,65,3,242,251,16,54,224,29,192,192,
    0,105,192,9,118,76,248,141,1,233,10,191,99,67,108,242,
    136,128,89,19,164,5,131,6,236,165,107,96,73,27,14,154,
    144,255,30,132,16,169,128,215,225,18,132,151,224,29,74,199,
    142,195,2,47,65,216,228,142,3,225,50,119,154,48,107,131,
    92,134,1,10,95,130,65,11,69,189,143,162,46,179,168,127,
    144,168,16,159,92,133,176,69,211,81,151,79,105,166,69,51,
    249,27,151,89,202,106,165,89,27,6,107,85,255,202,92,127,
    157,251,171,32,215,96,114,21,38,215,96,114,29,134,104,112,
    187,150,186,1,210,132,201,13,24,220,0,137,191,13,56,65,
    159,132,107,115,111,220,228,55,174,212,111,220,226,55,110,195,
    224,54,72,252,221,210,111,216,208,239,94,67,63,71,255,196,
    191,46,250,25,212,10,54,111,100,94,68,89,234,69,233,48,
    139,12,122,110,83,67,81,9,168,89,42,195,243,140,194,243,
    119,224,216,132,70,25,158,99,64,193,130,108,137,13,56,230,
    206,177,1,179,46,28,9,152,88,16,154,112,132,159,105,144,
    2,35,1,39,6,124,102,210,132,99,108,45,116,232,183,193,
    82,58,54,19,118,168,150,180,4,199,13,56,106,64,255,245,
    145,65,3,7,14,228,127,131,47,238,176,208,75,44,212,128,
    35,108,45,56,177,224,216,134,61,156,132,67,19,135,204,23,
    175,143,208,82,28,233,119,45,212,118,119,206,92,50,37,140,
    242,212,79,164,66,107,192,155,250,185,159,120,175,31,61,120,
    145,42,25,255,252,213,83,191,144,207,178,116,24,141,62,73,
    85,62,235,54,171,183,178,98,123,234,171,177,203,98,76,242,
    79,50,85,44,62,75,165,90,198,206,48,74,67,47,201,194,
    195,88,170,75,36,219,27,70,177,244,60,126,248,34,153,102,
    185,250,36,207,179,220,37,23,243,96,156,249,245,27,228,224,
    32,206,10,217,165,175,241,103,92,18,175,104,246,112,202,18,
    73,1,86,157,94,14,101,17,228,209,84,97,228,180,68,154,
    77,210,186,20,51,110,10,116,61,244,198,89,34,123,50,137,
    226,89,239,185,44,14,84,54,237,61,149,105,48,78,252,252,
    32,74,71,61,255,126,111,36,147,157,187,133,242,247,99,121,
    247,3,249,232,193,208,15,30,222,219,185,31,244,246,15,163,
    56,236,161,123,122,211,153,26,103,105,47,217,233,69,232,41,
    244,96,220,251,26,223,109,227,43,87,72,139,183,209,200,139,
    216,126,111,44,227,169,204,91,52,122,139,52,20,109,177,34,
    108,97,138,174,104,97,175,129,151,41,238,24,203,98,55,34,
    15,4,228,21,2,163,89,193,239,175,192,129,70,156,28,24,
    144,223,33,112,77,240,39,8,13,8,177,62,61,51,248,217,
    47,200,117,122,116,98,18,100,244,224,17,3,18,145,137,51,
    31,19,70,82,96,84,53,96,98,131,70,27,130,84,195,47,
    159,81,139,211,73,140,129,194,45,40,254,114,86,66,218,6,
    12,13,38,61,14,93,199,79,253,129,1,220,239,146,226,187,
    12,28,53,142,138,236,109,202,225,161,62,167,92,31,125,242,
    106,246,114,127,34,3,85,108,226,192,167,217,97,39,240,211,
    52,83,29,63,12,59,190,82,121,180,127,168,100,209,81,89,
    103,171,232,58,132,135,181,10,123,181,188,217,180,194,26,225,
    2,177,166,111,194,40,80,120,179,206,55,236,255,66,42,196,
    205,56,11,11,28,39,17,35,169,92,82,82,93,198,230,227,
    234,115,12,208,174,93,193,169,144,241,80,53,25,153,126,81,
    120,252,57,26,103,16,210,219,111,252,248,80,42,154,143,232,
    81,248,85,234,234,15,45,18,12,111,144,35,42,63,144,111,
    189,52,75,195,25,154,17,5,91,164,225,13,6,227,10,16,
    28,175,33,20,151,176,181,161,133,208,108,27,1,89,108,149,
    64,100,16,94,39,255,0,3,67,148,76,132,128,60,65,190,
    234,26,76,56,108,58,167,48,145,12,179,144,75,120,119,111,
    83,115,135,154,111,85,222,89,16,23,181,206,187,232,30,169,
    101,176,95,2,179,244,64,157,134,187,103,210,240,230,105,26,
    34,253,246,41,157,12,74,186,211,116,50,201,71,249,147,50,
    119,40,81,17,62,248,120,46,99,216,115,110,155,60,98,87,
    96,119,9,193,243,48,30,205,193,216,165,160,49,134,221,155,
    23,121,121,115,97,189,60,210,94,222,33,181,86,74,244,181,
    24,117,77,17,16,116,140,210,231,236,239,231,216,153,109,144,
    191,231,61,189,129,235,237,94,218,226,133,147,23,95,46,59,
    52,61,233,0,232,142,69,56,29,154,112,189,92,16,11,98,
    147,105,158,125,62,235,100,195,142,130,74,135,199,91,197,246,
    86,241,17,242,77,231,9,51,152,102,28,205,41,185,156,230,
    200,29,14,223,104,62,240,152,27,188,114,9,195,136,80,113,
    193,129,228,56,48,253,21,42,39,214,91,164,32,52,235,32,
    144,77,31,145,78,77,142,128,9,27,120,53,5,43,238,101,
    204,206,92,1,241,83,188,158,82,44,200,29,18,168,46,117,
    251,218,44,182,152,108,119,191,119,6,111,139,97,175,251,62,
    42,240,188,202,102,27,106,116,209,101,146,69,148,96,127,2,
    46,33,5,252,17,8,73,8,152,50,37,57,249,233,34,64,
    172,211,244,223,1,19,223,191,88,131,13,157,218,70,73,141,
    152,249,197,67,158,170,151,228,159,194,159,231,88,243,196,4,
    65,203,167,89,22,137,243,203,167,85,147,1,67,240,27,45,
    145,214,89,214,160,24,142,253,130,166,105,126,48,107,126,56,
    37,224,186,154,67,210,91,140,104,113,182,161,54,30,41,254,
    226,20,155,180,54,221,22,235,198,28,226,126,64,205,221,26,
    108,162,26,251,255,219,176,121,126,49,153,91,111,61,77,224,
    63,33,69,45,54,109,213,86,164,54,73,236,127,236,61,123,
    249,179,151,187,125,175,20,94,221,158,251,72,157,149,141,42,
    43,239,213,89,41,121,213,121,199,219,20,106,13,194,215,137,
    33,112,95,136,117,26,109,201,44,144,13,24,216,148,191,92,
    118,139,50,189,69,69,183,68,211,103,150,52,118,238,174,118,
    123,13,49,141,30,106,62,95,160,116,103,0,61,142,253,100,
    63,244,159,252,154,52,34,181,130,42,225,141,202,198,246,188,
    141,148,172,226,34,51,249,246,131,202,214,55,11,100,171,251,
    33,42,80,219,200,137,28,102,1,243,217,47,199,178,147,200,
    100,31,247,182,227,104,218,25,198,254,136,227,108,150,62,120,
    89,249,64,49,80,206,23,34,5,145,230,110,214,9,178,20,
    87,176,195,64,101,121,39,148,184,197,147,97,231,110,135,151,
    191,78,84,116,252,125,124,234,7,74,39,223,89,154,225,74,
    217,207,71,5,23,197,7,111,169,187,64,190,43,151,245,40,
    141,112,171,176,87,249,80,239,62,235,181,140,119,7,58,147,
    177,94,192,173,155,154,105,86,126,64,205,247,169,217,130,5,
    92,242,122,168,192,175,72,19,114,189,141,196,233,8,38,165,
    11,95,122,69,50,139,175,210,202,243,111,66,43,250,160,169,
    36,23,27,228,18,29,82,208,57,82,163,60,71,66,162,177,
    255,91,162,225,12,92,36,31,83,238,253,246,127,202,47,238,
    189,69,54,209,253,33,148,181,210,69,220,98,192,220,22,233,
    161,230,22,29,87,172,168,102,87,231,234,114,118,135,216,195,
    242,7,107,247,35,174,234,61,67,151,239,167,32,224,130,134,
    143,118,222,195,38,149,111,47,86,86,195,87,151,235,132,52,
    127,58,149,105,120,90,138,243,147,69,242,44,241,135,7,167,
    213,13,214,221,87,241,250,106,134,144,19,230,124,194,153,208,
    168,115,226,214,130,153,245,161,214,182,228,210,229,51,92,234,
    18,34,52,123,214,196,169,121,148,99,252,93,122,85,198,82,
    201,175,11,179,106,67,189,33,14,37,46,64,217,12,183,98,
    188,103,193,251,216,243,22,142,142,31,161,2,159,85,209,38,
    58,182,133,99,57,130,215,202,115,39,206,90,109,170,208,117,
    93,62,43,92,78,190,213,218,81,124,18,90,45,70,156,101,
    180,39,221,245,19,125,122,197,71,46,238,119,168,121,175,242,
    53,231,132,222,207,241,110,72,239,98,49,163,120,33,231,117,
    219,221,166,113,58,57,72,118,182,43,219,182,181,109,253,40,
    209,71,117,124,24,155,236,168,181,115,211,194,220,199,254,181,
    115,163,133,204,35,63,142,190,208,71,116,213,176,34,75,206,
    203,37,125,234,59,94,189,212,143,224,63,43,137,25,15,185,
    28,69,5,126,135,63,82,11,44,217,129,162,80,87,218,255,
    6,95,103,36,45,26,150,116,121,171,79,28,158,80,130,21,
    143,177,161,115,59,103,213,17,182,65,7,200,166,104,138,150,
    176,196,74,203,49,29,219,105,152,136,55,26,89,23,77,211,
    105,174,8,250,223,68,252,53,141,77,199,17,95,2,70,140,
    51,212,
};

EmbeddedPython embedded_m5_internal_param_X86IntelMPBaseConfigEntry(
    "m5/internal/param_X86IntelMPBaseConfigEntry.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_X86IntelMPBaseConfigEntry.py",
    "m5.internal.param_X86IntelMPBaseConfigEntry",
    data_m5_internal_param_X86IntelMPBaseConfigEntry,
    2098,
    6787);

} // anonymous namespace
