############################################################################
#
#  Program:         SuperLU
#
#  Module:          make.inc
#
#  Purpose:         Top-level Definitions
#
#  Creation date:   October 2, 1995
#
#  Modified:	    February 4, 1997  Version 1.0
#		    November 15, 1997 Version 1.1
#		    September 1, 1999 Version 2.0
#
############################################################################
#
#  The machine (platform) identifier to append to the library names
#
PLAT = _linux

#
#  The name of the libraries to be created/linked to
#
SuperLUroot = /Users/Akash/Desktop/flash-distro/SuperLU_4.3
SUPERLULIB  = $(SuperLUroot)/lib/libsuperlu_4.3.a
BLASDEF     = -DUSE_VENDOR_BLAS
BLASLIB     = /usr/local/lib/libblas.a
TMGLIB      = libtmglib.a
LIBS	    = $(SUPERLULIB) $(BLASLIB)

#
#  The archiver and the flag(s) to use when building archive (library)
#  If your system has no ranlib, set RANLIB = echo.
#
ARCH         = ar
ARCHFLAGS    = cr
RANLIB       = ranlib

CC           = mpicc 
ISA          = -ftz
CFLAGS       = -O3 
NOOPTS       = 
FORTRAN	     = mpif90
FFLAGS       = -O3 -lpthread 
LOADER       = $(CC)
LOADOPTS     = -lpthread 

#
#  C preprocessor defs for compilation for the Fortran interface
#  (-DNoChange, -DAdd_, -DAdd__, or -DUpCase)
#
CDEFS        = -DAdd_
#
# The directory in which Matlab is installed
#
