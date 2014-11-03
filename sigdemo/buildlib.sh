#!/bin/sh
ca65 crt0.s
ar65 a symon.lib crt0.o

