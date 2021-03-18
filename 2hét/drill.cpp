#include "Simple_window.h"
#include "Graph.h"

int main()
{
	Point tl {100,100};
	Simple_window win {tl, 600, 400, "Canvas"};

	//Function sine {sin,0,100,Point{20,150},1000,50,50};
	//sine.set_color(Color::blue);

	/*Polygon poly;
	poly.add(Point{500,213});
	poly.add(Point{400,150});
	poly.add(Point{600,300});
	poly.set_color(Color::red);
	poly.set_style(Line_style::dash);*/
	
	Axis xa (Axis::x, Point{0,200}, 600, 10, "x axis");
	Axis ya (Axis::y, Point{300,400}, 400, 10, "y axis");
	
	win.attach(xa);
	win.attach(ya);
	//win.attach(sine);
	//win.attach(poly);

	Circle c { Point{100,200},50};
	Ellipse e {Point{100,200},75,25};
	Mark m{Point {100,200}, 'x'};

	ostringstream oss;
	oss<<"screen size:" <<x_max()<<"*"<<y_max() <<"; window size:"<<win.x_max()<<"*"<<win.y_max();
	Text sizes {Point{100,20},oss.str()};

	win.attach(c);
	win.attach(e);
	win.attach(m);
	win.attach(sizes);
	
	//ya.set_color(Color::cyan);
	//ya.label.set_color(Color::dark_yellow);
	//Rectangle r {Point{200,200}, 100, 50};

	/*Text t{Point{225,20}, "Hello, graphical world!"};
	t.set_font(Font::times_bold);
	t.set_font_size(20);*/

	//Image ii {Point(100,50), "badge.jpg"};

	/*Closed_polyline poly_rect;
	poly_rect.add(Point{100,50});
	poly_rect.add(Point{200,50});
	poly_rect.add(Point{200,100});
	poly_rect.add(Point{100,100});
	poly_rect.add (Point{50,75});/*

	/*r.set_fill_color(Color::yellow);
	r.set_style (Line_style(Line_style::dash,4));
	poly.set_style (Line_style(Line_style::dash,4));
	poly_rect.set_style(Line_style(Line_style::dash,2));
	poly_rect.set_fill_color(Color::green);*/

	//win.attach(r);
	//win.attach(poly_rect);
	//win.attach(t);
	//win.attach(ii);

	win.set_label("Canvas");
	win.wait_for_button();
}