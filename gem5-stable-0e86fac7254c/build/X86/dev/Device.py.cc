#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_Device[] = {
    120,156,189,86,223,79,27,71,16,222,51,198,54,182,1,23,
    18,212,62,84,218,74,85,106,165,10,71,82,160,72,173,170,
    6,161,72,168,37,68,118,242,80,94,78,203,237,216,62,115,
    191,114,187,6,220,151,62,208,191,161,127,74,255,61,58,51,
    119,190,218,180,168,81,37,226,131,213,238,183,123,187,51,223,
    55,51,123,190,40,126,75,248,255,163,20,194,252,129,29,141,
    127,142,8,133,120,91,244,156,188,87,17,97,69,68,21,113,
    86,17,142,94,18,80,17,3,71,232,170,248,93,136,27,33,
    126,57,91,18,122,89,192,18,163,181,18,173,10,93,159,161,
    141,18,93,22,122,69,64,149,209,102,137,214,132,110,9,168,
    49,218,46,209,186,208,171,162,223,93,67,211,130,91,252,117,
    29,236,89,106,158,230,221,21,108,78,32,58,61,31,131,111,
    121,244,38,72,142,224,50,240,193,159,247,240,144,60,252,14,
    59,32,196,153,67,126,162,43,232,32,90,142,166,160,77,120,
    52,122,121,131,8,154,220,16,99,52,177,41,198,45,129,222,
    222,160,223,109,209,235,119,171,248,126,175,130,141,233,16,87,
    112,233,6,137,167,249,176,237,209,200,108,210,233,89,50,204,
    84,20,129,150,199,238,169,76,147,204,154,207,17,239,79,141,
    133,72,218,81,96,100,254,134,196,94,170,50,43,147,65,119,
    149,92,105,96,227,121,177,138,192,243,108,147,7,81,162,39,
    33,13,233,100,59,77,129,113,255,250,218,27,129,210,144,49,
    254,54,155,0,191,172,206,141,205,84,65,67,63,84,151,240,
    6,143,183,228,126,26,36,118,153,204,83,104,156,173,149,6,
    113,23,65,136,243,117,42,158,50,100,120,182,75,236,253,221,
    152,215,216,184,163,36,2,23,162,32,156,186,71,96,46,108,
    146,186,135,16,251,163,72,101,23,65,60,116,213,174,59,132,
    104,239,153,177,234,60,132,103,59,112,176,63,80,254,183,47,
    246,118,125,215,100,190,75,180,229,2,109,167,83,102,243,11,
    218,155,28,171,57,249,211,118,44,41,126,168,76,224,255,127,
    57,199,245,153,162,13,30,174,144,150,24,179,36,103,147,228,
    36,66,122,157,123,229,36,19,242,163,229,75,173,51,48,134,
    41,124,190,179,19,27,243,248,142,214,167,50,84,22,105,152,
    118,91,180,43,217,216,227,112,225,67,136,210,94,157,26,210,
    169,71,75,88,58,218,151,165,67,125,60,69,3,90,244,115,
    190,147,109,21,19,179,157,31,94,141,78,177,249,130,26,235,
    14,7,212,81,164,238,8,81,153,9,241,228,3,243,10,57,
    103,98,182,238,229,156,184,56,58,121,201,121,211,109,252,39,
    147,156,14,39,10,99,53,43,67,93,71,234,35,48,69,46,
    184,180,119,99,142,41,86,239,216,168,87,234,226,95,194,245,
    207,251,88,26,47,19,69,69,161,169,49,82,167,64,197,146,
    74,72,131,145,21,42,172,5,210,100,164,69,213,181,64,218,
    140,172,82,153,45,144,53,70,214,5,116,168,220,18,242,201,
    28,210,100,100,131,145,77,170,188,88,115,9,121,52,183,102,
    149,145,199,164,26,165,66,239,51,114,119,125,166,154,81,222,
    0,221,68,209,2,162,128,19,162,31,252,10,88,206,164,202,
    211,69,102,42,30,66,112,75,211,91,156,76,3,53,9,173,
    212,202,42,105,19,153,129,157,100,49,214,117,36,141,138,59,
    177,21,146,202,183,191,229,207,186,48,95,209,201,188,78,166,
    23,86,162,56,118,98,228,185,210,229,33,73,44,149,239,99,
    207,60,197,181,239,82,220,29,176,206,66,113,204,72,89,170,
    180,249,89,152,169,184,252,42,11,44,24,203,161,65,251,247,
    109,134,1,64,22,165,216,177,242,106,4,241,92,145,206,119,
    7,109,126,98,117,23,106,56,86,91,122,53,12,46,176,47,
    35,136,146,108,42,85,172,113,17,154,25,169,169,28,130,197,
    25,95,249,104,81,24,196,32,13,146,164,209,158,247,221,173,
    251,226,155,75,200,198,236,78,160,18,64,47,113,245,121,119,
    28,219,3,206,71,244,200,35,23,15,184,96,19,254,124,159,
    243,97,54,129,195,217,204,55,47,22,102,112,56,155,217,223,
    93,152,193,33,217,114,152,36,33,31,247,74,133,6,108,187,
    88,129,180,231,85,138,12,156,48,211,252,86,126,161,48,139,
    60,117,165,178,216,203,105,99,15,40,80,188,232,163,220,39,
    20,164,251,180,247,167,101,94,110,220,121,86,242,60,61,84,
    154,202,239,63,243,84,222,201,83,252,128,25,87,5,44,83,
    194,230,25,138,25,65,181,47,40,35,232,3,35,180,91,95,
    84,124,179,20,251,203,178,172,61,89,160,232,193,120,250,154,
    242,145,246,174,22,60,189,230,114,203,145,21,237,109,167,244,
    157,144,139,71,163,44,185,158,246,232,123,139,239,107,190,38,
    184,2,50,221,188,215,195,155,204,198,124,159,127,17,253,64,
    159,84,124,65,55,157,166,211,169,108,213,249,89,251,11,74,
    11,110,52,
};

EmbeddedPython embedded_m5_objects_Device(
    "m5/objects/Device.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/dev/Device.py",
    "m5.objects.Device",
    data_m5_objects_Device,
    1107,
    2773);

} // anonymous namespace