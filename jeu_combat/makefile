CC = g++
CFLAGS = -Wall -Wextra -g

INCLUDE_PATH = ./include
TARGET   = jeu_combat
SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin

SOURCES  := $(wildcard $(SRCDIR)/*.cpp)
INCLUDES := $(wildcard $(INCLUDE_PATH)/.hpp)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.cc=$(OBJDIR)/%.o)

all: $(BINDIR)/$(TARGET)
	@echo "Ca marche bro!"

$(BINDIR)/$(TARGET): $(OBJECTS)
	mkdir -p $(BINDIR)
	$(CC) -o $@ $^ $(CFLAGS) $(LDLIBS)

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.cc
	mkdir -p $(OBJDIR)
	$(CC) -o $@ -c $< $(CFLAGS) -I$(INCLUDE_PATH)

clean:
	rm -f $(OBJDIR)/.o
	rm -f $(OBJDIR)/.gcda
	rm -f $(OBJDIR)/*.gcno
	rm -f $(BINDIR)/$(TARGET)
