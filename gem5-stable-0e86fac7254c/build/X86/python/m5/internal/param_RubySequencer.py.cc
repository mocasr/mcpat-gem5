#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_RubySequencer[] = {
    120,156,205,89,253,110,27,199,17,159,189,35,41,145,22,45,
    201,146,44,127,200,22,29,87,41,107,196,162,235,250,11,141,
    97,52,177,11,52,5,162,184,167,2,118,216,162,151,211,221,
    138,60,234,62,216,187,165,109,6,210,63,149,209,246,191,62,
    68,209,63,250,2,125,130,62,71,95,37,157,153,189,59,157,
    62,136,196,104,1,74,18,23,195,221,217,217,153,217,223,204,
    206,174,92,200,126,170,248,249,69,11,32,253,143,0,240,240,
    79,64,0,16,10,232,10,16,82,128,183,4,123,85,72,30,
    128,87,133,247,0,93,3,164,1,135,72,152,240,59,3,162,
    57,158,83,131,192,228,30,1,227,6,200,10,116,171,240,42,
    90,132,138,172,193,94,3,146,111,64,8,17,9,120,237,205,
    128,55,11,239,81,58,18,117,22,56,11,94,131,137,58,120,
    23,152,104,192,120,1,228,5,232,162,240,25,232,54,81,212,
    29,20,117,145,69,253,155,68,121,56,178,12,94,147,216,81,
    151,175,137,179,66,156,188,198,69,150,50,159,107,182,0,221,
    197,156,190,84,162,151,74,244,114,137,94,41,209,151,75,244,
    106,137,190,82,162,175,150,232,107,37,250,122,137,94,43,209,
    55,74,244,77,166,231,65,46,194,96,29,6,45,24,220,130,
    93,116,250,66,97,217,71,32,77,24,220,134,238,109,144,248,
    247,17,28,226,190,120,139,165,25,63,226,25,151,138,25,27,
    60,227,99,232,126,12,18,255,54,244,140,26,108,183,87,112,
    175,253,239,240,167,141,123,13,106,14,155,55,50,73,253,56,
    178,253,104,55,246,13,26,175,81,67,200,112,169,153,201,32,
    242,156,32,242,79,96,124,120,70,6,145,3,64,193,130,108,
    9,12,56,96,226,192,128,113,27,246,5,12,42,224,153,176,
    143,203,84,73,129,158,128,67,3,126,111,18,195,1,182,21,
    220,212,155,80,81,26,31,3,222,84,45,105,6,14,170,176,
    95,133,237,215,251,6,117,236,213,33,249,7,124,187,198,66,
    103,89,168,1,251,216,86,224,176,2,7,53,120,133,76,216,
    53,168,147,249,226,245,62,90,138,61,219,237,10,106,187,85,
    50,151,76,241,252,36,114,66,169,150,145,182,135,78,226,132,
    182,53,218,25,111,203,63,142,100,228,202,164,221,200,57,227,
    116,115,232,168,190,197,83,77,242,73,56,84,44,50,142,164,
    186,128,196,174,31,121,118,24,123,163,64,170,89,146,103,239,
    250,129,180,109,30,252,34,28,198,137,250,101,146,196,137,69,
    110,229,206,32,118,138,25,228,84,55,136,83,217,166,213,120,
    25,139,196,43,226,222,29,178,68,82,128,213,165,201,158,76,
    221,196,31,42,220,45,45,145,184,73,90,155,246,137,155,116,
    136,77,167,31,135,178,35,67,63,24,119,94,200,116,79,197,
    195,206,231,104,92,63,116,146,61,63,234,117,156,7,157,158,
    12,31,222,77,149,179,19,200,187,247,228,147,71,187,142,251,
    248,254,195,7,110,103,103,228,7,94,231,245,147,71,157,225,
    88,245,227,168,19,62,236,248,145,146,232,181,160,115,134,191,
    54,145,237,18,173,252,214,239,217,62,219,108,247,101,48,148,
    73,147,122,175,145,86,98,65,204,137,154,48,69,91,52,145,
    170,226,199,20,107,198,5,177,229,147,213,46,121,130,64,103,
    230,48,251,59,240,134,34,30,246,12,72,214,8,68,3,252,
    19,180,235,8,165,109,26,51,120,236,55,228,46,221,59,48,
    9,26,186,115,159,129,135,8,68,206,167,132,133,8,24,61,
    85,24,212,64,163,10,193,168,97,150,140,169,69,118,18,99,
    160,240,10,164,127,59,46,33,90,0,220,14,76,48,216,117,
    25,151,250,19,3,117,187,77,138,111,49,88,84,223,79,227,
    183,17,111,9,209,28,90,219,232,147,151,227,175,118,6,210,
    85,233,58,118,124,29,143,90,174,19,69,177,106,57,158,215,
    114,148,74,252,157,145,146,105,75,197,173,141,180,93,39,12,
    44,230,120,43,228,141,135,57,190,8,11,136,47,253,197,243,
    93,133,95,150,248,11,251,63,149,10,177,210,143,189,20,251,
    73,68,79,42,139,148,84,23,177,249,44,95,142,65,217,174,
    229,16,74,101,176,171,26,140,70,39,77,109,94,142,250,25,
    120,52,251,141,19,140,164,34,126,68,140,194,85,137,212,11,
    77,27,122,87,200,248,220,118,242,167,29,197,145,55,70,213,
    125,119,131,180,186,194,0,156,3,130,224,10,194,111,6,219,
    26,52,17,142,11,134,75,86,86,50,240,49,240,46,147,79,
    128,193,32,178,44,131,32,60,196,92,212,54,56,153,176,185,
    28,170,45,162,104,178,69,24,183,174,83,179,70,205,141,220,
    35,83,116,75,243,164,91,238,147,42,6,251,194,53,51,171,
    139,112,219,58,22,110,87,143,194,13,211,233,54,133,141,65,
    193,117,20,54,38,249,37,121,150,197,8,5,36,194,4,135,
    75,145,193,222,178,22,200,11,181,28,212,22,33,181,12,215,
    94,9,174,22,109,20,99,213,186,58,201,179,235,231,202,179,
    61,237,217,135,164,202,92,134,178,38,163,171,33,92,130,136,
    145,249,153,125,252,2,137,241,42,249,184,236,221,85,60,51,
    95,69,77,62,252,248,0,229,242,69,167,30,237,116,77,84,
    8,143,187,38,92,206,14,181,148,50,197,48,137,223,141,91,
    241,110,75,65,174,195,211,141,116,115,35,253,20,115,73,235,
    25,103,39,157,77,116,190,72,228,48,193,188,80,231,47,58,
    214,109,142,123,59,59,146,112,23,168,64,224,205,99,223,115,
    106,75,85,66,25,109,218,142,111,20,142,39,59,62,37,61,
    26,236,117,19,86,241,211,16,172,172,29,115,182,229,202,133,
    71,241,243,57,249,159,92,32,129,106,90,107,91,155,194,86,
    146,189,214,143,143,225,106,122,54,90,119,112,209,23,121,164,
    214,160,64,17,125,76,178,130,130,231,47,192,229,158,128,63,
    3,33,6,129,145,133,27,7,54,125,104,227,151,136,253,15,
    192,137,236,140,115,212,208,97,107,100,169,14,163,58,125,204,
    172,250,88,253,53,252,181,148,5,15,77,16,116,4,154,89,
    65,87,62,2,43,69,160,51,212,126,208,49,87,57,158,17,
    104,223,250,78,74,108,58,246,205,34,246,143,18,106,81,133,
    97,66,155,34,10,103,181,6,54,41,251,197,17,6,233,124,
    185,46,150,140,18,178,62,161,230,110,1,42,145,247,77,71,
    239,245,147,7,66,233,156,180,117,18,254,21,41,87,97,115,
    230,107,156,37,10,9,69,56,85,243,112,186,95,132,147,228,
    99,225,61,223,11,168,53,8,36,135,134,192,203,32,22,76,
    116,15,171,128,172,66,183,70,129,199,53,175,200,226,82,228,
    185,145,114,234,177,51,135,189,181,165,253,88,224,68,67,128,
    154,119,211,206,69,132,130,167,129,19,238,120,206,51,135,180,
    32,85,220,60,82,141,220,174,133,178,93,20,101,98,146,105,
    252,245,94,110,223,155,105,231,161,159,226,162,133,93,28,117,
    94,236,114,242,249,109,95,182,66,25,238,224,165,177,239,15,
    91,187,129,211,227,253,52,51,187,191,202,237,86,12,136,147,
    21,65,74,25,110,43,110,185,113,132,199,202,200,85,113,210,
    242,36,222,163,164,215,186,219,226,51,169,229,167,45,103,7,
    71,29,87,233,168,57,158,19,184,52,117,146,94,202,85,232,
    222,91,34,207,3,30,108,188,65,251,88,143,239,228,126,211,
    215,186,226,128,225,18,92,135,32,30,220,120,63,82,99,157,
    54,31,81,243,19,106,54,224,156,156,67,29,92,244,27,90,
    157,92,92,195,204,86,23,92,183,29,99,124,73,115,211,211,
    169,225,95,63,36,53,232,23,162,44,65,212,136,83,206,208,
    229,158,218,58,29,71,221,70,222,121,129,219,57,238,108,230,
    157,23,185,157,231,206,133,188,115,145,219,75,220,185,148,119,
    46,115,187,194,157,151,243,55,172,85,238,188,2,221,171,244,
    8,67,61,215,40,61,205,252,175,233,137,99,120,218,187,71,
    209,219,255,191,102,37,235,254,121,51,203,250,25,100,229,208,
    164,140,36,202,54,55,117,70,26,136,252,194,82,54,152,223,
    82,174,157,13,111,219,77,164,163,164,222,220,107,211,247,2,
    39,61,173,211,160,216,226,220,212,226,66,247,184,48,247,144,
    107,196,241,114,233,70,193,59,46,94,97,65,135,183,142,125,
    246,136,109,232,139,199,17,182,43,133,99,86,177,137,228,91,
    251,12,231,232,203,5,105,228,12,135,50,242,142,46,14,60,
    50,109,192,80,98,165,133,243,26,13,111,9,203,248,57,29,
    224,100,108,201,118,222,235,106,17,210,231,96,215,25,251,163,
    124,191,219,124,35,46,14,22,139,118,91,31,37,197,41,98,
    253,188,216,191,123,19,128,29,58,239,236,120,164,80,195,200,
    67,149,241,86,133,227,169,74,233,94,251,225,147,176,170,228,
    183,152,73,12,234,230,4,137,190,235,184,125,201,139,126,15,
    11,45,193,79,211,252,117,34,183,247,253,2,189,227,2,245,
    87,117,103,18,183,116,188,32,118,247,108,213,79,100,218,143,
    3,143,133,127,0,59,45,68,111,164,167,135,212,39,19,164,
    140,82,242,94,36,213,219,56,65,126,116,161,76,120,217,15,
    154,64,11,211,67,247,89,131,28,30,156,246,60,25,72,37,
    207,10,112,69,168,202,30,107,60,156,149,196,99,219,214,247,
    108,252,30,216,246,185,168,86,158,224,162,61,200,94,239,168,
    90,169,97,189,178,82,252,214,43,117,193,229,227,137,255,110,
    104,181,185,52,227,123,229,56,181,248,100,153,47,66,135,95,
    224,243,90,141,115,42,221,138,182,156,80,191,160,242,19,160,
    117,139,154,219,121,244,49,160,244,27,4,223,230,245,107,11,
    230,79,174,109,185,148,181,54,169,159,98,56,124,184,153,219,
    182,121,100,219,115,70,163,193,227,19,216,182,253,80,191,42,
    171,197,19,227,94,226,32,189,114,162,55,149,137,239,4,254,
    183,146,247,251,236,101,95,198,73,22,194,167,151,27,35,96,
    194,83,186,200,104,20,218,95,202,48,78,198,95,198,158,84,
    183,78,140,127,150,85,241,154,197,126,35,169,220,87,173,51,
    151,56,206,59,193,108,28,204,204,94,63,115,252,57,5,151,
    244,50,158,27,147,121,94,196,33,185,105,237,164,194,158,151,
    88,78,212,147,185,174,39,25,74,0,212,46,33,132,228,163,
    92,224,159,240,231,108,22,173,244,133,171,106,69,24,45,208,
    203,145,149,200,158,79,1,201,243,115,230,236,128,37,104,179,
    199,206,10,249,242,228,243,16,136,250,90,172,159,18,159,209,
    63,172,56,160,232,225,189,62,95,23,53,131,254,235,99,138,
    134,104,138,138,152,107,214,205,122,173,94,53,49,88,169,103,
    73,52,204,122,99,78,76,254,93,199,48,110,24,235,40,233,
    191,64,34,105,210,
};

EmbeddedPython embedded_m5_internal_param_RubySequencer(
    "m5/internal/param_RubySequencer.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_RubySequencer.py",
    "m5.internal.param_RubySequencer",
    data_m5_internal_param_RubySequencer,
    2405,
    7866);

} // anonymous namespace
