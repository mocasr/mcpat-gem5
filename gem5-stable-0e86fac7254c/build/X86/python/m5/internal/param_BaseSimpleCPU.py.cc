#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_param_BaseSimpleCPU[] = {
    120,156,205,89,109,111,219,200,17,158,37,37,217,82,172,196,
    142,157,119,39,214,189,184,167,75,207,86,146,198,73,128,11,
    130,230,165,64,83,220,249,92,41,133,19,183,40,75,147,107,
    137,50,95,4,114,237,156,174,246,151,58,104,251,173,63,162,
    232,135,254,143,254,175,235,204,44,73,83,182,84,164,104,1,
    219,145,22,163,125,157,121,246,153,217,217,141,3,233,95,25,
    191,63,111,0,36,219,6,128,139,31,1,62,64,32,96,75,
    128,144,2,220,121,216,45,67,252,16,220,50,124,0,216,50,
    64,26,112,132,130,9,191,53,32,156,225,49,21,240,77,174,
    17,48,172,129,44,193,86,25,54,195,57,40,201,10,236,214,
    32,254,3,8,33,66,1,111,221,41,112,167,225,3,206,142,
    66,149,39,156,6,183,198,66,21,220,11,44,212,96,56,11,
    242,2,108,225,228,83,176,85,199,169,238,226,84,23,121,170,
    127,209,84,46,182,44,128,91,167,238,168,203,59,234,89,162,
    158,188,198,69,158,229,82,166,217,44,108,205,101,242,229,130,
    60,95,144,23,10,242,149,130,124,181,32,95,43,200,215,11,
    242,141,130,124,179,32,223,42,200,139,5,249,118,65,190,83,
    144,151,10,114,163,32,127,82,144,63,45,200,159,21,228,207,
    11,242,114,65,254,73,65,254,162,32,55,11,242,151,44,95,
    2,57,7,253,187,208,255,41,244,191,130,29,220,248,217,28,
    221,21,144,38,244,87,97,107,21,36,126,86,224,8,185,225,
    206,21,70,180,120,196,229,124,196,61,30,113,31,182,238,131,
    196,207,61,61,162,2,157,230,21,228,155,247,35,254,53,5,
    74,106,6,139,125,25,39,94,20,90,94,184,19,121,6,181,
    87,168,32,118,58,84,76,165,52,125,73,52,253,39,48,71,
    93,35,165,233,33,224,196,130,108,241,13,56,100,225,208,128,
    97,19,14,4,244,75,224,154,112,128,203,148,73,129,174,128,
    35,3,126,103,82,135,67,44,75,72,172,59,80,82,154,163,
    125,38,150,158,105,10,14,203,112,80,134,206,219,3,131,42,
    118,171,16,255,3,126,88,228,73,167,121,82,3,14,176,44,
    193,81,9,14,43,176,137,157,176,170,95,37,243,197,219,3,
    180,20,107,58,205,18,106,187,94,48,151,76,113,189,56,180,
    3,169,22,80,182,6,118,108,7,214,11,59,145,29,47,24,
    248,242,229,198,111,154,181,172,103,148,172,14,108,213,107,243,
    80,147,48,9,6,138,167,140,66,169,46,160,176,227,133,174,
    21,68,238,158,47,213,52,205,103,237,120,190,180,44,110,124,
    29,12,162,88,253,34,142,163,184,77,176,114,165,31,217,249,
    8,2,213,241,163,68,54,105,53,94,166,77,211,43,234,189,
    51,224,25,73,1,86,151,6,187,50,113,98,111,160,112,183,
    244,140,212,155,102,107,210,62,113,145,12,176,104,245,162,64,
    182,100,224,249,195,214,43,153,236,170,104,208,122,33,67,167,
    23,216,241,174,23,118,91,246,195,86,87,6,107,43,137,178,
    183,125,185,114,79,62,121,180,99,59,143,31,172,61,116,90,
    219,123,158,239,182,222,62,121,212,26,12,85,47,10,91,193,
    90,203,11,149,68,212,252,214,24,188,86,177,219,101,90,249,
    189,215,181,60,182,217,234,73,127,32,227,58,213,222,36,173,
    196,172,152,17,21,97,138,166,168,163,84,198,175,41,22,141,
    11,98,221,35,171,29,66,130,72,103,102,52,251,59,240,134,
    34,31,118,13,136,23,137,68,125,252,8,218,117,164,82,135,
    218,12,110,251,53,193,165,107,251,38,81,67,87,30,48,241,
    144,129,216,243,41,113,33,4,102,79,25,250,21,208,172,66,
    50,106,154,197,67,42,177,59,77,99,224,228,37,72,254,54,
    58,67,56,11,184,29,24,228,176,234,42,46,245,39,38,106,
    167,73,138,175,51,89,84,207,75,162,247,33,111,9,201,236,
    90,29,196,100,99,248,221,118,95,58,42,89,194,138,119,209,
    94,195,177,195,48,82,13,219,117,27,182,82,177,183,189,167,
    100,210,80,81,99,57,105,86,137,3,115,25,223,242,249,134,
    131,140,95,196,5,228,151,254,225,122,142,194,31,243,252,131,
    241,79,164,66,174,244,34,55,193,122,154,162,43,85,155,148,
    84,23,177,120,158,45,199,164,108,86,50,10,37,210,223,81,
    53,102,163,157,36,22,47,71,245,76,60,26,189,111,251,123,
    82,81,127,100,140,194,85,73,212,11,157,53,245,174,147,241,
    153,237,132,167,21,70,161,59,68,213,61,103,153,180,186,206,
    4,156,1,162,224,21,164,223,20,150,21,168,35,29,103,13,
    135,172,44,165,228,99,226,93,37,76,128,201,32,210,40,131,
    36,60,194,88,212,52,56,152,176,185,236,170,13,146,104,112,
    155,56,222,190,69,197,34,21,183,51,68,206,16,150,250,73,
    88,30,144,42,6,99,225,152,169,213,185,187,173,143,184,219,
    141,99,119,195,112,218,33,183,49,200,185,142,221,198,36,92,
    226,103,169,143,144,67,34,77,176,185,224,25,140,86,123,150,
    80,168,100,164,110,19,83,139,116,237,22,232,218,166,141,98,
    174,182,111,76,66,118,233,92,33,219,213,200,174,145,42,51,
    41,203,234,204,174,154,112,136,34,70,138,51,99,252,10,133,
    225,53,194,184,136,238,53,60,51,55,195,58,31,126,124,128,
    114,10,165,67,143,6,93,11,37,226,227,142,9,87,211,67,
    45,161,72,49,136,163,239,135,141,104,167,161,32,211,225,233,
    114,178,186,156,124,141,177,164,241,140,163,147,142,38,58,94,
    196,114,16,99,92,168,242,15,237,235,22,251,189,149,30,73,
    184,11,148,32,240,230,49,246,28,218,18,21,83,68,59,107,
    224,107,57,240,100,199,215,164,71,141,81,55,225,26,126,107,
    130,149,181,34,142,182,156,185,112,43,126,95,16,254,4,129,
    4,202,171,219,29,109,10,91,73,246,182,191,24,225,213,217,
    217,216,190,139,139,190,202,60,181,2,57,139,232,107,146,21,
    228,60,127,1,78,247,4,252,25,136,49,72,140,212,221,216,
    177,233,75,27,63,79,221,127,15,28,200,198,156,163,134,118,
    91,35,13,117,232,213,201,99,238,170,143,213,95,193,95,11,
    81,240,200,4,65,71,160,153,38,116,197,35,176,148,59,58,
    83,237,163,142,185,210,104,68,160,125,235,217,9,117,211,190,
    111,230,190,127,28,80,243,44,12,3,218,25,178,112,90,107,
    96,145,178,175,143,57,72,231,203,45,49,111,20,152,245,21,
    21,43,57,169,68,86,119,54,122,47,157,60,16,10,231,164,
    165,131,240,47,73,185,18,155,115,169,194,113,110,100,150,220,
    165,202,153,75,61,200,93,74,242,209,240,129,239,6,84,26,
    68,148,35,67,224,165,20,147,38,186,15,150,64,150,97,171,
    66,206,199,121,175,72,125,83,100,241,145,214,27,57,119,24,
    177,117,141,101,206,21,77,3,42,190,63,235,120,68,76,120,
    234,219,193,182,107,63,243,73,11,82,197,201,188,213,200,236,
    154,45,218,69,158,38,38,153,198,63,239,101,246,237,159,117,
    44,186,143,139,230,118,177,231,185,145,195,1,232,77,79,54,
    2,25,108,227,197,177,231,13,26,59,190,221,229,253,52,83,
    187,191,203,236,86,76,136,147,89,65,66,81,110,61,106,56,
    81,136,71,203,158,163,162,184,225,74,188,75,73,183,177,210,
    224,115,169,225,37,13,123,27,91,109,71,105,207,25,141,11,
    156,158,218,113,55,225,76,116,247,61,137,231,129,15,22,222,
    162,61,204,201,131,12,55,125,181,203,15,25,78,195,181,27,
    226,225,141,119,36,53,212,161,243,17,21,95,82,177,12,231,
    228,44,106,17,178,180,58,65,92,193,232,86,21,156,187,141,
    116,220,160,177,201,233,208,240,238,99,66,131,126,169,194,14,
    178,2,253,41,46,167,233,36,162,183,168,82,250,22,69,149,
    250,45,74,63,128,213,41,130,84,254,215,8,194,110,118,214,
    0,223,79,73,242,255,11,28,237,7,231,205,172,246,207,32,
    205,90,38,5,13,3,10,23,145,199,58,104,232,253,195,220,
    102,184,80,200,132,25,2,177,137,137,8,102,203,7,156,71,
    91,134,78,152,143,55,155,83,11,126,28,185,134,69,40,223,
    91,99,248,170,147,98,98,145,61,24,200,208,61,78,120,185,
    229,172,17,164,96,176,15,199,185,5,102,183,11,248,61,205,
    120,50,182,96,59,51,187,156,115,252,230,57,48,133,200,240,
    199,60,24,94,28,9,134,109,218,109,29,254,242,200,167,183,
    238,211,241,97,198,218,142,109,212,117,35,150,46,93,190,62,
    166,27,38,59,124,113,56,174,98,116,21,97,227,74,95,42,
    57,142,31,138,148,74,239,168,174,196,99,40,26,226,77,137,
    175,23,248,219,183,172,115,17,160,159,224,162,49,164,23,63,
    10,208,21,188,124,86,75,85,193,231,228,137,167,92,173,44,
    197,7,157,68,15,147,54,251,231,165,28,116,126,110,204,14,
    37,118,68,186,40,174,219,129,126,46,226,247,142,246,39,84,
    124,150,109,25,187,144,190,112,241,213,69,95,45,209,233,248,
    16,231,51,187,189,74,245,52,44,88,91,205,44,90,77,45,
    202,55,197,163,36,128,223,61,131,53,117,107,108,103,52,93,
    63,164,169,185,19,237,110,108,163,124,229,68,109,34,99,207,
    246,189,31,164,186,49,126,113,132,19,129,228,7,164,211,173,
    184,19,111,190,121,161,62,159,212,184,97,211,237,31,183,113,
    211,246,119,17,177,241,179,116,134,137,146,193,41,131,100,184,
    23,88,223,202,32,138,135,223,70,174,60,133,206,243,52,243,
    209,93,172,125,201,232,52,198,46,49,218,119,2,118,216,152,
    98,183,52,182,253,165,31,57,187,210,77,251,220,158,220,231,
    85,20,16,214,139,39,21,118,221,184,109,135,93,153,233,58,
    25,114,66,245,206,36,84,191,137,28,219,127,62,64,54,140,
    55,22,39,240,156,13,47,122,37,247,61,71,78,48,246,184,
    253,230,137,246,141,56,114,100,146,252,103,37,211,78,167,6,
    191,140,246,72,156,52,24,181,127,221,121,158,181,78,36,21,
    246,57,133,158,110,124,141,201,240,27,220,73,36,19,121,98,
    214,202,247,176,81,198,78,165,97,15,101,78,210,88,213,145,
    232,192,145,43,150,93,15,233,23,231,55,185,227,227,143,34,
    7,67,60,46,122,22,199,158,135,56,167,47,90,250,129,234,
    25,253,55,72,210,195,130,158,115,171,151,170,162,98,208,255,
    37,152,162,38,234,162,36,102,234,85,179,90,169,150,77,140,
    133,84,51,47,106,102,181,54,35,254,219,127,75,24,69,107,
    198,82,173,42,254,13,178,217,247,114,
};

EmbeddedPython embedded_m5_internal_param_BaseSimpleCPU(
    "m5/internal/param_BaseSimpleCPU.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/param_BaseSimpleCPU.py",
    "m5.internal.param_BaseSimpleCPU",
    data_m5_internal_param_BaseSimpleCPU,
    2362,
    7594);

} // anonymous namespace