#include "Simple_window.h"
#include "Graph.h"

int main()
{	
	using namespace Graph_lib;
	
	Point tl{100,100};
	Simple_window win{tl, 800, 1000, "My window"};
	
	int x_size = 800;
	int y_size = 800;
	int x_grid = 100;
	int y_grid = 100;

	Lines grid;

	for (int x=x_grid; x<=x_size; x+=x_grid){
		grid.add(Point{x,0}, Point{x,y_size});
	}

	
	for (int y=y_grid; y<=y_size; y+=y_grid)
		grid.add(Point{0,y}, Point{x_size,y});

	win.attach(grid);

	Vector_ref<Rectangle> rects;
    for (int i = 0; i < x_size; i += x_grid) {
        rects.push_back(new Rectangle{Point{i,i}, Point{i+x_grid,i+x_grid}});
        rects[rects.size() - 1].set_color(Color::invisible);
        rects[rects.size() - 1].set_fill_color(Color::red);
        win.attach(rects[rects.size() - 1]);
    }

  
	Image im1 {Point{0,600}, "image.jpg"};
	Image im2 {Point{200,0}, "image.jpg"};
	Image im3 {Point{0,200}, "image.jpg"};

	win.attach(im1);
	win.attach(im2);
	win.attach(im3);
	
	while (true){
		int x = rand() % 8;
		int y = rand() % 8;
		Image im4 {Point{x*100,y*100}, "money.jpg"};
		im4.set_mask(Point{560,500},100,100);
		win.attach(im4);
		win.set_label("jumping picture");
		win.wait_for_button();
	}
}