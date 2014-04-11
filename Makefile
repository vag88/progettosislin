
CC = $(CROSS_COMPILE) gcc

CFLAGS += -ffreestanding -Os -fno-stack-protector -shared -fPIC -U_FORTIFY_SOURCE
LDFLAGS = -nostdlib -T bare-x86-64.lds



SOURCES =   crt0.S syscall.S vaglib.h vag.c

EXECUTABLE = prova

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE):
	$(CC) $(LDFLAGS) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE)  

.c.o:
	
	$(CC) $< -o $@ $(CFLAGS) $(LDFLAGS) 
clean:
	rm -rf *o $(EXECUTABLE)
