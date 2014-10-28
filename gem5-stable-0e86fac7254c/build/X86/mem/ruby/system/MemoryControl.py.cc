#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_MemoryControl[] = {
    120,156,197,145,61,79,195,48,16,134,207,233,7,80,64,240,
    11,16,108,17,18,24,161,22,24,16,66,148,133,129,15,181,
    44,100,137,92,231,32,165,113,82,217,46,34,115,249,223,112,
    231,82,36,22,86,146,248,242,190,150,237,123,238,172,225,251,
    105,208,184,220,5,112,93,18,25,125,2,10,128,71,86,17,
    20,2,140,128,68,128,200,26,128,2,158,5,100,77,248,0,
    152,3,60,37,17,100,45,24,198,109,218,56,254,164,39,22,
    164,60,135,253,133,220,164,208,47,42,61,193,236,126,244,138,
    218,135,153,91,52,149,173,251,85,233,109,85,232,37,71,68,
    227,138,57,46,72,32,112,82,140,32,105,48,83,210,12,177,
    197,112,73,27,112,5,94,87,25,111,78,118,45,216,206,210,
    174,195,96,24,115,77,3,62,208,209,129,96,208,72,59,27,
    213,210,213,206,147,254,149,255,48,207,61,167,143,55,24,120,
    149,66,154,150,202,96,154,250,78,48,166,202,102,5,219,38,
    217,71,59,195,176,72,141,156,183,138,10,226,89,95,79,209,
    175,145,208,239,239,169,46,148,115,97,47,187,28,85,134,214,
    183,200,62,40,171,140,103,180,155,210,251,21,250,191,161,117,
    99,194,224,197,3,2,28,6,62,191,78,150,121,211,5,111,
    28,240,126,130,83,20,100,94,25,148,104,198,69,45,175,209,
    77,124,53,149,87,88,234,220,40,59,25,151,47,82,117,229,
    11,154,222,129,243,106,84,224,193,17,158,157,60,43,125,122,
    220,235,106,233,172,150,127,247,100,90,135,238,237,113,58,238,
    75,91,44,223,45,113,23,186,27,202,53,189,195,41,23,229,
    6,98,217,240,127,129,13,55,114,190,184,168,139,29,78,203,
    183,210,17,219,209,23,143,72,176,4,
};

EmbeddedPython embedded_m5_objects_MemoryControl(
    "m5/objects/MemoryControl.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/mem/ruby/system/MemoryControl.py",
    "m5.objects.MemoryControl",
    data_m5_objects_MemoryControl,
    394,
    742);

} // anonymous namespace
