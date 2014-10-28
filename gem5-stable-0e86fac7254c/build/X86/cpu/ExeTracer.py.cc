#include "sim/init.hh"

namespace {

const uint8_t data_m5_objects_ExeTracer[] = {
    120,156,189,144,193,74,195,64,16,134,103,147,182,106,17,236,
    89,16,244,22,132,118,69,90,149,34,34,165,30,188,40,166,
    189,152,75,216,110,166,77,108,54,13,217,20,218,179,190,183,
    206,36,182,190,129,155,228,231,159,217,97,242,205,104,248,61,
    46,125,143,231,0,118,76,38,162,87,64,10,96,4,4,2,
    4,199,14,164,14,76,217,185,144,186,96,92,8,92,186,105,
    0,186,48,23,16,53,225,11,224,19,224,61,104,64,212,130,
    137,119,64,141,146,111,58,158,32,87,30,145,76,18,243,58,
    251,64,93,214,41,150,203,218,182,73,158,51,91,78,11,165,
    177,168,138,159,54,88,71,122,199,200,149,35,102,60,37,131,
    192,104,196,19,56,12,75,48,132,72,255,246,39,30,207,226,
    179,216,14,73,213,100,56,220,183,179,39,148,212,249,90,226,
    6,75,206,244,226,216,107,50,196,33,73,24,102,202,96,24,
    86,68,97,104,86,209,58,229,176,193,5,219,28,43,52,189,
    217,132,58,85,214,86,85,28,197,168,34,44,60,166,252,19,
    251,70,34,227,149,65,137,38,73,183,114,140,118,89,174,114,
    57,194,76,199,70,21,203,36,91,72,213,151,11,52,131,174,
    45,213,44,197,238,21,222,221,204,149,190,189,30,244,181,180,
    133,150,140,186,135,239,229,219,106,178,11,110,223,34,105,9,
    126,94,234,1,142,73,204,160,183,95,179,15,187,205,83,54,
    87,133,50,214,119,118,203,249,23,216,106,167,247,245,22,31,
    206,118,208,29,209,22,29,231,7,193,90,141,162,
};

EmbeddedPython embedded_m5_objects_ExeTracer(
    "m5/objects/ExeTracer.py",
    "/home/emily/Desktop/Benchmarking/a4/gem5-stable-0e86fac7254c/src/cpu/ExeTracer.py",
    "m5.objects.ExeTracer",
    data_m5_objects_ExeTracer,
    349,
    636);

} // anonymous namespace