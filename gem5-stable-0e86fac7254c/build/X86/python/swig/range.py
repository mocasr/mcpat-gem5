# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_range', [dirname(__file__)])
        except ImportError:
            import _range
            return _range
        if fp is not None:
            try:
                _mod = imp.load_module('_range', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _range = swig_import_helper()
    del swig_import_helper
else:
    import _range
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0


def _swig_setattr_nondynamic_method(set):
    def set_attr(self,name,value):
        if (name == "thisown"): return self.this.own(value)
        if hasattr(self,name) or (name == "this"):
            set(self,name,value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


class Cycles(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _range.new_Cycles(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _range.delete_Cycles
    __del__ = lambda self : None;
Cycles_swigregister = _range.Cycles_swigregister
Cycles_swigregister(Cycles)
cvar = _range.cvar
MaxTick = cvar.MaxTick


def romMicroPC(*args):
  return _range.romMicroPC(*args)
romMicroPC = _range.romMicroPC

def normalMicroPC(*args):
  return _range.normalMicroPC(*args)
normalMicroPC = _range.normalMicroPC

def isRomMicroPC(*args):
  return _range.isRomMicroPC(*args)
isRomMicroPC = _range.isRomMicroPC
class AddrRange(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        this = _range.new_AddrRange(*args)
        try: self.this.append(this)
        except: self.this = this
    def interleaved(self): return _range.AddrRange_interleaved(self)
    def granularity(self): return _range.AddrRange_granularity(self)
    def stripes(self): return _range.AddrRange_stripes(self)
    def size(self): return _range.AddrRange_size(self)
    def valid(self): return _range.AddrRange_valid(self)
    def start(self): return _range.AddrRange_start(self)
    def to_string(self): return _range.AddrRange_to_string(self)
    def mergesWith(self, *args): return _range.AddrRange_mergesWith(self, *args)
    def intersects(self, *args): return _range.AddrRange_intersects(self, *args)
    def isSubset(self, *args): return _range.AddrRange_isSubset(self, *args)
    def contains(self, *args): return _range.AddrRange_contains(self, *args)
    __swig_destroy__ = _range.delete_AddrRange
    __del__ = lambda self : None;
AddrRange_swigregister = _range.AddrRange_swigregister
AddrRange_swigregister(AddrRange)
MicroPCRomBit = cvar.MicroPCRomBit
MaxAddr = cvar.MaxAddr
InvalidThreadID = cvar.InvalidThreadID
InvalidPortID = cvar.InvalidPortID


def RangeEx(*args):
  return _range.RangeEx(*args)
RangeEx = _range.RangeEx

def RangeIn(*args):
  return _range.RangeIn(*args)
RangeIn = _range.RangeIn

def RangeSize(*args):
  return _range.RangeSize(*args)
RangeSize = _range.RangeSize


