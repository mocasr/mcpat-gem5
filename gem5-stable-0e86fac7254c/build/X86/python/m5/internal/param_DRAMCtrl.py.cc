#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_DRAMCtrl[] = {
    120,156,205,90,91,119,219,198,17,94,128,23,153,180,100,75,
    150,101,249,46,58,137,27,198,141,197,196,177,108,55,113,221,
    200,82,210,248,166,40,160,83,57,202,5,129,128,37,9,10,
    4,88,96,101,135,57,242,75,149,211,203,75,251,35,122,250,
    208,151,254,138,254,175,118,102,22,11,129,36,144,40,167,57,
    101,108,113,206,226,219,193,236,206,117,119,1,216,44,254,87,
    130,223,251,53,198,162,127,105,140,57,240,167,49,143,177,158,
    198,182,53,166,113,141,57,243,108,183,196,194,155,204,41,177,
    239,24,219,214,25,215,217,1,52,10,236,115,157,249,211,116,
    79,153,121,5,66,52,54,168,50,94,100,219,37,182,229,207,
    177,34,47,179,221,42,11,191,102,154,166,249,26,123,230,76,
    49,231,24,251,14,164,67,163,66,2,143,49,167,74,141,10,
    115,142,83,163,202,6,179,140,31,103,219,32,124,138,109,207,
    128,168,107,32,234,4,137,250,55,138,114,160,231,52,115,102,
    144,29,230,242,25,114,22,145,147,198,56,65,82,78,170,153,
    205,178,237,57,213,62,149,106,207,167,218,167,83,237,133,84,
    251,76,170,189,152,106,159,77,181,207,165,218,231,169,125,146,
    241,57,214,189,192,186,23,89,247,18,107,129,17,103,147,153,
    94,102,188,192,186,75,108,123,137,113,248,187,204,14,192,206,
    206,92,234,142,26,221,113,42,185,227,10,221,241,10,219,126,
    133,113,248,187,34,239,40,179,102,125,1,124,231,254,7,254,
    213,193,119,76,76,3,121,206,195,200,13,124,211,245,91,129,
    171,99,127,25,9,122,218,70,50,21,187,124,13,93,254,79,
    70,254,118,244,216,229,47,25,8,214,80,23,79,103,47,169,
    241,82,103,131,58,219,215,88,183,200,156,2,219,135,97,74,
    56,129,182,198,14,116,246,69,1,25,94,2,45,130,147,46,
    179,162,144,254,238,146,147,164,164,41,246,178,196,246,75,172,
    249,108,95,71,96,183,194,194,127,176,111,47,146,208,99,36,
    84,103,251,64,139,236,160,200,94,150,217,22,48,1,212,173,
    160,250,218,179,125,208,20,144,102,189,8,179,221,72,169,139,
    170,56,110,232,91,61,46,78,66,219,236,91,161,213,51,215,
    141,213,39,107,34,244,234,85,197,20,68,203,125,75,116,12,
    186,171,128,230,232,245,5,73,11,124,46,142,67,163,229,250,
    142,217,11,156,61,143,139,99,40,202,108,185,30,55,77,234,
    124,208,235,7,161,248,32,12,131,208,64,139,18,232,5,86,
    114,7,218,211,246,130,136,215,113,52,26,198,64,241,2,185,
    91,125,146,136,19,160,153,226,205,14,143,236,208,237,11,112,
    148,148,136,220,40,173,142,46,34,18,237,2,105,116,130,30,
    111,240,158,235,13,26,235,60,218,21,65,191,113,159,251,118,
    167,103,133,187,174,223,110,88,55,27,109,222,91,185,30,9,
    107,199,227,215,223,226,119,110,181,44,251,246,141,149,155,118,
    99,103,207,245,156,198,179,59,183,26,253,129,232,4,126,163,
    183,210,112,125,193,193,96,94,99,216,84,203,192,113,10,7,
    125,225,182,77,151,212,53,59,220,235,243,112,6,209,243,56,
    33,109,86,155,214,202,90,65,171,107,51,208,42,193,175,160,
    93,212,143,107,27,46,42,108,163,17,48,212,10,42,184,254,
    206,200,141,16,5,187,58,11,47,98,232,116,225,79,67,95,
    67,0,53,177,79,167,190,79,208,82,18,237,22,48,32,36,
    184,79,225,6,113,7,156,119,49,2,124,70,49,83,98,221,
    50,147,177,4,33,40,131,43,28,32,5,118,20,163,131,240,
    34,139,254,54,44,193,159,101,224,9,40,19,0,157,129,161,
    254,64,225,217,172,227,196,55,40,78,68,199,141,130,23,62,
    121,3,219,148,80,77,176,201,230,224,227,157,46,183,69,180,
    4,192,103,193,94,205,182,124,63,16,53,203,113,106,150,16,
    161,187,179,39,120,84,19,65,237,106,84,175,160,251,231,84,
    168,37,242,6,125,21,90,24,6,16,90,242,194,113,109,1,
    23,243,116,65,246,143,184,128,48,233,4,78,4,56,138,104,
    115,97,224,36,197,9,32,171,106,56,138,199,122,89,69,79,
    196,189,150,168,82,32,90,81,100,210,112,136,83,204,225,221,
    207,45,111,143,11,228,135,96,17,48,42,54,229,64,19,140,
    186,179,168,183,82,27,77,105,250,129,239,12,96,214,174,125,
    21,39,116,150,98,111,154,97,244,45,64,228,77,1,45,179,
    25,136,196,89,221,70,5,139,113,220,81,204,157,65,115,48,
    138,3,45,46,43,16,127,7,80,124,234,58,85,15,210,148,
    18,180,134,45,188,217,192,240,54,46,32,185,136,228,146,50,
    198,100,44,50,51,106,145,27,56,11,157,204,96,23,98,133,
    147,36,219,24,74,178,115,135,73,6,165,179,137,201,162,99,
    74,29,38,75,1,77,18,222,139,51,3,211,16,130,3,186,
    83,249,64,134,50,102,209,0,101,21,202,6,198,103,58,72,
    219,169,32,53,208,71,20,161,198,185,60,163,46,253,92,140,
    218,150,70,93,193,89,76,199,177,53,67,49,85,213,108,12,
    12,61,54,49,153,119,29,26,131,69,52,111,218,176,139,176,
    52,110,249,51,180,198,209,58,73,187,14,89,107,164,189,101,
    163,136,81,216,42,176,51,241,218,21,97,105,232,135,193,55,
    131,90,208,170,9,166,230,112,247,106,180,124,53,122,15,138,
    71,237,30,149,35,89,62,100,129,8,121,63,132,66,80,161,
    11,153,220,38,37,186,25,47,63,224,0,220,7,144,223,200,
    236,84,203,34,17,98,9,155,160,205,171,137,205,81,133,247,
    112,10,85,50,120,129,45,194,175,170,209,60,205,128,42,43,
    237,77,168,23,126,247,209,244,168,61,103,184,11,53,154,82,
    11,82,16,85,53,94,31,138,166,137,168,103,92,131,241,214,
    85,106,150,89,18,59,248,43,160,2,152,45,127,98,180,151,
    211,216,31,25,198,9,132,67,156,95,148,201,248,67,119,207,
    35,251,87,140,138,86,198,114,169,203,60,213,227,178,6,105,
    28,221,38,86,185,122,62,100,127,78,85,188,131,2,211,112,
    165,43,196,187,181,244,74,87,76,50,155,2,236,72,171,89,
    113,184,4,160,203,58,86,132,108,50,217,11,73,178,31,22,
    207,100,159,5,21,108,50,177,119,76,14,110,226,60,31,28,
    70,30,46,35,23,180,121,61,21,79,111,34,185,158,132,146,
    166,176,255,251,148,151,70,235,126,106,37,52,101,173,253,8,
    231,85,36,77,78,150,73,71,37,32,73,159,146,74,159,27,
    73,250,112,42,254,223,209,78,31,169,142,145,113,160,107,112,
    92,131,205,16,158,148,138,140,151,216,118,25,19,141,182,178,
    90,156,135,154,42,131,88,62,135,86,22,178,211,134,180,96,
    18,28,210,239,72,190,153,96,217,65,179,220,245,172,222,142,
    99,221,251,18,39,128,179,176,85,102,234,74,165,217,180,74,
    152,85,90,158,86,116,249,150,82,237,249,4,75,206,219,48,
    94,162,18,37,152,19,216,84,103,158,118,120,173,199,123,59,
    112,248,235,184,253,90,203,179,218,228,197,66,172,242,199,74,
    101,65,97,48,186,218,71,88,204,54,130,154,29,248,176,110,
    236,217,34,8,107,14,135,67,17,119,106,215,107,180,232,212,
    220,168,102,237,64,175,101,11,153,37,195,233,79,155,77,43,
    108,71,180,175,220,125,129,205,9,71,129,9,135,96,23,54,
    215,95,41,147,201,227,89,178,130,208,126,90,166,28,44,202,
    112,216,17,3,89,28,111,33,121,3,201,85,54,249,133,166,
    1,227,125,129,3,163,97,203,80,191,42,26,205,92,241,108,
    226,29,209,120,5,88,44,28,161,2,200,71,53,113,29,40,
    35,39,159,194,83,57,210,10,46,53,219,85,5,30,39,58,
    77,224,140,2,79,16,61,73,224,172,2,231,136,158,34,112,
    94,129,167,137,46,16,120,70,129,139,68,207,18,120,78,129,
    231,137,94,32,240,162,2,47,17,189,76,224,146,2,107,68,
    175,16,248,138,2,95,37,250,26,129,87,21,248,11,162,175,
    19,88,87,224,27,68,175,17,248,75,5,190,73,244,58,129,
    203,10,108,16,125,139,192,183,21,120,131,232,59,4,222,84,
    224,10,209,91,4,222,86,224,29,162,191,34,240,93,5,190,
    71,244,46,129,191,86,224,61,162,191,33,240,125,5,174,18,
    189,79,224,154,2,215,137,126,64,224,135,10,252,45,209,143,
    8,124,160,192,135,68,31,17,248,88,129,79,136,110,16,248,
    177,2,55,137,126,66,160,161,192,38,209,167,4,126,170,192,
    223,17,221,34,240,153,2,63,35,186,77,224,231,10,252,130,
    232,151,4,126,165,64,147,232,215,4,90,10,220,33,106,19,
    232,40,144,19,109,17,216,86,96,135,168,75,96,87,129,187,
    68,61,2,123,234,105,165,79,96,192,182,251,248,120,14,145,
    223,227,50,55,245,191,46,115,180,32,76,120,41,112,126,210,
    213,205,184,241,51,210,200,120,135,197,59,232,188,149,77,75,
    171,59,35,87,182,174,166,14,181,105,93,233,1,219,194,88,
    193,52,237,144,91,130,75,111,158,159,168,238,180,100,202,233,
    180,18,159,42,5,147,163,254,237,68,201,3,58,76,12,78,
    167,14,156,228,98,109,11,118,254,112,40,221,39,59,152,186,
    60,151,30,198,113,49,49,7,62,236,243,249,11,115,216,36,
    242,216,137,147,177,250,125,238,59,135,71,74,234,153,96,112,
    224,138,252,23,118,184,143,135,243,227,105,248,141,167,112,81,
    70,145,210,152,156,91,74,146,118,178,110,166,16,255,171,114,
    112,61,100,233,205,136,129,238,149,219,143,100,231,97,188,155,
    56,108,113,60,126,133,241,225,26,62,206,200,237,131,115,132,
    124,244,8,23,226,213,113,38,216,201,185,207,45,124,8,109,
    122,110,15,118,74,40,236,40,124,40,24,103,58,218,145,57,
    147,173,167,70,238,44,177,47,153,37,92,208,105,113,132,233,
    69,232,10,110,122,193,11,83,116,66,30,117,76,216,168,217,
    36,241,200,204,56,4,26,58,179,87,92,200,40,13,29,56,
    17,115,47,162,97,190,175,31,37,227,86,83,1,89,115,234,
    185,190,156,87,132,227,225,126,83,216,157,60,5,178,153,149,
    2,153,189,89,46,115,248,115,215,230,230,206,30,152,196,117,
    68,39,207,181,99,124,202,181,163,29,226,141,60,99,119,220,
    118,103,204,53,71,231,198,1,207,36,190,25,237,206,142,109,
    99,61,63,238,161,239,48,238,141,245,108,166,167,91,249,2,
    160,239,80,192,211,45,241,122,134,147,172,111,32,41,108,30,
    69,177,35,66,8,41,20,120,84,94,28,224,52,250,51,163,
    147,30,4,140,8,217,217,11,35,97,122,220,111,199,174,252,
    33,30,28,0,159,44,166,193,28,117,55,191,199,20,155,105,
    83,108,146,159,198,82,88,102,119,78,23,222,94,160,228,54,
    196,149,140,57,91,254,110,172,56,180,72,208,15,115,161,76,
    60,255,12,195,89,33,39,95,116,192,253,246,46,172,102,166,
    7,235,171,111,15,242,2,52,135,91,5,104,118,119,166,225,
    158,173,230,199,23,246,37,70,133,139,44,87,90,142,19,66,
    224,244,251,176,254,228,185,123,136,71,185,59,13,102,187,116,
    237,123,82,103,45,157,58,107,235,226,181,188,36,222,217,107,
    181,176,252,184,223,114,146,118,36,70,20,61,151,36,122,170,
    39,235,246,48,241,109,92,89,243,198,25,103,84,227,140,245,
    136,203,227,183,247,173,54,55,251,129,231,198,97,241,3,44,
    40,27,223,223,166,176,204,200,95,123,156,155,20,208,149,36,
    197,218,227,172,154,12,251,64,103,204,196,71,225,83,181,123,
    180,35,123,30,143,242,167,248,40,53,197,71,217,177,178,218,
    204,143,35,232,59,140,163,213,166,56,151,193,116,255,83,163,
    249,148,68,228,247,162,16,122,191,73,151,226,90,110,202,182,
    194,0,54,93,35,25,254,35,216,163,88,147,156,254,252,133,
    115,164,118,29,133,111,120,129,77,213,175,179,89,166,252,224,
    195,7,36,57,183,19,197,209,187,97,188,202,154,0,156,157,
    204,200,238,112,39,29,230,71,225,83,19,29,237,200,12,25,
    99,51,55,154,140,205,195,104,50,54,179,246,60,241,94,3,
    214,190,209,168,63,50,179,218,32,101,246,138,235,25,89,141,
    159,56,16,177,3,40,14,54,109,98,237,96,207,151,187,224,
    31,119,7,142,142,71,139,124,22,58,192,196,51,244,56,212,
    191,97,225,100,232,248,205,170,195,35,17,6,3,211,148,175,
    199,224,218,51,205,73,63,131,188,195,228,231,67,209,38,147,
    207,32,203,90,69,91,248,9,254,87,138,21,141,30,34,143,
    124,171,36,117,197,56,149,47,146,6,145,129,136,129,223,249,
    200,19,17,125,84,163,30,219,210,217,24,95,145,110,88,61,
    249,101,4,189,223,55,112,55,97,160,20,58,84,81,53,145,
    239,27,233,245,157,124,169,10,231,96,122,194,77,15,180,141,
    101,196,49,221,122,43,203,202,32,203,220,223,235,153,171,176,
    184,62,177,250,244,81,79,111,133,142,5,99,60,155,176,48,
    60,177,124,160,84,215,198,250,159,240,94,19,115,73,212,70,
    122,165,201,87,227,7,236,192,22,132,131,177,33,36,19,116,
    202,175,81,104,91,48,222,191,230,5,176,69,113,98,158,75,
    249,60,235,65,207,2,60,123,148,166,171,70,153,27,233,119,
    66,188,107,97,4,141,120,232,90,30,102,27,58,70,193,180,
    203,205,212,141,190,101,25,130,232,65,247,208,131,26,74,136,
    144,183,221,8,164,145,168,225,59,226,167,22,24,156,89,167,
    180,244,221,19,78,32,249,86,74,190,175,191,135,59,136,232,
    33,16,252,166,165,114,178,162,149,117,252,150,170,160,85,181,
    25,173,168,77,207,84,10,149,114,165,84,128,36,67,100,94,
    171,22,42,213,105,109,252,255,18,36,79,85,95,122,179,162,
    253,23,111,208,165,165,
};

EmbeddedPython embedded_m5_internal_param_DRAMCtrl(
    "m5/internal/param_DRAMCtrl.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_DRAMCtrl.py",
    "m5.internal.param_DRAMCtrl",
    data_m5_internal_param_DRAMCtrl,
    3094,
    10702);

} // anonymous namespace
