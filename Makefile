#Main Makefile for the SourceCode
BUILD_MAIN ?= src

all: 
	cd ${BUILD_MAIN} && make all

clean: 
	cd ${BUILD_MAIN} && make clean
