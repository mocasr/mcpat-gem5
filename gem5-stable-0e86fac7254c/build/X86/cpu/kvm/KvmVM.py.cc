#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_KvmVM[] = {
    120,156,189,145,77,111,211,64,16,134,199,235,36,180,105,145,
    184,112,247,9,89,160,102,17,106,0,169,168,130,138,11,66,
    161,144,160,74,248,98,109,215,147,56,137,215,182,118,183,81,
    124,46,255,27,102,214,13,240,11,240,199,232,157,145,118,231,
    153,119,52,60,60,49,253,239,19,0,119,73,162,160,47,130,
    10,224,251,131,138,122,37,160,18,96,98,200,98,136,138,24,
    48,134,101,4,197,0,126,2,220,3,252,200,6,80,12,97,
    145,142,232,138,245,47,122,210,136,148,231,240,188,151,199,20,
    22,107,115,125,187,65,237,253,144,178,207,59,115,51,211,255,
    82,92,49,197,5,9,4,200,34,102,201,4,67,80,83,28,
    192,102,8,56,130,205,35,134,185,23,144,29,1,30,195,102,
    12,43,194,139,67,229,4,230,139,116,64,231,231,130,130,123,
    76,65,183,119,114,187,51,114,103,38,101,25,42,174,115,30,
    77,210,4,16,71,29,193,160,105,108,151,88,85,175,208,37,
    203,198,38,186,81,21,58,141,69,50,155,125,186,78,79,121,
    128,35,10,121,94,43,131,121,238,199,33,49,77,113,87,113,
    202,61,125,215,98,168,235,253,62,47,81,21,104,195,152,95,
    149,85,198,179,49,139,208,57,72,42,98,237,61,15,173,234,
    46,148,122,46,127,66,242,134,200,26,219,31,100,223,62,20,
    133,157,51,157,15,35,29,224,2,27,123,247,55,184,111,20,
    100,217,24,148,104,214,85,39,63,162,219,250,166,149,87,88,
    235,210,40,187,93,215,43,169,206,229,10,205,244,204,121,117,
    91,225,217,75,124,251,122,169,244,155,87,211,115,45,157,213,
    242,96,90,216,208,164,237,130,157,47,248,122,54,97,20,209,
    43,158,138,47,233,240,176,88,51,157,180,76,235,130,75,156,
    217,102,223,249,211,62,249,179,246,121,116,216,205,127,193,14,
    48,239,250,37,93,62,227,54,236,243,56,26,139,39,226,55,
    58,148,176,102,
};

EmbeddedPython embedded_m5_objects_KvmVM(
    "m5/objects/KvmVM.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/cpu/kvm/KvmVM.py",
    "m5.objects.KvmVM",
    data_m5_objects_KvmVM,
    436,
    766);

} // anonymous namespace
