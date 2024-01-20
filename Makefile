ifeq ($(OS),Windows_NT)
	include Makefile.win32
else
	include Makefile.linux
endif