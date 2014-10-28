#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_MemTest[] = {
    120,156,197,85,221,115,219,68,16,95,57,159,118,146,38,113,
    90,247,3,202,28,15,116,92,160,17,148,6,120,96,74,27,
    62,102,120,40,100,146,190,212,47,154,139,110,109,41,149,116,
    66,119,42,54,175,225,255,134,221,149,85,171,76,135,87,44,
    231,180,247,187,189,221,223,237,254,114,142,97,249,89,163,191,
    103,10,192,61,37,195,208,55,128,12,32,7,152,0,4,60,
    239,65,22,192,203,165,213,35,107,13,16,96,26,128,89,135,
    191,0,174,1,94,77,214,192,108,192,197,120,147,66,164,127,
    211,103,28,144,229,251,52,188,192,252,183,203,43,140,125,3,
    241,240,169,223,106,22,94,162,243,113,151,199,41,243,184,75,
    62,148,96,18,48,155,73,143,9,81,124,92,135,171,13,166,
    64,233,175,123,48,217,20,100,11,112,155,121,48,210,23,100,
    192,76,204,166,32,59,130,236,130,217,2,179,45,200,94,139,
    244,193,12,4,185,209,137,179,35,200,126,103,215,174,32,7,
    29,100,79,144,195,22,185,1,102,95,144,97,203,240,0,204,
    161,32,71,130,220,20,206,67,65,110,1,142,192,28,193,53,
    157,232,182,216,55,197,190,211,225,112,75,60,239,10,114,15,
    240,3,184,250,16,204,72,192,251,112,126,49,190,77,101,58,
    239,209,224,62,162,33,46,235,208,83,21,177,114,97,142,57,
    155,237,251,56,73,82,174,171,187,71,67,81,231,151,88,41,
    59,85,153,213,198,41,111,21,206,49,174,201,241,51,90,254,
    169,177,85,19,74,165,133,210,222,230,105,172,114,107,240,123,
    53,182,149,242,105,158,22,179,135,3,138,25,128,219,161,77,
    148,199,86,11,229,210,63,49,125,204,137,66,26,74,172,98,
    44,60,103,138,109,185,80,134,34,42,109,76,133,142,178,38,
    154,38,21,170,186,208,89,58,43,208,164,207,121,227,136,149,
    161,171,25,122,85,161,54,106,25,68,207,208,141,121,41,73,
    157,90,158,138,216,185,196,214,153,81,169,115,53,42,147,107,
    218,243,123,77,75,206,125,249,30,2,206,214,4,252,7,5,
    247,201,187,187,116,28,191,227,56,173,139,216,167,150,221,7,
    76,246,254,138,44,173,232,56,65,125,153,97,135,115,250,236,
    116,31,220,3,142,90,217,153,100,173,176,180,149,167,186,18,
    255,55,58,83,99,174,176,228,65,247,208,29,144,235,91,126,
    86,249,74,211,202,199,4,158,241,38,70,18,84,109,181,23,
    84,131,92,64,62,242,87,255,242,90,145,109,55,212,14,141,
    154,82,3,223,96,149,78,211,88,243,178,84,202,213,101,41,
    57,255,208,85,65,189,37,35,193,162,27,162,165,168,166,58,
    205,142,7,66,244,162,33,112,166,43,157,35,29,103,204,50,
    244,219,52,68,81,65,80,20,249,129,76,72,58,117,198,211,
    117,118,88,148,40,120,60,159,71,84,49,131,149,223,96,238,
    28,70,174,131,31,108,205,213,145,59,35,215,243,72,116,42,
    123,79,173,205,196,249,103,157,57,244,124,199,52,234,244,124,
    101,252,82,120,191,82,99,196,106,148,120,103,77,63,252,104,
    213,221,136,197,24,189,109,188,223,235,44,177,238,156,48,20,
    93,69,164,43,231,239,116,28,26,29,117,118,15,59,139,171,
    154,249,163,14,220,209,135,63,236,232,33,106,133,32,231,123,
    78,173,151,204,210,248,72,183,211,23,154,229,206,221,109,74,
    72,228,5,239,36,27,117,218,40,36,162,182,151,82,166,166,
    87,98,82,161,185,26,92,49,93,44,228,77,82,226,255,46,
    88,13,46,162,33,76,108,142,33,230,105,182,8,127,68,247,
    218,219,50,60,197,34,78,114,93,189,166,208,161,126,18,206,
    48,63,121,228,60,31,236,209,23,248,237,215,83,29,127,243,
    248,228,73,28,186,42,14,223,119,39,45,47,251,227,114,33,
    119,23,139,219,125,78,195,102,192,207,80,158,62,61,171,119,
    127,249,12,123,187,193,110,143,173,95,199,92,134,115,104,127,
    89,242,147,227,146,229,227,68,125,60,171,236,188,137,255,63,
    156,75,72,124,215,136,254,41,223,17,142,203,126,16,12,130,
    65,239,31,193,227,248,59,
};

EmbeddedPython embedded_m5_objects_MemTest(
    "m5/objects/MemTest.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/cpu/testers/memtest/MemTest.py",
    "m5.objects.MemTest",
    data_m5_objects_MemTest,
    919,
    1900);

} // anonymous namespace
