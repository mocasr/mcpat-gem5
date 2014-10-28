#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_enum_OpClass[] = {
    120,156,205,87,109,79,27,71,16,158,189,179,13,54,56,152,
    16,222,2,9,206,11,137,67,2,78,8,36,145,18,69,77,
    66,171,82,41,36,61,127,128,108,171,186,230,110,141,15,206,
    119,238,221,66,234,10,190,148,168,237,183,254,136,170,31,250,
    63,250,191,218,153,57,159,95,80,43,245,67,85,10,220,234,
    217,217,221,217,153,217,103,102,23,27,58,63,105,252,62,42,
    2,68,83,6,128,131,127,2,60,128,166,0,41,64,40,1,
    206,24,28,164,33,92,3,39,13,31,0,164,1,202,128,83,
    4,38,124,97,128,63,202,107,50,224,153,44,17,208,206,129,
    74,129,76,195,182,63,14,41,149,129,131,28,132,95,131,16,
    194,23,176,227,12,129,51,12,31,80,59,130,44,43,28,6,
    39,199,32,11,206,8,131,28,180,11,160,70,64,162,242,33,
    144,121,84,181,132,170,46,176,170,223,73,149,131,35,5,112,
    242,52,29,109,121,71,51,83,52,147,247,184,192,90,198,64,
    153,176,95,0,89,96,48,14,114,156,193,69,144,23,25,76,
    128,156,96,112,9,228,37,6,147,32,39,25,76,129,156,98,
    48,13,114,154,193,12,200,25,6,179,32,103,25,92,6,121,
    153,193,28,200,57,6,243,32,231,25,92,1,121,133,193,85,
    144,87,25,44,128,92,96,80,4,89,100,112,13,228,53,6,
    215,65,94,103,112,3,228,13,6,55,65,222,100,176,8,114,
    145,193,45,144,183,24,220,6,121,155,65,9,100,137,193,29,
    144,119,24,44,129,92,98,112,23,228,93,6,247,64,222,99,
    176,12,114,153,193,10,200,21,6,101,144,101,6,247,65,222,
    103,240,0,228,3,6,171,32,87,25,60,4,249,144,142,182,
    82,26,71,142,184,127,224,79,73,32,210,163,216,28,169,48,
    114,3,191,234,250,245,192,53,104,60,67,13,49,202,166,102,
    168,67,173,87,68,173,223,128,121,229,24,29,106,157,0,8,
    234,3,120,6,156,48,56,49,160,93,130,99,1,251,41,112,
    76,56,198,109,210,112,42,96,79,192,169,1,95,154,52,225,
    4,219,20,146,225,42,164,116,204,171,125,38,67,172,105,8,
    78,210,112,156,134,202,206,177,65,130,131,44,132,191,194,119,
    243,172,116,152,149,26,112,140,109,10,78,83,112,146,129,109,
    156,132,162,253,44,81,72,236,28,163,167,40,169,148,82,104,
    237,86,159,187,228,138,227,134,126,173,169,116,30,113,85,249,
    135,205,234,155,214,43,175,22,69,165,92,50,37,136,86,90,
    53,221,176,120,141,73,193,104,182,52,235,10,124,165,71,16,
    212,93,223,169,54,3,231,208,83,122,152,20,85,235,174,167,
    170,85,30,220,108,182,130,80,127,28,134,65,104,81,60,89,
    232,5,181,238,10,138,166,237,5,145,42,209,110,188,141,69,
    234,53,205,174,183,88,35,25,192,118,210,98,71,69,118,232,
    182,52,30,83,172,145,102,147,182,18,29,16,55,17,29,88,
    185,17,52,85,89,53,93,175,93,222,80,209,129,14,90,229,
    151,202,183,27,205,90,120,224,250,123,229,218,90,121,79,53,
    215,151,35,93,219,245,212,242,125,245,228,81,189,102,63,94,
    93,95,179,203,187,135,174,231,148,119,158,60,42,183,218,186,
    17,248,229,230,122,217,245,181,194,112,121,229,254,64,173,224,
    248,69,218,242,189,187,87,117,217,217,106,67,121,45,21,82,
    76,163,203,100,142,40,136,81,145,17,166,40,137,60,162,52,
    126,166,152,55,70,196,150,75,238,218,20,2,162,153,153,16,
    235,23,224,35,68,6,28,24,16,206,19,109,246,241,79,208,
    57,35,121,42,52,102,240,216,231,20,167,88,186,111,18,25,
    98,225,49,83,13,57,135,51,159,209,233,251,192,124,73,195,
    126,6,98,30,33,253,98,98,133,109,106,113,58,169,49,80,
    121,10,162,159,7,53,248,5,192,115,192,82,132,162,41,220,
    234,123,166,102,165,68,134,111,49,75,116,195,141,130,247,62,
    159,5,97,78,166,10,198,228,109,251,205,238,190,178,117,180,
    128,130,119,193,97,209,174,249,126,160,139,53,199,41,214,180,
    14,221,221,67,173,162,162,14,138,139,81,41,75,135,63,158,
    16,173,171,175,221,74,136,69,36,64,98,197,29,199,181,53,
    118,38,184,195,241,143,148,70,146,52,2,39,66,57,169,216,
    83,218,34,35,245,5,108,94,36,219,49,27,75,153,132,59,
    145,242,234,58,199,52,196,3,173,242,118,36,103,198,209,234,
    163,154,119,168,52,205,71,170,104,220,149,96,188,209,185,113,
    110,134,188,78,156,166,64,86,253,192,119,218,104,179,107,47,
    146,57,51,204,188,81,32,238,77,34,239,134,176,205,64,30,
    121,88,48,108,114,47,213,97,29,51,110,138,130,1,204,2,
    209,41,40,200,190,83,44,59,37,131,235,6,251,201,201,89,
    36,68,139,45,34,183,53,71,205,60,53,87,146,80,156,71,
    60,242,103,227,177,74,54,24,28,4,219,236,184,219,77,176,
    173,129,4,155,237,37,24,150,204,10,37,138,65,233,212,75,
    20,147,2,18,62,239,100,5,165,32,18,3,135,251,114,129,
    195,100,21,200,253,76,66,99,139,184,217,79,208,189,62,130,
    90,116,66,204,78,107,246,239,66,186,240,255,8,233,94,28,
    210,117,178,97,180,195,171,60,243,41,39,108,34,133,209,9,
    48,7,119,3,65,123,154,130,219,31,214,105,188,16,183,253,
    60,223,108,124,59,242,155,38,174,50,113,180,99,144,34,6,
    214,77,152,234,220,88,17,21,133,86,24,124,219,46,6,245,
    162,134,196,134,103,139,209,202,98,244,20,203,70,241,57,23,
    162,184,112,196,165,33,84,173,16,75,64,150,59,113,90,87,
    57,197,171,157,107,7,195,63,73,97,53,146,160,115,21,139,
    116,72,197,235,220,34,158,235,70,156,28,120,74,6,228,56,
    220,38,76,227,151,19,108,101,53,224,138,202,239,17,30,197,
    239,37,5,158,124,87,64,47,92,171,18,251,192,238,145,163,
    214,237,1,38,157,131,115,214,18,238,182,145,36,101,6,186,
    188,161,207,36,243,41,79,126,196,59,95,16,117,126,0,226,
    8,82,161,147,89,156,195,244,209,81,79,208,244,175,128,139,
    213,95,92,146,70,156,161,70,167,156,97,2,71,143,121,106,
    124,103,126,6,63,245,85,186,83,19,4,221,111,102,231,125,
    214,127,191,165,186,57,205,228,250,71,119,88,106,48,249,233,
    192,26,181,136,166,197,105,110,118,211,188,87,52,187,111,43,
    172,93,231,193,187,225,120,235,42,89,185,217,99,29,93,30,
    115,98,194,232,227,210,61,106,150,187,52,18,137,236,63,54,
    120,225,108,181,239,187,253,170,113,133,253,148,172,74,177,31,
    99,25,142,250,153,247,124,236,193,90,55,244,237,200,34,137,
    53,70,141,145,212,18,172,60,248,150,211,109,126,65,196,91,
    118,69,84,94,182,240,145,16,191,110,139,180,238,26,53,55,
    168,185,67,26,104,179,56,91,153,254,113,65,242,213,123,46,
    73,204,7,107,133,228,20,239,173,32,241,144,151,109,250,250,
    133,119,200,252,65,248,250,208,211,137,120,195,61,98,211,62,
    193,103,180,126,225,56,189,206,171,102,171,175,115,164,121,63,
    238,240,250,238,16,105,232,14,85,190,9,53,111,83,113,155,
    14,169,203,245,240,11,219,238,13,117,172,33,76,27,117,241,
    81,172,153,240,107,55,178,123,29,218,115,164,175,67,218,178,
    157,126,165,225,214,117,252,74,76,122,52,156,172,101,163,146,
    209,174,163,131,2,180,103,64,64,70,13,10,142,206,232,32,
    191,243,253,2,182,119,80,66,70,23,206,74,200,180,129,105,
    221,160,189,86,77,75,213,226,51,64,188,29,186,90,177,147,
    155,173,16,87,169,40,126,10,111,250,145,126,27,170,186,210,
    118,131,99,178,213,35,52,63,54,237,163,90,120,174,245,153,
    61,120,22,223,142,207,201,194,40,196,134,94,143,217,177,172,
    200,24,244,63,139,41,114,248,146,76,137,209,124,214,204,102,
    178,105,19,95,147,36,153,16,57,51,155,203,138,127,225,215,
    248,19,167,122,231,163,
};

EmbeddedPython embedded_m5_internal_enum_OpClass(
    "m5/internal/enum_OpClass.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/m5/internal/enum_OpClass.py",
    "m5.internal.enum_OpClass",
    data_m5_internal_enum_OpClass,
    1798,
    4546);

} // anonymous namespace
