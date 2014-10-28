#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Ethernet[] = {
    120,156,189,89,75,115,220,198,17,158,229,115,151,92,190,41,
    82,36,245,128,229,135,86,78,73,124,88,84,20,199,113,36,
    138,146,204,68,162,24,80,118,85,120,200,6,11,12,185,35,
    98,23,91,24,172,200,213,201,85,78,229,156,84,46,249,9,
    57,228,144,75,114,206,53,191,202,233,175,7,131,5,185,36,
    21,167,202,212,218,67,204,135,198,96,166,187,167,251,235,129,
    47,210,127,253,244,255,35,71,8,253,168,32,68,64,255,21,
    68,40,68,163,32,246,10,162,128,126,159,8,251,196,235,244,
    170,223,92,245,139,112,64,52,6,197,222,32,201,12,8,89,
    16,251,5,17,12,138,63,8,241,157,16,191,221,27,18,193,
    144,144,67,140,14,103,232,176,8,138,22,45,101,104,81,4,
    35,22,29,205,208,146,8,202,118,220,177,12,29,17,193,184,
    144,131,140,78,100,232,168,8,38,133,28,101,116,42,67,203,
    34,152,22,178,204,232,76,134,142,137,96,214,162,87,50,116,
    92,4,115,118,132,249,12,157,16,193,85,33,39,24,93,200,
    208,73,17,44,90,116,41,67,167,68,112,77,236,86,174,147,
    54,213,247,244,175,66,218,20,73,137,154,93,213,120,85,123,
    35,253,196,64,104,62,237,222,221,241,213,166,124,171,124,153,
    140,82,239,105,82,151,177,145,246,173,129,32,186,1,3,45,
    210,133,20,176,11,153,96,175,79,200,126,177,55,0,123,145,
    21,220,221,74,31,221,118,97,77,61,77,77,32,223,46,75,
    140,22,241,104,247,234,245,202,16,222,89,164,166,90,109,122,
    13,89,173,38,35,220,105,68,65,59,68,119,0,2,157,150,
    228,139,215,113,91,178,180,87,211,73,236,249,9,75,251,199,
    199,213,186,244,2,25,87,48,183,110,163,119,168,89,174,71,
    13,185,44,27,42,236,44,111,74,125,152,68,173,229,13,217,
    244,235,13,47,62,84,205,131,101,239,254,242,129,108,172,223,
    213,137,87,11,229,221,21,249,240,193,190,231,255,116,109,253,
    190,191,172,99,127,25,179,102,29,52,101,114,175,213,225,229,
    220,194,232,152,251,80,1,63,214,26,203,188,80,205,195,76,
    75,253,86,75,201,41,45,65,63,253,66,14,192,125,191,99,
    93,225,186,159,175,201,71,135,197,27,114,192,1,56,239,119,
    125,130,220,46,69,134,224,184,64,70,24,25,133,235,146,211,
    2,41,51,50,38,228,56,60,23,200,4,244,15,251,185,208,
    145,158,204,235,63,164,89,146,246,53,110,171,102,34,99,90,
    176,116,86,78,245,87,19,44,96,165,173,245,21,250,219,242,
    252,67,153,56,164,246,166,110,168,196,9,100,232,117,140,68,
    83,235,15,206,147,112,222,122,177,242,106,42,84,73,39,25,
    36,169,213,231,181,150,214,152,19,102,225,232,150,148,1,191,
    56,104,55,90,142,241,140,10,102,235,194,226,46,30,113,161,
    105,183,148,57,111,232,189,149,59,81,156,176,79,208,124,87,
    236,197,42,191,97,199,139,189,70,50,76,87,47,188,132,44,
    109,222,107,230,91,178,87,85,154,87,130,215,108,203,228,40,
    138,15,55,188,102,112,164,130,164,206,194,60,171,174,85,55,
    105,106,252,142,237,175,95,188,224,11,76,246,82,188,13,138,
    186,109,13,104,188,173,76,191,105,254,241,94,96,233,141,182,
    238,117,187,95,157,231,118,111,6,17,220,224,124,228,40,195,
    140,80,16,44,177,11,26,247,26,96,247,202,92,176,12,103,
    98,43,96,195,235,137,188,51,213,218,26,190,116,7,55,100,
    51,112,82,55,168,209,31,39,137,28,18,113,128,211,226,157,
    204,183,78,27,156,173,181,186,178,242,18,190,113,141,174,105,
    80,227,26,244,140,83,83,137,118,90,50,166,113,252,168,25,
    84,198,206,241,14,119,10,46,130,27,27,81,20,186,195,54,
    182,132,81,212,194,116,220,121,8,93,69,179,128,6,110,237,
    206,157,48,226,143,104,73,104,110,21,163,143,100,150,60,105,
    195,215,94,235,135,217,144,12,152,90,108,136,17,178,36,199,
    141,52,104,16,50,2,3,82,220,0,50,10,27,66,39,238,
    141,30,27,38,94,139,108,168,38,111,167,55,168,239,212,218,
    251,251,208,185,122,215,99,46,245,119,50,129,46,166,130,45,
    218,138,149,242,133,54,193,114,182,154,9,239,45,26,87,191,
    59,101,138,4,242,95,147,196,234,3,182,31,15,121,25,70,
    129,42,30,246,26,133,167,215,107,140,245,139,141,145,134,111,
    182,4,25,38,181,68,17,122,103,165,204,139,211,129,24,58,
    197,230,41,89,253,238,171,80,170,223,67,14,41,166,225,29,
    179,118,85,212,116,162,125,187,179,2,47,241,176,179,56,6,
    149,46,212,59,186,187,73,76,154,97,181,98,116,247,166,189,
    65,163,135,178,121,41,106,198,202,127,41,82,159,49,106,158,
    40,116,217,133,97,27,153,190,251,172,190,63,17,231,179,139,
    52,128,21,16,192,72,193,176,145,11,249,147,76,35,224,145,
    161,226,105,251,50,154,146,179,101,3,81,165,120,134,254,120,
    147,20,173,38,153,99,188,244,52,61,193,73,7,88,22,200,
    46,69,123,88,214,211,147,218,35,206,129,73,111,61,175,61,
    237,117,83,82,208,15,136,251,93,79,45,229,144,193,147,153,
    32,163,30,229,30,100,12,52,4,108,181,4,210,129,235,73,
    112,16,176,79,106,167,65,160,247,102,248,122,150,219,43,220,
    206,113,59,207,237,85,110,23,184,93,228,118,9,76,123,239,
    26,104,246,222,117,240,235,189,27,32,215,123,55,249,237,14,
    184,53,177,106,188,253,131,28,50,205,200,173,28,50,195,200,
    135,57,100,150,145,143,44,114,5,36,27,200,199,57,100,158,
    145,79,24,185,13,190,13,47,171,216,238,2,119,239,192,233,
    16,210,221,59,249,93,173,30,146,21,143,159,111,176,203,45,
    228,93,238,43,47,14,142,188,88,58,143,131,32,150,90,115,
    44,252,236,225,253,195,13,61,131,93,74,97,22,123,28,233,
    50,62,118,158,109,61,123,213,131,39,6,87,143,240,198,187,
    212,108,183,27,53,10,209,116,91,194,33,149,212,72,151,233,
    16,129,212,126,172,90,73,20,59,190,231,215,165,250,227,183,
    228,184,69,154,169,130,183,40,236,50,245,61,26,4,65,197,
    236,159,9,218,218,195,195,13,246,174,85,48,187,91,34,101,
    76,78,77,238,71,52,127,140,235,28,197,42,145,156,226,35,
    223,111,199,90,223,56,83,108,95,38,126,221,138,92,207,68,
    188,125,154,237,25,18,139,103,73,28,213,210,219,46,114,140,
    158,63,37,67,74,9,26,158,19,83,1,208,115,47,206,221,
    251,152,238,237,212,59,206,206,214,38,105,200,75,28,63,138,
    201,14,45,34,20,154,163,41,71,10,103,107,147,163,14,36,
    159,190,87,180,242,233,133,209,183,156,179,63,172,158,242,205,
    227,164,7,172,167,206,81,245,82,231,224,152,35,27,81,220,
    129,3,240,72,241,113,117,95,237,71,85,109,129,36,7,152,
    168,62,109,196,160,182,42,219,220,8,79,27,225,211,48,162,
    201,55,196,204,162,120,107,147,99,241,110,187,166,59,20,231,
    26,212,159,202,247,51,41,147,79,188,164,173,121,6,36,240,
    36,244,180,126,18,5,146,227,98,183,7,201,157,56,58,216,
    122,102,8,217,99,119,197,94,172,218,139,53,123,241,153,189,
    184,111,47,214,147,113,142,186,199,170,209,110,88,26,143,87,
    190,84,77,64,207,169,200,72,18,16,65,14,229,113,187,149,
    80,233,101,244,146,33,59,20,166,139,233,203,161,70,151,21,
    1,228,168,86,53,245,0,150,205,46,152,246,39,179,190,31,
    53,90,41,56,102,158,56,133,144,70,225,88,41,50,110,84,
    207,251,194,64,46,106,34,38,182,173,122,167,218,162,218,162,
    152,94,75,234,92,74,226,64,104,250,53,70,255,10,137,163,
    15,105,163,68,63,48,156,82,250,27,250,31,126,211,185,31,
    165,237,145,52,241,84,37,49,246,149,247,159,9,152,244,67,
    89,135,114,119,154,169,85,27,97,232,111,20,130,212,183,212,
    55,244,40,219,71,172,40,195,9,182,54,221,151,128,183,197,
    37,177,244,87,176,163,176,213,125,63,103,218,162,93,176,58,
    168,253,127,203,253,15,150,251,152,30,81,255,46,247,44,215,
    197,66,46,121,153,191,161,65,59,167,150,153,133,43,82,253,
    134,167,101,47,177,152,43,92,200,199,210,2,164,207,146,137,
    33,46,64,50,122,49,154,67,108,89,217,69,134,82,50,209,
    69,12,189,24,183,72,118,214,49,145,67,204,89,199,36,35,
    83,160,26,196,27,128,76,231,144,49,70,102,24,153,197,156,
    137,79,0,185,98,199,153,0,51,0,50,103,101,230,45,189,
    184,154,67,12,189,88,200,33,134,94,44,194,204,179,48,159,
    43,206,231,159,23,146,1,23,113,136,69,246,213,49,21,189,
    38,137,81,30,237,230,47,141,98,169,209,14,19,213,10,21,
    229,182,147,55,23,207,121,148,227,145,230,145,207,120,214,220,
    229,234,108,181,173,53,215,213,210,151,234,173,116,54,49,140,
    70,84,123,109,207,115,24,98,138,176,190,186,150,210,22,84,
    40,58,165,40,148,109,145,143,122,240,36,197,81,110,63,109,
    194,63,29,251,150,103,42,164,88,157,146,13,154,193,82,62,
    124,59,173,56,106,121,7,30,151,63,188,44,253,17,235,54,
    80,62,101,132,192,57,132,50,67,74,209,208,1,47,202,158,
    61,93,36,168,89,50,54,51,208,179,185,53,239,170,128,26,
    223,11,105,71,85,150,196,251,10,3,78,242,46,120,152,123,
    15,205,50,26,78,49,80,27,233,55,159,31,38,242,16,109,
    77,162,101,25,150,75,26,156,128,186,88,42,88,20,105,94,
    135,68,81,164,217,28,57,102,5,239,196,169,130,187,134,6,
    71,39,156,136,153,44,176,110,17,173,41,15,198,233,211,88,
    204,51,47,212,210,138,25,165,112,47,201,122,240,8,226,99,
    151,18,138,176,105,190,197,232,176,89,154,114,250,40,53,245,
    165,41,231,244,223,2,115,139,237,221,231,234,224,140,218,231,
    95,103,70,227,179,107,31,131,244,167,85,122,138,148,108,184,
    226,179,147,61,174,116,112,110,63,124,97,165,83,228,74,167,
    200,149,78,145,43,157,34,87,58,69,174,116,70,185,210,41,
    115,165,51,150,171,116,198,185,210,153,64,165,67,33,132,15,
    61,107,208,196,120,26,66,154,186,122,160,14,56,124,96,83,
    109,190,124,140,253,180,137,250,95,145,27,199,82,242,198,183,
    120,70,248,117,118,155,84,34,118,235,81,59,12,156,35,233,
    120,97,24,97,71,152,130,192,161,109,5,107,171,81,100,39,
    240,124,245,167,190,19,213,1,114,156,186,143,230,31,34,173,
    19,120,175,174,173,63,216,96,31,161,234,133,63,47,156,203,
    129,217,35,221,223,225,193,177,212,179,113,124,81,197,228,186,
    8,136,41,16,115,100,103,183,69,51,170,218,9,187,235,89,
    158,196,105,141,251,51,52,159,163,249,57,154,47,208,252,2,
    205,151,104,112,210,224,62,66,243,24,205,6,154,39,104,54,
    209,160,146,118,159,137,148,102,128,143,130,27,94,138,171,195,
    184,127,197,232,247,172,171,27,167,238,123,63,7,227,141,187,
    75,228,215,239,245,249,55,103,214,251,134,129,200,65,241,102,
    40,151,132,135,45,146,157,11,22,25,41,193,195,201,93,211,
    170,223,200,148,108,130,29,181,72,150,96,203,57,153,49,155,
    186,51,153,113,155,186,205,200,89,130,157,176,200,148,77,167,
    147,22,153,177,181,249,20,35,148,192,103,80,140,3,153,205,
    33,115,54,117,103,200,124,154,186,169,78,199,46,91,224,93,
    182,200,187,108,137,119,217,53,222,101,75,124,158,176,196,231,
    9,75,124,158,176,132,243,4,180,14,183,31,112,123,75,4,
    215,113,98,16,220,192,41,65,112,19,39,3,216,161,159,136,
    192,17,123,183,177,79,193,235,93,236,18,78,152,108,147,207,
    63,55,116,85,151,211,157,171,129,210,190,53,21,245,250,234,
    253,13,62,67,165,20,137,204,232,71,173,142,73,122,15,14,
    205,141,164,123,67,241,247,26,236,27,32,244,132,57,246,51,
    39,224,202,38,71,23,165,167,158,51,99,34,189,58,117,117,
    80,231,20,167,235,81,24,184,63,193,253,43,185,251,97,116,
    212,189,205,79,38,103,62,201,15,37,103,61,196,241,64,99,
    91,127,163,226,164,77,121,242,29,37,215,221,173,237,173,39,
    230,76,2,209,102,163,67,148,2,85,50,214,226,168,125,167,
    38,79,14,2,230,172,63,36,201,87,205,176,227,188,147,113,
    42,234,213,34,202,193,73,157,66,87,119,46,120,217,94,38,
    98,147,54,102,200,108,132,94,207,55,178,188,63,221,157,156,
    147,214,210,180,81,213,159,9,87,127,153,238,141,112,103,4,
    183,7,8,106,149,222,160,198,41,18,223,26,125,20,185,185,
    16,135,28,156,24,235,86,201,100,85,182,174,49,106,183,111,
    15,184,63,91,203,139,34,49,115,169,109,139,251,108,229,76,
    4,44,74,10,172,34,230,176,168,45,251,97,181,94,180,59,
    0,156,243,173,81,5,77,161,77,229,50,210,10,244,205,51,
    50,103,0,51,39,160,174,247,116,195,118,41,47,193,108,194,
    124,63,227,110,57,247,14,168,251,71,137,211,151,18,154,225,
    19,255,196,232,155,162,203,66,166,11,167,127,182,124,126,127,
    200,222,174,48,21,132,134,26,235,247,178,15,238,96,59,70,
    169,132,182,240,165,82,115,30,66,47,142,142,205,23,213,29,
    95,185,217,167,115,254,4,200,95,143,248,107,133,249,114,130,
    51,42,46,239,185,96,229,114,142,137,20,167,24,94,204,101,
    104,141,103,254,133,249,86,255,37,120,0,31,3,78,22,70,
    232,55,217,55,55,56,55,50,55,76,191,33,250,221,230,171,
    171,115,215,255,11,119,5,121,118,
};

EmbeddedPython embedded_m5_objects_Ethernet(
    "m5/objects/Ethernet.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/dev/Ethernet.py",
    "m5.objects.Ethernet",
    data_m5_objects_Ethernet,
    3081,
    8677);

} // anonymous namespace
