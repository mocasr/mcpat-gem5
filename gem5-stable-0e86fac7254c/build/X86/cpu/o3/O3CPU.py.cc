#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_O3CPU[] = {
    120,156,189,152,91,119,19,57,18,128,101,231,226,220,32,33,
    16,238,151,230,30,174,230,14,195,48,12,137,147,128,135,144,
    132,182,57,156,201,139,79,187,37,199,74,218,221,166,213,29,
    226,57,179,79,236,219,62,236,156,179,255,96,127,201,62,238,
    227,254,163,221,170,82,203,45,7,134,57,251,192,224,184,105,
    125,42,149,74,37,169,84,178,207,178,127,67,240,125,225,48,
    166,246,224,133,195,95,129,5,140,117,10,108,179,192,10,88,
    46,178,160,200,234,217,219,144,126,27,98,193,48,235,12,179,
    205,225,190,204,136,174,25,102,193,40,235,140,178,205,81,93,
    51,194,130,18,235,148,216,102,9,202,163,76,12,179,86,129,
    241,18,251,43,99,159,24,251,121,115,140,241,49,86,155,31,
    135,206,229,127,225,223,124,1,222,146,49,120,52,83,25,240,
    229,112,87,19,124,92,215,175,37,120,44,122,74,84,54,222,
    105,128,141,215,239,87,218,194,223,17,177,70,211,40,19,123,
    161,223,222,136,5,151,126,18,197,201,4,176,37,17,203,93,
    144,221,120,231,27,7,12,163,40,58,224,111,240,38,24,142,
    27,12,223,44,162,39,54,135,208,98,24,30,154,11,197,17,
    42,14,153,34,141,7,134,156,21,75,76,140,177,237,113,28,
    52,12,245,83,145,109,78,24,82,194,97,34,153,36,50,197,
    56,192,9,34,7,44,50,73,228,160,69,166,136,76,91,228,
    0,145,25,163,249,32,227,211,68,14,25,50,195,248,33,34,
    179,86,171,89,34,135,45,114,152,200,17,139,28,33,50,103,
    145,57,34,71,173,190,142,18,57,102,201,28,35,114,220,34,
    199,137,156,176,200,9,34,39,45,61,39,137,156,178,100,78,
    17,57,109,200,105,198,207,16,57,99,201,156,37,114,214,210,
    115,142,200,57,139,56,68,28,139,156,39,114,222,16,248,187,
    64,228,2,145,139,76,92,194,181,200,47,18,188,108,117,119,
    137,200,21,139,92,38,114,213,82,126,133,200,188,69,174,18,
    185,102,90,205,51,126,141,200,117,75,207,117,34,55,76,171,
    27,140,223,36,114,211,34,183,136,220,50,228,54,227,101,34,
    183,45,114,135,72,217,144,187,140,223,35,114,135,200,93,38,
    238,49,126,159,200,125,35,243,128,241,135,68,30,24,242,136,
    241,199,68,30,90,228,9,145,71,150,211,190,35,242,216,144,
    167,140,127,79,228,137,69,158,17,249,14,183,192,230,83,38,
    190,103,252,7,118,130,63,103,59,69,22,135,67,226,25,219,
    126,130,99,59,2,149,33,203,218,9,104,247,35,181,251,193,
    90,194,47,136,60,55,100,129,241,69,34,63,90,22,85,136,
    188,32,2,2,75,140,47,19,89,52,100,133,241,151,68,42,
    68,64,224,21,227,85,34,203,150,204,79,68,86,44,153,215,
    68,94,90,50,171,68,94,89,50,111,136,84,141,204,26,227,
    235,68,126,34,242,154,137,215,140,111,48,177,202,182,65,18,
    162,223,91,170,93,51,51,99,251,134,187,84,183,206,120,13,
    131,201,230,6,115,107,243,117,8,76,238,8,60,20,70,51,
    191,155,150,163,251,101,142,1,236,118,187,237,99,152,51,223,
    10,134,47,140,99,16,178,106,243,69,120,89,75,70,49,12,
    202,142,12,183,230,49,202,233,176,136,193,222,15,148,38,248,
    80,27,240,40,183,163,142,40,139,142,12,122,229,37,161,118,
    146,168,91,94,20,16,59,59,94,188,3,10,202,222,131,242,
    150,232,60,188,165,18,175,25,136,91,119,196,147,71,45,207,
    127,124,239,225,3,191,172,98,191,156,217,70,113,245,118,183,
    151,76,130,210,142,232,68,113,175,209,137,184,184,134,29,161,
    85,172,248,101,179,19,6,102,35,89,211,102,34,171,199,169,
    160,146,91,50,198,126,67,139,15,130,210,88,124,72,101,44,
    26,190,231,183,133,186,245,127,26,237,142,27,47,255,41,6,
    31,66,205,105,183,11,231,90,35,241,118,68,35,218,21,241,
    221,220,102,73,93,31,128,71,53,148,137,244,2,199,143,210,
    48,145,255,70,140,243,83,193,81,58,27,208,94,73,180,90,
    205,209,241,232,195,124,57,73,228,180,68,226,183,29,46,2,
    175,71,53,174,8,189,206,103,53,87,80,191,82,169,40,47,
    239,9,63,77,68,249,125,44,19,209,244,252,157,47,41,169,
    68,157,142,76,246,213,200,49,99,210,10,193,143,146,39,109,
    249,2,225,201,62,108,166,173,150,136,29,37,127,17,142,12,
    157,102,47,17,74,29,29,176,139,107,219,117,111,87,191,110,
    216,128,236,209,1,203,6,170,230,250,6,236,175,153,202,189,
    69,6,255,81,143,177,182,243,75,61,126,86,149,207,194,64,
    213,84,62,220,188,203,92,205,239,117,174,157,140,171,130,26,
    228,14,251,106,3,117,207,140,7,69,133,22,210,85,206,188,
    12,19,17,135,176,166,160,42,129,85,84,93,126,239,192,194,
    221,18,215,20,110,164,37,169,186,94,127,42,105,106,181,38,
    93,198,104,150,247,246,37,198,69,23,216,17,116,126,26,250,
    137,140,176,175,119,176,142,157,110,20,5,127,228,106,95,187,
    68,15,227,236,192,144,99,17,197,16,65,205,114,202,253,154,
    185,81,27,131,160,246,33,245,148,89,140,184,141,136,214,99,
    175,235,4,94,2,59,183,167,102,243,197,97,97,73,17,251,
    38,10,75,232,212,94,184,173,8,122,6,35,63,122,49,87,
    100,102,26,74,223,195,241,169,235,191,215,0,190,40,63,40,
    46,29,236,228,52,6,159,180,211,4,241,168,229,4,145,199,
    157,15,169,0,63,139,48,137,37,108,144,51,3,2,10,146,
    96,49,40,33,49,144,169,27,3,98,221,192,243,133,66,111,
    169,182,108,37,142,199,57,152,45,90,216,216,199,28,91,85,
    209,63,237,40,13,56,206,148,8,57,142,219,217,149,81,160,
    199,2,210,90,82,112,26,2,90,166,156,43,218,0,229,0,
    217,78,85,146,21,229,111,255,25,98,164,114,112,40,101,109,
    174,12,85,162,76,247,184,214,160,71,167,107,114,122,48,145,
    204,104,162,224,174,23,72,14,147,192,37,230,244,52,248,85,
    15,250,161,88,3,166,104,133,20,95,201,189,234,24,142,131,
    160,18,137,83,93,178,235,78,12,24,228,102,235,102,145,38,
    71,73,60,9,212,165,65,183,181,123,10,102,39,112,112,115,
    108,1,139,197,150,84,176,79,212,126,255,26,193,22,12,51,
    129,216,15,139,26,218,228,242,116,81,169,47,184,47,151,235,
    141,106,109,129,14,237,189,39,143,212,185,47,171,241,125,171,
    171,139,3,50,232,188,56,165,13,180,111,222,255,133,243,238,
    12,8,239,219,27,102,13,225,6,170,189,169,59,185,32,173,
    121,180,187,222,142,5,204,108,66,251,5,64,32,50,50,147,
    181,209,187,163,27,5,210,215,73,193,134,23,39,18,205,17,
    156,34,29,10,173,214,222,58,181,182,23,163,198,13,18,149,
    28,173,187,104,213,163,94,152,106,152,233,190,164,23,195,158,
    198,49,207,101,114,213,253,106,212,133,188,230,107,10,140,33,
    238,250,226,126,13,23,173,170,175,168,160,25,115,225,124,229,
    110,212,4,167,31,202,154,101,81,69,43,35,161,48,237,100,
    62,34,39,233,43,170,211,191,163,210,146,92,14,105,25,214,
    107,235,206,27,74,162,28,76,162,2,202,66,48,140,143,155,
    44,228,159,58,11,129,164,239,4,220,19,119,70,89,252,119,
    188,156,226,29,188,128,55,248,191,192,13,62,41,98,46,254,
    43,99,219,67,120,41,133,212,10,238,162,201,8,94,71,225,
    249,137,13,67,85,99,148,253,90,192,132,26,197,74,108,123,
    12,211,85,124,31,101,141,146,85,53,62,88,165,225,4,203,
    138,19,44,156,198,59,237,203,87,48,213,120,147,213,191,31,
    212,230,49,122,174,185,184,72,104,41,123,113,199,186,233,99,
    154,186,16,119,234,171,139,116,233,255,24,197,59,184,251,105,
    181,136,61,153,172,135,203,113,12,73,10,42,73,187,184,189,
    13,57,140,226,94,28,174,135,65,111,61,92,133,70,154,83,
    72,195,45,140,49,120,217,117,215,221,167,78,246,219,128,19,
    129,172,147,165,77,16,17,96,194,0,46,184,111,28,216,103,
    231,41,13,34,171,84,102,231,60,29,185,152,73,185,216,155,
    139,216,197,99,41,193,32,191,226,5,74,80,218,71,63,73,
    232,136,23,211,24,101,210,116,143,155,1,243,164,73,195,132,
    20,174,1,199,201,112,54,50,202,211,181,181,34,104,81,7,
    223,58,105,68,39,66,56,207,188,81,233,166,255,192,174,112,
    253,179,194,76,97,166,56,93,24,133,207,84,225,20,124,102,
    135,70,10,243,111,89,246,99,76,163,129,71,104,163,65,139,
    184,129,89,125,26,96,145,18,225,94,87,16,247,247,246,26,
    109,88,219,224,4,156,62,63,240,148,130,253,209,142,184,139,
    58,92,218,37,147,198,125,180,123,72,249,187,80,201,45,8,
    9,84,240,32,92,237,202,68,111,23,74,197,41,71,37,15,
    86,122,126,32,84,130,7,175,78,198,234,17,133,152,37,60,
    199,9,235,132,105,0,99,106,33,197,199,207,68,117,154,48,
    128,177,75,58,45,222,227,177,79,45,169,168,195,126,13,22,
    21,173,58,211,137,206,211,116,211,25,211,139,13,15,91,221,
    216,124,214,40,30,196,147,253,113,233,254,251,58,117,2,243,
    185,206,253,220,56,197,230,147,125,131,115,165,166,61,228,109,
    185,245,102,84,125,136,26,37,166,89,245,40,203,179,52,199,
    85,196,179,20,79,235,156,48,146,186,136,187,225,99,211,126,
    95,194,132,142,166,112,229,221,6,164,112,164,99,73,180,188,
    52,72,50,130,149,173,148,94,251,227,214,241,243,115,19,33,
    28,231,131,211,131,209,189,97,89,81,230,150,151,49,57,91,
    213,185,25,41,209,142,183,32,10,97,90,6,189,209,20,99,
    10,155,101,93,6,225,38,95,125,187,172,143,68,42,213,250,
    37,212,9,103,20,12,145,246,85,13,147,38,218,23,139,48,
    22,29,30,14,104,17,170,199,64,165,18,220,115,148,143,52,
    32,245,104,192,170,246,226,70,23,174,246,145,222,4,171,43,
    181,58,117,140,133,90,173,170,11,37,125,128,192,25,163,200,
    72,120,223,128,44,160,26,38,174,216,210,134,100,104,5,83,
    11,130,120,58,54,184,246,244,154,174,172,84,176,134,194,26,
    217,89,131,240,67,38,134,118,61,157,234,64,170,253,129,102,
    34,224,124,67,80,185,234,160,94,147,19,152,148,0,103,179,
    150,224,41,73,150,130,16,73,100,39,225,148,70,224,146,12,
    96,152,132,97,208,142,211,21,253,211,86,207,105,39,169,26,
    217,131,166,156,139,100,250,192,178,76,102,186,15,114,161,140,
    233,53,165,229,220,97,115,4,65,48,130,132,199,197,131,155,
    86,115,179,255,219,49,77,65,40,32,97,129,3,217,117,6,
    162,244,183,11,213,244,187,207,101,212,254,27,60,48,42,143,
    22,167,135,241,51,91,132,79,1,62,249,211,188,229,255,155,
    119,248,204,89,239,150,116,97,60,251,244,91,14,141,22,102,
    74,51,57,43,236,251,20,167,168,238,112,97,188,184,70,191,
    215,147,163,58,15,111,195,234,146,161,200,22,212,184,102,93,
    12,238,138,124,135,165,56,218,235,185,120,222,185,11,253,115,
    20,125,79,195,252,51,252,73,150,60,211,199,214,115,188,25,
    208,69,117,166,48,1,159,25,250,206,20,255,7,169,30,89,
    124,
};

EmbeddedPython embedded_m5_objects_O3CPU(
    "m5/objects/O3CPU.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/cpu/o3/O3CPU.py",
    "m5.objects.O3CPU",
    data_m5_objects_O3CPU,
    2545,
    6419);

} // anonymous namespace
