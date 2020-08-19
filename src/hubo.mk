


CXXFLAGS=-msse -msse2 -Wall -Wunused-local-typedefs -Wsign-compare -pthread \
		 -std=c++0x \
		 -O2 #-gdwarf-2 #-gstabs+ #-DDEBUGTOKEN -g #-pg #-DDEBUG #-DDEBUGGRAPH

CXXFLAGS += -fPIC -I../..
CXXFLAGS += -DNAMESPACE


LDFLAGS = -rdynamic

CBLASLIB=../lib/libcblas_linux.a \
		 ../lib/libatlas_linux.a

FEATLIB=../lib/libfrontend.a

LDLIBS = -lm -lpthread -ldl


GCC=gcc
CC = g++
CXX = g++
GXX = g++
AR = ar
AS = as
RANLIB = ranlib

ifeq ($(ARM),true)
include ../arm.mk
endif

