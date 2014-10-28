#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_BaseCPU[] = {
    120,156,197,90,75,87,29,73,114,142,170,203,67,23,16,23,
    33,64,2,36,81,122,141,174,212,18,168,213,122,245,67,47,
    64,15,166,209,99,10,24,73,119,102,186,92,84,37,220,130,
    122,92,85,214,21,224,163,94,169,199,94,120,227,99,239,103,
    126,129,143,255,133,207,241,102,22,125,102,22,222,120,51,139,
    241,198,155,94,122,97,59,34,178,94,192,213,200,246,57,180,
    121,36,153,145,153,17,153,145,145,95,68,198,197,129,244,171,
    130,191,247,13,0,41,116,0,23,127,52,240,1,26,170,174,
    131,175,65,160,67,67,7,141,218,21,240,43,176,156,214,186,
    84,173,11,252,110,8,122,160,209,163,198,116,131,223,11,65,
    47,52,122,85,187,7,252,67,16,28,130,198,33,213,238,5,
    191,10,65,21,26,213,156,103,31,44,139,67,240,30,197,246,
    3,46,195,61,4,227,110,21,54,117,136,191,231,101,244,129,
    63,0,193,97,104,28,134,96,16,26,131,106,98,63,248,53,
    8,106,208,168,169,246,0,248,67,16,12,65,99,8,52,129,
    127,142,64,184,163,101,236,14,51,187,73,30,56,8,254,48,
    4,195,208,24,86,19,107,224,31,133,224,40,52,142,170,246,
    16,248,35,16,140,64,99,4,25,141,48,163,171,57,163,35,
    204,200,229,129,195,224,143,66,48,10,141,81,53,241,40,248,
    99,16,140,65,99,76,181,71,192,63,6,193,49,104,28,67,
    70,199,152,209,159,242,13,142,50,163,127,224,129,99,224,31,
    135,224,56,52,142,171,137,199,192,31,135,96,28,26,227,170,
    125,28,252,9,8,38,160,49,129,140,38,152,209,111,114,70,
    227,204,72,215,105,224,4,248,147,16,76,66,3,203,19,208,
    56,1,193,73,104,156,84,76,38,193,63,5,193,41,104,156,
    82,237,19,224,79,65,48,5,141,41,100,58,197,76,23,114,
    166,39,153,233,215,204,244,20,248,6,4,6,52,12,53,113,
    10,252,211,16,156,134,198,105,213,54,192,63,3,193,25,104,
    156,65,70,103,152,17,82,79,131,168,194,154,6,238,25,248,
    14,232,112,95,55,206,146,117,45,213,207,162,201,121,255,133,
    95,207,234,26,86,147,67,88,172,182,61,223,125,24,190,85,
    20,42,46,169,106,63,22,115,81,83,196,34,76,102,219,82,
    17,251,176,88,8,101,178,28,219,142,136,21,173,138,197,195,
    109,177,151,244,84,4,207,87,55,132,147,240,164,229,7,230,
    227,135,203,214,194,210,131,164,27,155,182,223,106,218,117,61,
    91,196,3,106,206,47,207,22,141,133,229,89,197,170,150,83,
    194,68,196,113,187,149,200,98,241,170,35,229,41,91,118,236,
    20,125,75,212,92,94,44,177,97,74,39,54,170,3,217,208,
    157,220,190,125,83,245,244,96,241,234,246,205,156,197,128,106,
    47,70,142,237,63,104,121,206,174,81,52,187,11,171,129,215,
    74,25,247,146,14,176,149,207,31,76,9,123,87,144,13,204,
    22,96,199,65,189,146,177,126,16,7,200,32,57,172,170,75,
    137,189,46,174,45,60,125,186,178,155,50,143,20,197,44,37,
    239,149,145,178,202,84,213,138,182,178,163,162,253,191,160,230,
    46,85,49,165,147,170,84,7,178,161,85,207,218,82,204,189,
    88,113,202,144,54,75,144,246,215,40,68,32,170,104,132,34,
    136,97,162,2,141,46,178,193,70,55,136,30,130,55,178,76,
    141,160,138,154,149,172,121,136,155,93,89,179,202,205,238,172,
    217,71,152,246,157,2,171,1,216,56,12,98,16,54,106,4,
    108,239,117,2,31,34,30,161,91,132,24,70,148,97,166,28,
    37,24,67,204,34,202,72,70,25,0,4,38,162,140,50,101,
    12,16,37,16,158,136,114,156,41,227,60,171,198,148,9,166,
    76,130,56,65,16,69,148,147,217,172,10,32,46,17,229,84,
    137,50,204,148,41,166,24,4,78,136,71,68,57,93,26,51,
    202,148,51,32,206,194,198,57,88,103,40,34,202,121,16,63,
    33,24,26,71,232,33,32,248,173,70,115,46,128,184,64,55,
    25,33,135,6,213,97,23,113,130,137,23,153,120,137,87,57,
    201,148,79,152,251,101,16,87,104,216,186,70,200,67,244,105,
    8,95,235,153,24,133,55,61,58,77,158,1,113,117,159,24,
    36,126,186,79,204,181,125,98,62,235,36,230,7,45,19,115,
    138,197,4,44,230,58,136,235,251,196,228,196,178,152,27,251,
    196,220,236,36,230,111,114,49,83,44,230,247,44,230,22,136,
    91,251,196,228,196,178,152,219,251,196,124,222,73,204,185,92,
    140,193,98,68,133,38,127,1,226,139,125,98,114,98,89,204,
    151,32,190,98,226,105,38,222,201,136,119,75,196,123,76,188,
    191,111,65,15,58,45,232,239,115,99,57,195,11,250,215,74,
    97,96,103,121,208,44,179,155,3,49,183,111,137,57,177,188,
    196,249,125,130,31,118,18,60,1,238,185,76,246,216,227,39,
    226,17,108,60,166,75,133,183,148,237,245,9,223,158,243,60,
    124,1,10,202,79,152,242,83,102,252,132,173,254,2,83,190,
    46,141,169,51,101,177,68,185,200,148,167,76,121,6,238,37,
    112,63,97,202,243,210,221,189,204,148,23,76,249,25,8,19,
    220,43,76,89,2,177,12,238,52,227,199,10,215,103,184,254,
    115,112,175,130,251,41,172,227,152,151,185,26,31,192,102,15,
    196,63,116,137,151,224,94,3,247,51,234,190,85,234,159,45,
    245,95,7,247,70,214,255,230,135,46,244,188,184,159,198,43,
    46,95,195,110,187,159,238,22,175,192,189,9,238,45,53,227,
    21,136,215,224,222,38,165,222,194,193,228,181,63,103,100,107,
    128,251,5,87,126,1,238,151,92,249,37,184,115,224,126,5,
    223,225,162,191,225,58,254,220,129,239,112,221,86,214,188,203,
    205,191,0,247,30,79,177,193,189,207,149,85,48,151,234,243,
    8,202,230,25,242,143,228,209,157,86,123,102,21,97,123,186,
    217,116,200,253,102,191,115,4,219,228,161,222,105,132,211,116,
    144,8,221,75,236,162,159,201,9,196,255,62,3,191,222,70,
    158,107,200,45,47,113,154,207,219,73,253,226,151,5,53,177,
    55,197,243,183,34,126,20,71,65,61,245,12,198,37,148,151,
    14,90,141,34,63,157,42,220,189,147,215,252,182,108,162,7,
    146,25,117,46,106,147,247,49,146,40,177,125,138,56,228,174,
    241,146,152,180,125,65,61,75,73,212,170,47,55,99,97,187,
    11,243,70,226,185,151,243,217,30,77,188,108,56,17,254,53,
    156,166,29,227,130,236,182,20,157,88,45,70,182,251,103,88,
    249,216,253,1,86,117,242,125,42,152,33,15,232,248,146,67,
    1,39,114,133,234,162,66,62,199,98,166,25,5,98,70,4,
    158,191,51,51,47,228,38,138,155,153,21,161,211,12,236,120,
    211,11,215,103,236,235,51,235,34,184,113,69,38,246,170,47,
    174,92,21,183,111,174,217,206,173,107,55,174,59,51,50,118,
    102,232,248,82,221,78,183,118,56,164,16,219,173,40,78,172,
    64,36,205,200,149,223,144,40,146,14,122,229,144,67,110,59,
    251,229,19,166,30,14,5,105,181,146,22,246,178,233,57,77,
    35,16,65,20,239,24,1,46,217,112,35,33,141,164,233,73,
    131,78,48,22,111,218,94,44,238,177,195,247,194,183,182,239,
    185,106,87,196,212,60,155,237,239,224,54,73,102,171,214,103,
    209,250,54,72,142,206,225,70,231,253,37,100,183,68,145,191,
    198,98,94,237,70,240,102,104,190,159,109,201,112,108,60,122,
    121,175,143,109,129,190,150,112,225,197,56,105,4,222,122,51,
    49,2,52,108,195,150,178,29,180,18,15,143,31,185,217,73,
    206,4,89,7,104,165,57,143,166,253,54,227,60,157,19,85,
    252,68,145,215,35,219,151,226,71,83,29,217,71,186,80,75,
    173,41,202,181,215,251,49,237,93,238,172,61,217,110,145,193,
    49,165,124,231,239,169,93,213,127,76,211,56,66,140,213,122,
    44,90,139,21,225,98,182,75,6,178,15,226,142,17,196,1,
    160,17,109,104,132,117,27,80,96,29,173,250,153,186,199,244,
    128,177,28,39,125,192,80,228,191,11,222,120,12,105,75,10,
    127,141,111,70,228,187,22,46,238,96,247,107,210,145,124,155,
    111,79,147,20,237,203,29,153,160,9,70,188,84,126,221,49,
    142,211,241,120,46,190,221,188,53,79,196,30,47,105,130,2,
    248,230,142,244,240,5,131,198,238,108,138,164,60,134,79,253,
    4,22,97,59,88,69,200,139,214,140,39,47,241,244,9,14,
    9,248,18,177,157,72,57,138,3,30,134,180,92,99,173,29,
    58,116,37,140,132,222,126,60,117,217,115,54,241,58,24,184,
    33,180,145,61,3,216,1,53,5,202,141,201,124,228,121,130,
    47,197,138,201,173,200,11,19,163,37,69,219,141,24,187,227,
    54,79,151,229,145,200,57,241,100,226,57,178,211,72,70,224,
    171,56,99,140,142,136,164,178,249,162,196,144,108,55,177,157,
    77,57,89,48,195,171,33,36,142,217,37,108,8,251,91,113,
    132,11,150,100,253,145,17,183,67,147,94,80,38,25,130,164,
    103,208,188,157,216,6,249,43,122,44,45,20,147,153,54,194,
    180,244,237,132,14,36,76,226,200,247,69,44,105,58,190,157,
    88,154,29,58,194,36,203,49,73,156,73,115,204,227,196,158,
    206,148,95,117,198,53,82,91,40,205,83,68,166,253,44,164,
    184,108,27,43,33,29,153,75,226,238,177,114,230,163,240,66,
    98,108,134,209,150,177,69,240,132,29,180,114,116,80,198,90,
    20,27,36,245,188,148,183,72,41,34,14,188,208,78,4,14,
    20,161,97,251,126,122,196,82,97,23,86,201,35,42,73,30,
    123,59,114,129,242,211,14,115,195,157,204,60,212,44,185,111,
    22,221,5,182,5,180,246,178,150,211,110,178,49,233,5,124,
    240,255,135,229,145,83,254,223,47,175,152,165,172,229,201,95,
    202,79,240,239,26,33,37,94,206,29,82,92,43,38,83,140,
    218,9,155,15,90,195,122,140,230,128,126,82,74,60,26,249,
    51,28,191,40,104,61,25,56,102,145,13,207,177,215,40,100,
    224,125,183,91,70,29,79,193,85,75,82,163,72,23,171,34,
    217,18,72,41,220,205,69,57,188,199,152,216,126,99,182,199,
    50,249,5,194,157,172,102,86,72,45,246,145,30,35,188,213,
    202,218,110,209,102,51,245,146,213,233,45,219,199,171,48,157,
    211,220,61,52,138,19,241,114,81,78,193,10,130,246,116,90,
    77,252,253,195,220,143,15,27,228,144,33,75,34,76,183,188,
    136,239,70,137,132,85,75,250,168,71,134,149,61,29,129,141,
    200,22,179,155,34,188,235,206,48,188,95,99,55,133,113,204,
    184,171,115,124,61,69,153,171,247,140,236,150,14,225,191,229,
    221,21,238,190,75,129,89,209,253,207,121,119,23,119,255,45,
    97,185,219,77,14,122,163,135,114,12,148,81,0,157,70,247,
    82,214,3,187,200,101,244,102,169,5,213,165,51,81,135,111,
    53,8,183,114,142,125,204,241,31,201,131,20,2,95,229,221,
    253,220,253,59,74,164,21,221,159,231,221,3,220,253,239,148,
    124,43,186,39,40,87,145,142,192,199,86,194,169,15,74,86,
    100,126,139,14,242,89,1,80,5,170,112,230,205,241,55,45,
    55,10,108,212,104,127,214,244,222,34,236,199,30,143,33,56,
    195,147,177,108,215,141,23,64,125,25,5,30,41,244,185,217,
    1,98,58,65,220,126,204,97,175,82,39,75,48,137,179,57,
    152,173,171,56,108,147,154,9,25,255,60,46,234,173,112,231,
    124,244,77,243,106,205,180,173,23,54,37,33,205,207,32,205,
    78,217,45,207,177,138,125,153,52,213,36,128,52,201,5,153,
    6,164,145,56,185,70,242,210,98,219,75,216,103,155,87,50,
    233,150,159,167,241,14,54,68,25,39,157,35,252,36,34,215,
    87,161,174,63,66,26,133,131,54,164,213,210,223,30,173,170,
    13,96,109,0,191,11,106,77,175,104,125,26,7,52,180,53,
    218,22,167,218,206,97,101,251,100,26,211,204,255,106,24,190,
    213,201,82,222,233,48,134,198,209,181,242,166,15,94,150,94,
    114,71,211,160,101,250,188,52,238,24,171,109,57,205,215,175,
    72,30,170,56,209,85,176,193,121,72,165,52,170,225,112,206,
    16,183,14,88,103,116,158,24,111,132,24,208,204,241,106,24,
    241,254,3,178,167,13,170,99,191,34,230,255,7,138,72,251,
    181,188,95,47,245,95,74,21,85,97,69,141,236,83,148,130,
    163,15,106,144,99,66,66,49,11,131,30,165,67,238,80,154,
    76,198,118,245,40,94,123,149,108,222,163,226,62,28,120,220,
    60,82,40,120,37,93,18,171,248,63,33,141,111,72,197,244,
    237,84,82,53,231,1,52,173,83,233,248,157,74,19,160,2,
    49,242,195,6,234,51,132,84,191,72,236,16,86,155,15,168,
    160,131,42,25,22,99,148,210,10,217,23,33,88,174,38,36,
    28,176,38,106,133,38,30,248,62,43,161,75,203,149,112,152,
    47,163,211,157,122,159,220,3,253,139,198,219,39,128,6,218,
    43,85,212,115,66,213,43,68,76,235,156,247,70,67,91,87,
    205,110,74,198,163,95,26,119,135,56,153,244,7,237,93,5,
    226,71,218,187,46,46,43,160,220,14,54,169,114,40,31,125,
    132,71,247,105,133,99,233,43,57,153,126,192,153,74,224,70,
    31,88,3,52,63,109,246,115,147,233,232,55,168,194,89,115,
    107,40,237,77,137,71,74,196,124,228,48,37,203,59,12,30,
    41,232,225,185,146,232,156,115,46,189,196,182,107,163,59,117,
    174,148,3,211,81,19,225,157,156,206,158,53,163,103,123,30,
    230,61,191,215,178,65,156,199,207,39,43,91,27,5,188,90,
    155,21,86,100,58,140,147,251,123,121,29,101,94,223,231,131,
    6,41,187,159,13,122,243,189,246,230,15,90,200,159,189,46,
    213,71,24,0,56,100,98,59,156,14,68,96,73,244,152,42,
    100,218,77,83,126,119,40,115,151,146,240,30,35,45,75,197,
    65,214,30,6,212,235,126,176,247,255,39,74,163,39,113,250,
    42,155,222,43,189,220,183,119,21,151,202,243,62,46,166,60,
    252,227,171,82,9,170,244,243,56,153,125,44,166,101,196,63,
    223,160,85,115,224,160,206,143,171,234,216,56,218,65,8,80,
    71,71,111,6,243,26,21,119,33,141,79,146,161,14,231,199,
    196,189,199,102,50,224,143,116,24,206,56,54,210,97,10,119,
    208,98,20,252,171,79,45,201,71,176,119,69,54,220,169,102,
    112,224,194,177,124,69,113,82,49,126,161,56,6,206,66,121,
    42,228,47,117,247,22,250,102,94,207,86,22,23,235,221,57,
    236,234,172,30,254,227,58,74,254,150,250,235,110,29,116,76,
    68,231,131,225,230,11,12,246,48,46,90,106,249,94,178,248,
    41,123,122,217,71,224,123,159,193,183,202,113,208,0,71,63,
    3,220,26,74,219,53,109,20,191,143,107,147,250,176,54,140,
    81,209,160,62,170,15,209,223,174,26,150,253,26,213,29,82,
    101,79,25,180,157,178,231,34,208,70,136,237,134,247,93,160,
    37,90,138,209,239,65,43,66,251,74,26,224,179,147,171,164,
    88,78,36,4,183,238,180,207,98,116,89,215,82,212,102,248,
    96,101,243,217,110,121,46,62,56,13,82,35,89,144,127,109,
    247,125,175,147,49,154,148,177,85,182,68,39,150,68,139,215,
    102,219,146,61,37,19,210,73,230,79,105,216,243,204,86,235,
    61,121,204,208,160,226,23,144,134,104,56,220,252,37,81,126,
    117,240,81,196,184,58,198,229,173,104,81,188,21,62,31,224,
    19,79,196,118,236,52,119,174,209,65,14,240,65,142,117,13,
    227,145,84,241,168,242,183,92,37,59,148,175,129,63,55,73,
    178,192,225,61,197,102,53,122,84,37,116,28,240,141,14,111,
    134,50,159,202,186,71,205,18,220,63,206,142,162,135,134,229,
    216,173,130,141,222,12,0,182,99,59,92,23,124,85,194,118,
    160,50,251,146,179,123,158,180,241,9,97,75,149,49,194,150,
    249,138,212,246,26,210,56,88,197,236,233,140,210,227,129,4,
    120,7,156,230,107,34,207,59,164,191,30,214,95,29,13,254,
    3,169,252,98,203,188,34,45,91,230,1,159,252,97,117,242,
    115,10,94,230,90,237,89,45,79,74,126,28,185,159,213,233,
    42,50,20,91,86,104,7,194,178,212,155,140,242,251,109,159,
    154,156,137,222,105,9,174,44,199,109,5,220,246,170,164,148,
    136,250,143,18,103,123,219,106,226,225,32,188,169,119,45,158,
    165,250,16,196,164,132,152,121,129,138,139,84,144,231,225,212,
    41,95,74,124,76,218,1,27,199,18,103,78,205,219,217,221,
    177,195,29,166,171,140,42,147,240,205,198,36,114,25,120,153,
    105,17,43,161,244,214,67,225,178,21,73,78,162,98,151,41,
    32,77,9,207,70,145,207,89,112,206,190,103,25,80,139,115,
    57,106,59,158,179,201,238,97,119,159,197,233,34,254,164,142,
    173,144,237,49,161,215,134,27,89,69,122,212,226,207,180,50,
    122,145,12,77,233,100,249,139,104,184,161,179,195,245,86,28,
    173,121,190,186,1,56,62,205,119,178,198,126,142,49,111,20,
    43,117,208,208,23,42,229,201,155,220,138,226,77,74,147,169,
    55,59,29,183,185,76,5,229,189,248,9,111,82,70,192,164,
    224,196,92,163,98,61,59,81,254,151,156,229,197,89,147,193,
    141,116,196,207,123,147,36,154,148,175,87,175,117,90,191,73,
    175,37,245,110,39,143,96,18,158,112,252,159,255,95,203,211,
    167,43,38,37,173,205,21,42,40,111,107,190,132,236,153,127,
    18,210,215,67,154,12,37,161,83,144,190,255,205,211,84,124,
    65,197,151,144,66,105,250,81,30,63,210,2,123,91,105,204,
    178,125,223,74,51,140,124,42,165,158,112,39,237,225,142,44,
    79,169,14,42,213,119,198,139,63,30,236,200,43,237,41,120,
    145,78,30,101,185,70,254,8,35,75,47,90,156,19,121,107,
    251,172,133,44,163,104,69,237,196,172,100,6,229,138,53,187,
    237,39,202,102,98,54,206,180,74,170,120,202,129,5,61,99,
    246,6,55,179,84,204,81,113,7,202,47,49,21,27,68,161,
    48,31,67,230,141,232,122,50,8,153,27,187,176,228,224,16,
    143,172,158,140,94,254,19,22,61,26,127,235,181,129,90,119,
    173,90,235,174,118,141,106,228,232,135,117,254,213,171,28,12,
    84,211,214,16,7,3,61,24,24,76,106,251,235,195,29,169,
    229,246,112,209,226,20,203,225,140,255,222,111,162,87,134,117,
    10,65,6,116,245,60,238,209,134,116,90,43,183,244,234,177,
    106,87,181,103,160,167,86,175,245,87,187,235,231,50,11,228,
    147,9,110,76,227,209,121,161,144,42,206,172,42,90,139,174,
    159,186,115,212,138,163,237,29,6,30,138,1,216,233,240,67,
    153,206,200,36,240,82,255,149,87,164,199,204,191,163,158,191,
    162,162,211,125,91,203,111,239,96,126,93,63,126,7,213,149,
    155,220,117,209,246,222,172,51,63,142,97,176,98,190,82,110,
    225,46,65,184,124,129,197,0,71,123,125,233,33,96,93,175,
    98,125,140,235,85,45,163,126,168,118,98,47,77,255,111,1,
    224,212,99,
};

EmbeddedPython embedded_m5_objects_BaseCPU(
    "m5/objects/BaseCPU.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/cpu/BaseCPU.py",
    "m5.objects.BaseCPU",
    data_m5_objects_BaseCPU,
    4259,
    11156);

} // anonymous namespace
