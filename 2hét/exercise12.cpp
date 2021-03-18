#include "Simple_window.h"
#include "Graph.h"

int main() {
	/*Point tl {100,100};
	Simple_window win {tl, 600, 400, "Csabi"};*/
	
	/*Rectangle r {Point (100, 150),100, 30};
	r.set_color(Color::blue);

	Text t{Point(115, 170), "Howdy!"};

	Polygon rpoly;
	rpoly.add(Point{300, 150});
	rpoly.add(Point{400, 150});
	rpoly.add(Point{400, 200});
	rpoly.add(Point{300, 200});
	rpoly.set_color(Color::red);

	win.attach(r);
	win.attach(rpoly);
	win.attach(t);*/

	//3. feladat 
	/*Polygon gpoly;
	gpoly.add(Point{250,111});
	gpoly.add(Point{260,111});
	gpoly.add(Point{260,140});
	gpoly.add(Point{290,140});
	gpoly.add(Point{290,111});
	gpoly.add(Point{300,111});
	gpoly.add(Point{300,190});
	gpoly.add(Point{290,190});
	gpoly.add(Point{290,160});
	gpoly.add(Point{260,160});
	gpoly.add(Point{260,190});
	gpoly.add(Point{250,190});
	gpoly.set_color(Color::red);
	

	Polygon hpoly;
	hpoly.add(Point{90,111});
	hpoly.add(Point{40,111});
	hpoly.add(Point{15,145});
	hpoly.add(Point{15,175});
	hpoly.add(Point{40,190});
	hpoly.add(Point{90,190});
	hpoly.add(Point{90,160});
	hpoly.add(Point{40,160});
	hpoly.add(Point{40,175});
	hpoly.add(Point{85,175});
	hpoly.add(Point{85,185});
	hpoly.add(Point{40,185});
	hpoly.add(Point{20,170});
	hpoly.add(Point{20,150});
	hpoly.add(Point{45,116});
	hpoly.add(Point{90,116});
	hpoly.set_color(Color::blue);
	gpoly.set_style(Line_style(Line_style::solid,5));
	hpoly.set_style(Line_style(Line_style::solid,5));
	
	win.attach(gpoly);
	win.attach(hpoly);*/
	
	//4. feladat
	
	/*Rectangle s1 {Point{100,100}, 40,40};
	Rectangle s2 {Point{140,100}, 40,40};
	Rectangle s3 {Point{180,100}, 40,40};
	Rectangle s4 {Point{100,140}, 40,40};
	Rectangle s5 {Point{140,140}, 40,40};
	Rectangle s6 {Point{180,140}, 40,40};
	Rectangle s7 {Point{100,180}, 40,40};
	Rectangle s8 {Point{140,180}, 40,40};
	Rectangle s9 {Point{180,180}, 40,40};

	s1.set_fill_color(Color::white);
	s3.set_fill_color(Color::white);
	s5.set_fill_color(Color::white);
	s7.set_fill_color(Color::white);
	s9.set_fill_color(Color::white);
	s2.set_fill_color(Color::red);
	s6.set_fill_color(Color::red);
	s4.set_fill_color(Color::red);
	s8.set_fill_color(Color::red);


	win.attach (s1);
	win.attach (s2);
	win.attach (s3);
	win.attach (s4);
	win.attach (s5);
	win.attach (s6);
	win.attach (s7);
	win.attach (s8);
	win.attach (s9);*/

	//5. feladat

	/*Simple_window win {Point{0,0}, x_max(), y_max(), "Csabi"};
	int x = 1280*3/4;
	int y = 1024*2/3;
	std::cout<<x<<" "<<y;
	Rectangle r {Point{0,0},x, y};
	r.set_style(Line_style(Line_style::solid,2));
	r.set_color(Color::red);
	win.attach(r);*/

	win.set_label("Csabi");
	win.wait_for_button();
}