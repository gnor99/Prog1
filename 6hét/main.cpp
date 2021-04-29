//g++ main.cpp Graph.cpp Window.cpp GUI.cpp Lines_window.cpp -o drill `fltk-config --ldflags --use-images

#include "Lines_window.h"

int main()
{ 	
	Lines_window win {Point{100,100}, 1600, 900, "Lines"};
    
    return gui_main();
}