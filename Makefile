CCX=g++

CXXFLAGS= -g


MYLIBRARIES= -lallegro -lallegro_acodec -lallegro_audio -lallegro_color -lallegro_dialog -lallegro_font -lallegro_image -lallegro_main -lallegro_memfile -lallegro_physfs -lallegro_primitives -lallegro_ttf

OBJS = allegro.o

all: ${OBJS}
	$(CCX) $(CXXFLAGS)  -o allegro ${OBJS} $(MYLIBRARIES)
	rm  *.o
