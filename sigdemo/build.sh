#!/bin/sh
cc65 -t none --cpu 6502 sigdemo.c
ca65 sigdemo.s
ld65 -o boot.rom -C symon.cfg -m kern.map -vm crt0.o sigdemo.o symon.lib

