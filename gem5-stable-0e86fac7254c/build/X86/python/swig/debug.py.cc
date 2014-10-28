#include "sim/init.hh"

namespace {

const uint8_t data_m5_internal_debug[] = {
    120,156,213,93,107,108,28,201,113,174,217,93,174,180,75,82,
    36,69,137,212,131,146,86,167,163,180,210,157,196,59,157,238,
    236,216,7,193,39,41,190,200,142,229,203,240,96,233,246,28,
    239,13,119,154,228,144,187,51,171,153,33,165,189,80,9,98,
    157,31,73,14,118,144,23,146,192,8,96,36,134,97,24,65,
    16,4,1,242,66,96,4,70,144,0,249,145,31,249,145,31,
    249,17,32,249,17,32,65,222,239,151,211,95,245,244,236,14,
    151,202,73,55,171,29,74,228,182,154,61,61,221,245,117,87,
    85,87,245,212,244,54,40,250,55,34,63,31,169,16,5,31,
    207,19,217,242,215,160,38,81,203,160,154,65,134,48,200,62,
    79,235,35,228,95,34,123,132,222,33,170,229,72,228,232,190,
    204,228,233,205,28,185,99,124,79,145,154,121,46,49,168,83,
    38,81,160,218,8,221,116,167,168,32,138,180,94,38,255,45,
    50,12,195,53,232,150,189,135,236,189,244,142,108,93,102,74,
    220,224,94,178,203,156,41,145,61,202,153,50,117,38,73,140,
    82,77,54,190,135,106,227,178,169,115,178,169,125,220,212,183,
    209,148,45,175,92,32,123,28,213,37,45,111,160,102,1,53,
    185,143,125,220,202,4,217,19,104,101,89,98,152,140,43,202,
    134,243,180,54,69,181,41,18,242,119,146,238,75,152,246,20,
    223,177,159,175,237,71,198,222,175,111,157,142,111,157,230,203,
    7,168,118,128,132,252,157,86,183,114,14,21,15,198,21,15,
    114,197,25,170,205,144,144,191,7,85,69,206,161,226,108,92,
    113,150,43,30,162,218,33,18,242,119,86,85,60,196,196,28,
    230,107,135,145,177,15,115,201,17,46,57,130,140,125,132,75,
    142,114,201,81,100,236,163,92,50,199,37,115,200,216,115,92,
    114,140,75,142,33,99,31,227,146,227,92,114,28,25,251,184,
    134,121,34,38,234,4,95,174,80,173,66,66,254,158,96,162,
    80,116,146,106,39,73,156,164,181,167,168,246,20,103,78,81,
    237,20,217,21,110,245,105,190,237,105,100,236,147,92,50,207,
    37,243,200,216,79,113,201,105,46,57,141,140,125,138,75,206,
    112,201,25,100,236,167,185,164,202,37,85,100,236,121,46,57,
    203,37,103,145,177,79,115,201,57,46,57,135,140,125,134,75,
    158,225,146,103,144,177,171,92,242,44,151,60,139,140,125,86,
    163,60,23,163,60,207,151,47,80,237,2,9,249,123,94,161,
    148,152,22,168,182,192,224,158,163,218,115,156,121,158,106,207,
    115,230,34,213,46,146,253,12,55,255,2,223,255,2,50,246,
    179,92,114,137,75,46,33,35,229,97,177,186,32,5,203,249,
    142,252,87,53,100,46,28,147,201,166,240,3,199,115,235,142,
    187,236,57,57,92,47,34,129,24,54,144,236,137,228,241,42,
    228,241,27,196,194,104,231,34,121,188,71,146,55,12,136,91,
    51,71,247,56,115,47,71,157,42,109,25,180,86,32,59,79,
    91,178,155,17,0,89,49,232,126,142,62,157,71,133,123,50,
    45,72,9,58,78,133,80,9,227,26,75,144,106,105,15,221,
    27,161,173,17,90,188,181,149,67,193,122,137,252,175,209,219,
    115,220,232,94,110,52,71,91,50,45,208,253,2,221,43,210,
    77,89,73,22,173,149,48,140,198,173,45,137,84,150,44,86,
    11,146,218,27,61,112,1,197,118,124,215,106,137,16,32,235,
    182,88,218,88,169,150,245,53,47,184,208,182,194,85,147,43,
    231,49,10,173,118,200,141,120,174,8,71,101,102,217,113,237,
    122,203,179,55,154,34,220,139,22,234,203,78,83,212,235,124,
    241,122,171,237,249,225,119,251,190,231,155,24,72,46,108,122,
    86,124,7,134,177,209,244,2,81,69,111,220,141,137,230,67,
    212,94,110,115,139,32,128,9,196,205,182,8,26,190,211,14,
    229,252,168,22,81,27,173,85,49,51,156,4,111,202,100,97,
    213,107,137,5,209,114,154,157,133,107,34,88,15,189,246,194,
    21,225,54,86,91,150,191,238,184,43,11,214,165,133,21,209,
    122,241,124,16,90,75,77,113,254,57,241,193,151,150,173,198,
    7,46,190,120,169,177,176,180,225,52,237,133,91,31,124,105,
    161,221,9,87,61,119,33,184,227,172,44,240,208,92,144,37,
    251,209,137,44,169,59,12,175,190,42,154,109,225,143,163,244,
    8,8,48,38,141,49,163,104,228,141,170,49,46,115,35,242,
    147,55,230,114,163,198,13,7,0,27,0,141,193,206,107,30,
    250,69,226,217,146,147,189,158,35,127,14,28,178,38,127,13,
    76,169,228,147,69,92,203,241,181,239,195,200,168,210,181,60,
    230,93,21,110,49,87,73,246,146,53,95,198,68,187,196,172,
    49,66,107,69,82,44,35,57,77,241,144,223,65,42,171,163,
    153,156,108,188,64,193,151,147,45,184,147,36,71,94,170,106,
    89,52,35,187,250,44,115,225,98,21,132,223,96,190,8,87,
    157,192,187,227,242,232,35,207,114,179,40,199,228,181,206,39,
    151,214,68,35,12,78,200,130,55,188,141,74,195,114,93,47,
    172,88,182,93,177,194,208,119,150,54,66,17,84,66,175,50,
    31,84,75,152,238,41,205,90,113,123,157,182,102,37,76,187,
    100,37,245,135,237,52,66,249,199,52,255,193,227,31,136,80,
    178,197,170,103,7,178,28,77,172,136,208,4,145,225,62,153,
    188,162,187,99,254,171,22,53,183,4,162,185,28,150,153,241,
    172,32,168,115,119,40,103,30,195,221,155,86,115,67,137,131,
    100,142,80,246,138,172,234,104,136,92,118,8,56,53,76,12,
    93,221,245,92,187,35,169,116,26,243,32,224,16,243,218,24,
    129,219,14,74,78,219,35,211,34,141,75,206,155,204,53,0,
    168,16,241,25,243,216,12,224,19,207,187,17,105,11,201,111,
    247,165,78,169,230,88,41,48,50,22,192,10,114,184,217,4,
    59,155,71,145,204,33,57,166,193,15,103,4,198,183,143,192,
    69,244,154,99,216,141,124,4,48,22,162,27,9,33,58,220,
    21,34,169,1,23,33,12,57,136,76,87,24,242,24,2,255,
    114,196,249,16,51,57,249,242,114,15,191,243,192,152,147,0,
    92,212,172,106,130,255,122,153,112,165,135,9,77,204,9,115,
    160,121,248,65,131,120,34,171,65,92,81,131,248,34,122,29,
    139,120,103,156,121,166,108,52,48,241,185,104,72,121,56,175,
    201,76,103,22,195,217,59,144,179,114,69,187,233,142,243,210,
    196,203,27,91,114,74,119,168,241,85,153,2,184,108,57,79,
    51,209,146,19,64,212,219,190,119,183,83,241,150,43,33,105,
    26,94,158,15,46,204,7,31,150,202,160,114,153,213,139,82,
    7,74,224,125,209,246,165,96,151,248,15,37,172,117,22,220,
    122,180,124,200,1,63,136,129,204,233,97,102,221,20,132,62,
    84,210,16,199,184,28,143,49,72,254,48,186,44,243,0,231,
    105,86,126,202,6,211,85,247,88,51,178,9,193,87,229,231,
    10,134,26,104,5,193,146,55,23,21,213,12,8,208,204,51,
    9,110,25,10,28,243,156,108,255,154,22,181,34,197,188,129,
    79,30,4,131,251,191,64,108,170,25,244,121,2,31,200,233,
    142,228,133,37,19,31,76,231,52,170,127,134,88,233,236,176,
    188,229,148,220,229,34,181,36,197,50,248,0,87,85,171,221,
    199,232,139,61,26,235,126,158,12,172,76,249,200,136,234,93,
    153,10,177,164,50,3,61,212,234,83,72,138,52,166,104,213,
    10,80,77,9,111,62,22,222,174,242,139,237,32,169,145,134,
    195,91,123,85,103,117,208,117,189,203,89,80,251,71,141,233,
    92,15,191,60,139,228,124,204,42,134,46,123,236,36,158,216,
    174,167,123,86,170,186,210,141,223,3,58,10,76,249,68,145,
    87,103,101,44,92,15,133,111,133,158,31,11,197,136,22,138,
    191,136,133,66,176,202,126,135,205,108,164,57,204,255,253,156,
    33,29,89,105,162,192,166,47,144,24,161,90,145,196,30,88,
    195,240,80,71,34,15,85,154,248,200,140,82,215,163,101,111,
    21,78,173,1,79,52,114,106,247,105,167,86,186,163,99,156,
    153,140,252,86,233,129,70,158,234,126,120,170,200,76,71,158,
    170,244,48,35,151,244,32,60,81,100,102,34,79,84,250,140,
    210,229,68,230,80,228,114,194,65,156,137,28,68,229,91,74,
    119,80,202,59,86,12,150,48,253,97,237,11,173,157,88,192,
    120,58,111,168,137,142,121,86,177,35,146,187,67,212,118,224,
    200,151,155,86,107,201,182,46,47,162,67,244,218,208,10,34,
    167,33,76,246,66,128,112,27,15,66,193,127,62,167,161,108,
    14,81,211,61,15,70,212,16,88,174,109,175,193,234,237,245,
    85,81,105,137,214,146,116,5,87,157,118,101,185,105,173,240,
    44,229,35,136,159,212,16,67,230,203,237,70,67,0,29,122,
    195,171,52,60,87,46,71,27,13,201,226,21,91,72,95,73,
    216,149,243,21,94,203,42,78,80,177,150,228,85,171,17,42,
    97,77,106,29,182,73,45,127,37,96,243,115,253,14,178,67,
    158,229,186,116,129,29,105,115,191,30,207,114,31,163,130,72,
    187,203,159,140,99,36,86,63,71,104,168,11,23,166,243,102,
    31,173,49,71,142,171,233,90,51,180,193,215,203,142,236,76,
    30,232,83,76,117,118,6,50,65,131,5,231,150,70,163,60,
    199,120,21,238,21,178,24,146,90,65,251,81,77,247,163,114,
    220,134,223,99,54,225,14,119,136,204,5,174,1,9,111,244,
    169,143,212,200,108,209,139,204,252,174,161,206,25,3,3,5,
    181,4,23,106,96,175,238,4,236,221,157,24,113,118,7,96,
    210,203,182,220,134,232,1,119,105,184,224,160,18,52,21,111,
    166,4,184,131,164,137,219,27,86,51,59,116,208,90,76,194,
    167,211,104,144,29,56,178,225,181,59,89,40,16,102,70,116,
    254,253,3,6,228,138,187,97,102,128,208,249,103,210,0,218,
    65,180,234,12,169,94,207,4,84,180,211,197,4,212,7,12,
    172,237,139,77,199,219,8,50,3,166,9,120,43,165,186,152,
    233,199,102,217,155,217,170,67,56,140,17,17,86,74,120,7,
    119,226,73,113,91,114,100,102,232,248,105,0,211,176,244,56,
    192,185,34,123,112,160,161,145,18,220,142,218,196,177,108,59,
    75,120,145,237,206,84,216,143,5,96,176,177,180,11,0,50,
    21,98,240,170,165,94,207,120,2,121,187,80,17,177,252,56,
    224,101,60,125,10,30,19,177,66,219,87,188,132,107,185,213,
    117,45,153,188,236,22,104,71,142,94,189,190,170,201,173,242,
    158,96,188,69,203,91,90,106,15,172,237,123,109,225,135,29,
    181,27,249,18,146,179,72,230,19,10,209,22,77,17,138,122,
    114,102,194,73,138,31,43,216,34,8,125,175,83,175,71,163,
    37,111,168,215,217,39,52,63,132,228,101,36,151,145,124,4,
    201,21,36,216,180,53,63,138,4,251,109,230,199,144,124,47,
    18,60,27,49,95,67,98,34,129,63,111,126,10,201,205,196,
    80,14,199,175,197,19,119,144,17,96,115,178,104,28,53,74,
    70,81,126,240,51,38,127,74,15,252,73,236,156,51,139,148,
    99,9,216,190,71,198,3,141,203,75,190,176,214,219,158,227,
    134,195,198,9,63,162,69,241,19,43,182,94,63,138,125,36,
    13,35,222,235,188,77,131,222,235,68,102,140,119,60,137,119,
    57,75,122,151,179,28,237,114,154,139,213,209,29,165,238,17,
    118,30,121,207,110,200,219,59,183,99,125,49,136,13,71,243,
    98,134,8,204,23,40,122,150,146,253,102,35,175,0,230,139,
    195,29,13,232,70,159,254,95,253,191,171,182,22,55,250,104,
    125,4,239,172,20,73,63,199,52,100,2,1,43,214,230,64,
    32,32,8,39,179,13,0,116,126,103,32,48,214,29,59,27,
    207,24,48,208,249,221,52,48,70,53,12,225,130,128,76,128,
    192,143,82,221,119,210,64,25,139,25,203,9,50,195,162,66,
    225,184,255,183,53,152,42,219,112,177,149,103,98,59,254,193,
    118,157,138,79,99,187,14,104,76,108,2,155,32,91,61,64,
    126,11,9,156,105,19,62,153,185,76,195,55,189,176,19,216,
    70,71,216,126,77,154,94,234,135,77,166,69,167,213,110,138,
    157,77,21,151,30,194,84,81,145,197,145,193,82,212,22,202,
    30,109,161,236,37,161,44,151,61,218,114,217,27,89,46,98,
    140,214,198,217,78,41,117,237,148,50,61,129,118,202,15,209,
    147,110,167,196,8,30,206,78,137,189,210,15,117,197,93,186,
    164,42,250,245,64,79,128,16,199,124,24,55,221,73,4,17,
    109,113,232,71,61,167,226,136,186,179,88,136,133,10,142,149,
    43,238,212,187,76,169,66,132,160,122,172,118,91,184,246,118,
    43,102,106,184,99,5,77,240,195,20,7,102,76,24,121,58,
    32,63,239,71,15,78,37,132,175,142,232,195,140,246,110,117,
    240,227,70,240,57,74,161,216,103,146,128,234,8,12,121,91,
    248,94,70,91,237,80,208,61,52,124,158,98,231,108,0,179,
    149,221,50,204,235,201,143,165,153,167,253,73,40,25,46,195,
    188,44,190,219,135,101,247,58,5,95,162,247,180,21,186,102,
    2,91,13,77,36,88,71,163,157,165,37,207,195,214,78,108,
    20,116,185,75,111,18,117,85,95,108,82,12,219,114,192,198,
    215,15,82,143,229,32,237,134,130,180,24,114,197,124,100,57,
    192,136,187,234,181,218,222,134,107,239,108,59,96,199,105,0,
    182,67,137,214,202,137,109,14,105,35,236,221,145,89,118,185,
    141,240,147,244,164,219,8,49,130,108,109,4,140,22,108,132,
    94,246,83,67,180,70,253,187,28,25,216,7,63,77,3,177,
    15,166,183,137,88,214,107,206,207,81,138,53,231,192,118,48,
    89,175,58,63,223,135,102,247,174,58,95,209,180,86,49,208,
    15,179,234,108,91,94,192,74,209,242,146,144,154,204,22,24,
    160,249,9,116,4,131,191,103,129,121,63,251,254,88,13,172,
    102,19,128,130,97,227,192,158,206,87,169,107,88,106,186,241,
    231,171,125,146,241,238,131,200,199,107,117,160,95,113,216,112,
    159,207,153,216,204,249,90,58,12,236,180,175,90,238,138,200,
    12,5,118,113,190,145,14,5,108,154,64,132,215,208,100,102,
    56,126,64,182,255,203,233,112,64,166,26,77,97,249,217,34,
    145,228,209,175,110,67,242,40,114,13,24,246,70,171,29,163,
    24,186,116,223,147,237,255,122,23,1,251,201,87,59,114,104,
    131,126,115,23,79,99,31,213,220,237,127,170,39,141,91,116,
    242,196,25,183,191,73,79,186,113,27,35,200,214,184,133,76,
    176,113,203,108,182,171,204,218,223,166,7,155,181,187,215,118,
    250,150,158,87,126,2,254,48,182,19,207,3,228,77,91,76,
    106,42,50,179,149,224,136,255,134,30,251,174,173,244,126,215,
    105,223,107,125,194,105,248,222,107,87,51,89,21,176,121,250,
    7,148,106,125,67,13,215,243,91,86,51,75,32,159,149,237,
    255,81,58,32,48,56,156,192,204,118,66,228,98,66,127,156,
    14,7,216,42,104,172,10,251,10,194,111,50,65,33,151,79,
    250,147,116,40,96,111,132,214,186,184,186,42,26,81,12,81,
    22,72,176,5,255,167,219,144,104,52,15,99,54,225,178,216,
    20,110,120,251,154,52,158,134,173,172,176,203,254,103,41,168,
    135,146,110,119,234,114,240,5,71,175,12,153,252,47,200,246,
    255,60,5,249,88,79,112,44,133,104,121,161,120,245,218,149,
    215,60,127,232,24,190,40,219,255,203,116,162,0,24,193,118,
    24,89,8,195,143,200,246,255,170,139,133,157,229,87,34,95,
    191,223,6,151,6,247,0,182,156,163,157,230,146,126,80,93,
    214,207,167,71,117,64,221,152,126,127,120,92,191,63,188,79,
    191,63,60,161,223,31,158,212,239,15,79,233,247,135,247,235,
    247,135,167,245,251,195,7,244,251,195,7,245,251,195,51,250,
    253,225,89,253,254,240,33,253,254,240,97,138,14,161,58,162,
    207,158,58,170,143,156,154,211,39,77,29,211,7,76,29,215,
    231,74,157,192,113,82,200,84,162,227,164,106,39,245,225,80,
    79,233,51,161,78,233,163,160,158,214,39,64,205,235,131,159,
    78,147,56,195,7,63,157,213,7,63,157,131,143,114,154,158,
    64,31,229,111,232,73,247,81,98,4,239,237,163,188,143,167,
    155,90,174,56,248,25,1,202,153,197,95,107,2,254,54,158,
    177,62,94,43,199,51,118,127,155,183,241,110,204,99,67,246,
    54,16,93,253,119,125,20,63,226,30,121,60,9,25,63,61,
    231,71,150,127,159,6,205,84,18,141,122,238,153,9,20,196,
    224,254,67,26,40,147,73,40,77,225,102,20,210,160,94,14,
    224,254,255,49,13,160,177,94,64,109,175,157,9,24,236,104,
    200,190,255,41,1,4,228,61,250,11,103,61,147,35,173,175,
    160,233,52,50,125,225,108,140,167,169,75,201,63,15,22,98,
    176,107,32,118,41,249,151,193,66,180,69,115,151,64,236,82,
    242,175,41,33,30,232,131,40,215,185,86,150,8,71,53,66,
    69,200,191,13,22,160,228,255,221,1,48,38,228,223,7,11,
    48,216,45,0,99,66,254,35,37,192,137,94,128,81,188,101,
    86,216,120,219,251,63,41,197,42,183,175,23,141,104,181,195,
    108,14,102,224,163,38,208,251,127,165,1,51,222,11,38,112,
    222,206,38,108,30,219,251,232,252,191,7,54,47,252,160,50,
    179,121,225,222,255,39,165,212,36,167,230,142,213,206,78,31,
    240,252,72,10,254,55,205,252,204,244,226,89,193,105,116,205,
    166,215,200,204,35,4,193,9,42,190,51,48,230,91,18,43,
    142,155,25,243,113,239,160,127,48,118,60,148,117,86,118,188,
    236,219,72,3,36,177,240,248,217,77,11,30,190,171,238,115,
    105,224,36,52,130,159,213,196,64,25,160,243,124,26,40,9,
    55,94,186,107,245,37,171,177,158,221,9,51,17,1,5,35,
    157,202,78,154,6,190,21,100,120,178,12,219,7,32,97,36,
    1,234,113,70,25,64,111,32,202,64,15,193,174,138,51,40,
    26,59,199,25,60,250,44,239,79,240,238,70,176,170,152,55,
    179,153,230,99,145,53,25,229,52,82,153,224,223,101,223,115,
    179,57,162,11,172,203,189,143,14,76,91,102,166,94,32,29,
    232,124,44,165,106,73,250,80,65,224,172,184,217,30,125,164,
    104,24,31,36,44,95,176,7,146,41,44,69,195,190,65,194,
    114,220,64,248,97,182,176,20,13,19,41,97,37,118,172,229,
    72,9,127,51,227,179,211,34,34,38,7,102,139,52,172,182,
    213,112,50,242,233,97,139,104,2,166,250,32,197,79,169,118,
    93,52,220,180,166,181,250,12,189,103,52,28,158,164,241,83,
    45,126,24,196,143,81,204,31,71,130,200,125,243,167,144,252,
    12,146,159,69,130,247,41,76,188,168,96,254,2,69,182,132,
    249,85,36,248,186,19,19,241,229,230,215,145,32,70,219,252,
    38,18,68,57,155,191,130,4,81,194,230,175,33,65,180,173,
    138,194,67,196,155,249,91,72,126,7,201,239,34,249,22,146,
    223,67,242,109,36,191,159,144,226,40,90,47,54,105,50,139,
    215,251,81,217,254,95,163,35,156,200,20,197,235,61,234,79,
    97,0,231,33,193,250,145,126,179,30,144,79,169,239,57,26,
    246,104,32,214,111,206,72,23,16,212,131,98,216,228,255,161,
    108,191,210,37,159,205,227,109,223,18,165,168,193,105,58,234,
    187,2,58,1,206,187,34,115,34,198,192,158,139,62,40,12,
    146,198,150,224,13,171,165,190,172,134,191,130,197,60,137,228,
    148,150,64,94,11,212,87,72,240,55,52,168,239,197,144,54,
    59,31,240,195,231,249,152,23,144,224,124,173,16,223,55,178,
    237,216,55,192,240,165,35,27,200,2,62,156,138,143,131,96,
    21,170,94,55,239,189,190,138,75,124,246,95,207,251,232,189,
    21,160,51,66,116,154,120,135,43,81,5,175,194,240,187,36,
    252,42,6,191,199,192,175,0,112,20,61,7,177,170,55,218,
    56,154,54,113,171,58,186,118,211,242,121,252,228,76,243,130,
    241,9,235,238,235,78,99,157,3,70,57,216,146,35,21,57,
    208,143,99,228,56,212,140,3,182,56,226,137,67,133,88,246,
    146,207,146,18,29,97,137,137,98,45,77,175,117,197,9,117,
    79,175,216,182,207,90,228,186,187,105,53,29,251,245,85,95,
    88,246,245,107,124,71,84,134,32,168,235,215,152,161,153,45,
    134,204,138,234,36,126,245,85,40,151,33,21,193,47,201,4,
    95,7,84,154,40,25,197,28,190,118,42,111,148,141,113,163,
    96,140,141,151,242,165,98,105,36,47,117,15,74,166,141,114,
    190,84,158,153,45,225,255,92,201,152,25,149,185,220,204,20,
    167,163,81,233,78,63,198,76,73,94,85,26,232,65,117,146,
    245,207,198,245,227,59,254,15,251,195,238,73,
};

EmbeddedPython embedded_m5_internal_debug(
    "m5/internal/debug.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/build/X86/python/swig/debug.py",
    "m5.internal.debug",
    data_m5_internal_debug,
    4620,
    28887);

} // anonymous namespace