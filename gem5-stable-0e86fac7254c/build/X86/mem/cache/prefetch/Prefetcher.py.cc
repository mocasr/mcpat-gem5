#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Prefetcher[] = {
    120,156,205,85,221,111,27,69,16,223,179,99,231,195,73,154,
    6,8,164,124,45,111,14,34,185,182,106,104,31,16,130,180,
    130,34,65,91,57,225,129,188,156,214,119,19,223,37,119,183,
    238,206,94,19,243,132,84,254,101,158,97,102,46,231,56,193,
    32,33,36,138,63,38,179,191,236,236,254,230,55,115,227,88,
    93,190,218,244,253,74,43,133,191,144,147,208,39,80,185,82,
    133,82,199,74,5,188,110,169,60,80,71,151,94,139,188,182,
    2,165,78,2,149,44,168,95,149,122,173,212,79,199,109,149,
    116,20,180,5,237,78,209,5,149,44,54,232,210,20,237,168,
    100,185,65,87,166,104,87,37,61,117,216,95,37,18,217,239,
    244,234,7,228,249,53,50,143,115,27,159,65,242,124,120,10,
    177,175,97,54,159,250,117,178,7,6,225,133,131,19,240,113,
    10,46,158,77,234,128,147,250,141,28,98,123,28,112,106,199,
    45,190,151,105,5,138,104,64,87,157,46,114,86,148,209,235,
    150,58,94,18,132,184,173,112,106,140,244,102,144,142,32,171,
    77,84,151,115,99,100,77,144,117,206,144,242,98,228,86,19,
    213,230,4,25,217,152,57,167,39,200,237,25,100,85,144,205,
    25,100,77,144,183,102,206,89,23,228,237,25,228,150,32,239,
    8,178,165,224,93,117,250,158,74,54,4,220,86,131,195,254,
    109,202,124,208,34,131,119,200,20,80,132,177,33,141,194,241,
    165,90,225,144,164,219,75,211,44,225,61,119,201,60,171,138,
    33,56,109,79,52,148,222,101,128,58,43,181,79,65,167,198,
    37,231,198,129,110,98,245,203,10,42,192,123,20,244,117,158,
    219,243,233,63,40,198,91,29,59,139,168,95,101,206,87,38,
    215,99,51,2,61,180,85,153,24,62,20,31,81,212,225,203,
    202,96,58,27,118,158,249,84,27,157,27,79,20,124,86,128,
    182,37,173,177,26,34,208,109,165,215,69,134,152,113,229,241,
    3,50,79,96,228,0,152,44,51,156,18,75,96,236,83,233,
    143,123,184,77,246,123,58,175,140,39,55,247,129,19,26,63,
    34,8,92,24,228,107,179,132,217,35,140,141,163,48,29,155,
    60,174,136,80,102,75,228,3,174,216,74,230,207,203,124,114,
    117,49,177,77,140,55,186,180,158,253,172,68,239,170,152,99,
    181,137,99,10,161,207,103,243,162,56,45,221,55,116,195,120,
    108,17,132,130,201,207,205,4,119,240,225,188,0,7,38,33,
    67,162,160,167,200,115,151,17,215,233,58,27,149,214,65,178,
    131,251,156,61,120,77,229,161,212,164,246,51,233,107,239,12,
    85,151,142,155,30,221,28,33,202,188,0,119,98,93,65,21,
    240,102,52,34,86,211,109,4,95,203,174,41,96,205,25,63,
    228,234,78,72,206,130,148,205,144,10,242,42,139,169,254,144,
    219,114,196,221,209,231,118,244,75,100,162,168,52,5,68,145,
    95,145,69,97,147,42,231,229,2,111,152,140,65,156,35,87,
    129,236,54,67,186,211,196,94,118,199,23,23,81,74,58,128,
    243,29,102,75,5,43,60,63,244,223,149,94,194,48,251,185,
    142,63,176,54,151,61,223,152,28,193,247,56,152,219,51,226,
    182,68,25,48,8,46,51,121,132,210,147,190,203,99,80,154,
    75,220,199,147,56,167,125,139,228,230,117,47,73,76,133,16,
    213,93,19,101,137,223,228,24,170,126,212,148,58,178,84,53,
    207,195,204,150,17,87,248,26,192,21,172,129,94,13,52,226,
    202,154,197,141,106,213,133,65,173,166,184,148,39,61,9,146,
    168,41,39,242,23,39,216,231,137,119,101,208,144,9,83,91,
    64,8,69,150,79,194,39,128,103,222,142,195,3,98,159,22,
    198,157,101,229,40,52,15,194,17,20,251,187,232,205,48,135,
    221,187,240,232,243,19,19,63,188,191,255,32,14,209,197,225,
    156,129,113,53,103,247,198,19,25,45,187,124,221,125,50,221,
    160,126,47,223,120,111,254,9,105,222,162,226,183,79,15,230,
    12,239,160,25,222,119,110,12,111,182,109,25,222,11,60,225,
    152,193,224,35,166,176,61,127,194,141,210,33,13,184,62,87,
    127,192,189,48,16,143,133,244,203,151,77,20,231,6,113,176,
    124,77,192,255,82,69,166,255,148,175,235,78,85,244,27,92,
    116,26,192,201,188,95,182,127,36,142,110,166,229,28,30,40,
    55,252,133,62,131,143,217,188,57,89,152,248,15,115,100,57,
    146,199,226,223,202,242,201,223,200,82,63,120,255,83,89,152,
    248,224,186,44,207,250,139,151,96,221,212,197,254,30,255,124,
    21,40,67,147,87,206,94,212,79,171,52,155,72,43,7,189,
    145,20,132,213,23,245,168,255,114,135,175,229,153,184,17,172,
    4,43,173,173,247,183,58,91,157,63,0,27,246,164,200,
};

EmbeddedPython embedded_m5_objects_Prefetcher(
    "m5/objects/Prefetcher.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/mem/cache/prefetch/Prefetcher.py",
    "m5.objects.Prefetcher",
    data_m5_objects_Prefetcher,
    1055,
    2713);

} // anonymous namespace