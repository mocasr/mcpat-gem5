#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_EtherDevice[] = {
    120,156,205,88,235,111,27,199,17,159,189,35,41,145,22,45,
    201,242,219,178,117,110,162,154,13,106,49,117,45,219,64,12,
    163,137,21,32,46,16,197,61,6,177,173,6,185,158,238,150,
    228,81,247,32,238,86,114,24,72,95,42,163,237,183,254,17,
    69,63,244,255,232,223,212,175,237,204,236,221,233,244,106,131,
    182,0,45,145,139,225,62,102,119,102,126,243,216,245,32,255,
    171,227,247,87,22,64,246,15,1,224,227,71,64,8,16,9,
    216,18,32,164,0,127,9,118,234,144,62,4,191,14,239,0,
    182,12,144,6,28,34,97,194,111,13,136,231,120,77,3,66,
    147,123,4,76,90,32,107,176,85,135,87,241,34,212,100,3,
    118,90,144,254,14,132,16,177,128,215,254,12,248,179,240,14,
    185,35,209,100,134,179,224,183,152,104,130,127,129,137,22,76,
    22,64,94,128,45,100,62,3,91,109,100,245,17,178,186,200,
    172,254,78,172,124,28,185,12,126,155,166,227,89,222,208,204,
    26,205,228,61,46,50,151,249,226,100,11,176,181,88,208,151,
    42,244,82,133,190,92,161,175,84,232,171,21,250,90,133,190,
    94,161,111,84,232,155,21,250,86,133,94,174,208,183,43,244,
    157,10,189,82,161,45,166,231,65,46,194,232,46,140,126,2,
    163,15,160,143,198,88,40,37,254,16,164,9,163,85,216,90,
    5,137,159,15,225,16,237,229,47,86,86,252,148,87,92,42,
    87,220,227,21,29,216,234,128,196,207,61,189,162,1,189,206,
    21,196,64,240,79,252,235,32,6,64,205,97,179,39,211,44,
    72,98,39,136,251,73,96,208,120,131,26,66,140,71,205,76,
    14,157,231,4,157,191,1,227,198,55,114,232,28,0,50,22,
    36,75,104,192,1,19,7,6,76,58,176,47,96,84,3,223,
    132,125,220,166,78,7,24,8,56,52,224,91,147,38,28,96,
    91,67,99,223,129,154,210,184,25,177,177,53,167,25,56,168,
    195,126,29,122,175,247,13,234,216,105,66,250,87,248,97,153,
    153,206,50,83,3,246,177,173,193,97,13,14,26,240,10,39,
    97,215,168,73,226,139,215,251,40,41,246,244,58,53,60,237,
    102,69,92,18,197,15,210,216,141,164,186,132,180,51,118,83,
    55,114,62,87,67,153,110,200,189,192,147,157,86,49,47,201,
    214,198,174,26,218,188,208,36,141,68,99,197,12,147,88,170,
    11,72,244,131,216,119,162,196,223,13,165,154,37,110,78,63,
    8,165,227,240,224,139,104,156,164,234,243,52,77,82,155,148,
    202,157,97,226,150,43,72,165,94,152,100,178,67,187,241,54,
    54,177,87,52,187,63,102,142,116,0,62,44,45,246,101,230,
    165,193,88,161,173,52,71,154,77,220,58,100,37,110,178,24,
    155,238,48,137,100,87,70,65,56,233,110,200,108,71,37,227,
    238,103,50,246,134,145,155,238,4,241,160,235,62,236,14,100,
    180,126,63,83,238,118,40,239,127,44,159,60,234,187,222,227,
    7,235,15,189,238,246,110,16,250,221,215,79,30,117,199,19,
    53,76,226,110,180,222,13,98,37,81,103,97,247,148,182,214,
    112,18,233,49,123,27,12,156,128,37,118,134,50,28,203,180,
    77,189,55,233,76,98,65,204,137,134,48,69,71,180,145,170,
    227,215,20,203,198,5,177,25,144,204,30,233,129,0,103,22,
    16,251,11,176,49,17,11,59,6,164,203,4,160,17,126,4,
    89,28,97,212,163,49,131,199,126,67,202,210,189,35,147,96,
    161,59,247,25,116,136,62,156,249,148,112,128,90,33,228,212,
    97,212,0,141,40,4,162,134,88,58,161,22,167,19,27,3,
    153,215,32,251,243,113,14,241,2,160,49,48,232,96,215,85,
    220,234,247,12,210,94,135,14,190,201,80,81,195,32,75,222,
    198,108,16,162,217,173,122,168,147,151,147,175,182,71,210,83,
    217,10,118,188,73,118,45,207,141,227,68,89,174,239,91,174,
    82,105,176,189,171,100,102,169,196,90,205,58,77,66,192,98,
    129,182,146,223,100,92,160,139,144,128,232,210,63,252,192,83,
    248,99,137,127,176,254,51,169,16,41,195,196,207,176,159,88,
    12,164,178,233,144,234,34,54,159,22,219,49,36,59,141,2,
    64,153,12,251,170,197,88,116,179,204,225,237,168,159,97,71,
    171,247,220,112,87,42,154,143,120,81,184,43,145,122,163,233,
    2,239,58,137,94,72,78,218,116,226,36,246,39,120,240,192,
    91,165,51,93,103,248,205,1,1,240,10,130,111,6,219,6,
    180,17,140,11,134,71,50,214,114,232,49,236,174,146,70,128,
    161,32,242,248,130,16,60,196,40,212,49,56,140,176,176,236,
    166,22,81,180,216,38,132,219,183,168,89,166,230,118,161,143,
    169,41,165,125,82,41,15,232,32,6,107,194,51,115,153,75,
    87,219,60,230,106,55,142,92,13,195,104,143,92,198,32,199,
    58,114,25,147,180,146,62,203,253,131,156,17,33,130,195,21,
    175,96,93,217,11,164,131,70,1,104,155,80,90,133,234,160,
    2,85,155,204,196,56,181,111,156,167,215,149,247,72,175,3,
    173,215,117,58,200,92,142,176,54,35,171,37,60,130,135,145,
    107,153,53,188,129,196,228,26,105,184,170,219,107,152,41,95,
    197,109,78,121,156,54,185,152,209,65,71,171,92,19,53,194,
    98,223,132,171,121,42,203,40,70,140,211,228,251,137,149,244,
    45,5,197,25,158,174,102,107,171,217,39,24,69,172,103,28,
    151,116,28,209,145,34,149,227,20,35,66,147,127,104,47,119,
    216,227,157,60,21,161,13,168,44,96,211,177,230,57,168,101,
    42,165,88,54,93,181,183,74,181,147,20,159,208,41,90,172,
    115,19,174,225,183,37,248,168,78,194,81,150,171,21,30,197,
    239,103,164,125,82,128,4,170,111,237,158,22,132,101,36,105,
    237,123,199,48,53,45,9,237,143,112,203,141,194,71,27,80,
    34,136,190,38,201,64,110,243,71,224,2,79,192,31,128,208,
    130,160,200,29,141,93,154,190,100,244,37,154,254,29,112,0,
    59,35,123,26,218,97,141,60,196,161,63,103,143,121,170,78,
    166,191,134,63,85,162,223,161,9,130,18,159,153,151,112,213,
    196,87,43,93,156,97,246,163,146,91,237,120,44,32,171,13,
    221,140,166,105,175,55,75,175,63,10,164,101,229,133,161,108,
    106,8,156,213,251,59,116,212,23,71,248,163,172,114,75,44,
    25,21,84,253,156,154,251,37,160,68,209,55,141,83,175,156,
    76,3,149,220,232,232,208,251,5,29,173,198,194,204,55,184,
    192,172,240,40,93,169,94,184,210,131,210,149,36,167,131,119,
    124,15,160,214,32,136,28,26,2,47,133,88,36,209,125,172,
    6,178,14,91,13,114,58,174,114,69,238,147,162,136,138,20,
    77,143,229,26,214,214,166,214,99,137,18,13,0,106,190,159,
    110,20,34,12,60,13,221,104,219,119,159,145,102,50,58,136,
    87,120,169,81,72,181,80,149,138,60,76,156,39,24,255,252,
    184,144,110,111,186,17,232,23,160,47,122,44,21,251,155,159,
    120,28,118,190,30,74,43,146,209,54,94,16,135,193,216,234,
    135,238,128,109,105,230,82,127,85,72,173,24,12,39,171,128,
    140,98,219,102,98,121,73,140,201,100,215,83,73,106,249,18,
    111,77,210,183,238,91,156,137,172,32,179,220,109,28,117,61,
    165,61,230,120,52,224,82,212,77,7,25,87,157,59,111,137,
    156,62,22,28,188,43,7,88,125,251,133,214,244,21,174,76,
    43,92,112,107,247,195,100,141,183,33,53,209,225,242,17,53,
    63,163,102,21,222,139,236,211,197,45,183,105,111,82,111,3,
    35,90,83,168,197,227,161,224,37,173,203,78,7,132,55,63,
    38,32,232,247,33,156,32,27,48,154,225,118,150,50,15,189,
    0,213,242,23,32,234,212,47,64,250,217,169,77,113,163,241,
    191,198,13,118,175,233,59,214,232,255,26,46,236,7,239,151,
    80,246,47,33,175,80,206,11,21,6,84,174,27,143,117,168,
    208,182,195,58,102,114,185,82,241,178,2,196,43,44,58,176,
    42,222,231,122,217,49,116,97,124,100,104,46,35,248,241,131,
    156,45,150,111,157,83,72,213,165,47,225,199,29,143,101,236,
    31,149,181,60,50,93,237,81,0,136,224,168,138,192,26,246,
    50,126,79,35,157,4,173,200,205,136,174,151,216,190,57,117,
    65,8,6,105,25,254,46,30,11,127,54,217,89,7,188,50,
    214,105,163,173,159,21,90,28,126,54,226,237,240,64,210,193,
    116,17,99,53,79,79,146,94,178,27,43,186,113,253,151,43,
    177,248,225,82,232,63,204,99,179,240,123,130,47,67,169,228,
    105,80,41,146,38,191,188,250,18,243,85,50,193,75,20,223,
    61,240,119,232,56,239,65,44,127,2,250,213,150,111,132,20,
    203,27,120,43,109,214,154,130,211,233,137,151,93,125,84,50,
    143,174,176,39,153,205,14,61,95,218,138,223,31,139,236,197,
    158,75,55,200,77,55,210,47,72,252,8,98,223,165,230,131,
    194,210,236,117,250,46,198,247,26,125,231,68,47,229,92,207,
    169,221,94,163,126,186,217,71,235,107,133,60,107,90,158,151,
    94,160,165,225,39,208,104,93,221,60,123,90,232,170,126,146,
    70,234,246,153,195,47,98,149,62,79,176,73,66,54,233,233,
    25,189,73,166,100,116,234,16,50,222,141,156,47,101,148,164,
    147,47,19,95,170,187,39,198,63,205,235,20,61,197,217,147,
    84,208,40,235,204,45,142,207,61,71,94,28,212,207,131,140,
    209,211,227,207,195,196,219,145,126,62,231,108,105,121,206,70,
    18,185,216,127,246,46,189,160,216,101,241,196,184,159,210,170,
    43,39,122,51,153,6,110,24,252,32,213,242,73,5,248,126,
    106,187,241,64,22,178,159,189,225,70,228,230,102,60,199,204,
    65,146,143,19,196,138,65,69,200,59,137,3,194,79,249,139,
    139,21,54,105,5,248,236,146,169,28,4,104,210,148,121,148,
    243,243,116,64,110,161,238,156,25,62,170,107,167,239,192,250,
    154,161,159,100,158,209,125,44,251,6,27,122,188,108,206,55,
    69,195,160,119,115,83,180,68,91,212,196,92,187,105,54,27,
    205,186,137,78,78,61,75,162,101,54,91,115,226,223,255,175,
    96,48,104,25,43,173,166,248,23,120,163,148,210,
};

EmbeddedPython embedded_m5_internal_param_EtherDevice(
    "m5/internal/param_EtherDevice.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_EtherDevice.py",
    "m5.internal.param_EtherDevice",
    data_m5_internal_param_EtherDevice,
    2269,
    7188);

} // anonymous namespace