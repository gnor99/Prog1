#include "GUI.h"

using namespace Graph_lib;

struct Lines_window: Window{
	Lines_window(Point xy, int w, int h, const string& title);

	Menu color_menu;
	Menu line_menu;

	Button color_button;
	Button line_button;


	void next();
	void quit();

	static void cb_red(Address, Address pw) {reference_to<Lines_window>(pw).red_pressed();}
	static void cb_blue(Address, Address pw) {reference_to<Lines_window>(pw).blue_pressed();}
	static void cb_black(Address, Address pw){reference_to<Lines_window>(pw).black_pressed();}
	static void cb_color_menu(Address, Address pw){reference_to<Lines_window>(pw).color_menu_pressed();}
	
	static void cb_solid(Address, Address pw) {reference_to<Lines_window>(pw).solid_pressed();}
	static void cb_dash(Address, Address pw) {reference_to<Lines_window>(pw).dash_pressed();}
	static void cb_dot(Address, Address pw) {reference_to<Lines_window>(pw).dot_pressed();}
	static void cb_dashdot(Address, Address pw) {reference_to<Lines_window>(pw).dashdot_pressed();}
	static void cb_dashdotdot(Address, Address pw) {reference_to<Lines_window>(pw).dashdotdot_pressed();}
	static void cb_line_menu(Address, Address pw){reference_to<Lines_window>(pw).line_menu_pressed();}

	static void cb_next(Address, Address);
	static void cb_quit(Address, Address);

private:
	Open_polyline lines;
	Button next_button;
	Button quit_button;
	In_box next_x;
	In_box next_y;
	Out_box xy_out;

	void change (Color c){lines.set_color(c);}

	void change_line (Line_style l){lines.set_style(l);}

	void red_pressed(){change(Color::red);hide_color_menu();}
	void blue_pressed(){change(Color::blue);hide_color_menu();}
	void black_pressed(){change(Color::black);hide_color_menu();}

	void color_menu_pressed(){color_button.hide();line_button.hide();color_menu.show();}
	void hide_color_menu(){color_menu.hide();color_button.show();line_button.show();}


	void solid_pressed(){change_line(Line_style::solid);hide_line_menu();}
	void dash_pressed(){change_line(Line_style::dash);hide_line_menu();}
	void dot_pressed(){change_line(Line_style::dot);hide_line_menu();}
	void dashdot_pressed(){change_line(Line_style::dashdot);hide_line_menu();}
	void dashdotdot_pressed(){change_line(Line_style::dashdotdot);hide_line_menu();}

	void line_menu_pressed(){color_button.hide();line_button.hide();line_menu.show();}
	void hide_line_menu(){line_menu.hide();line_button.show();color_button.show();}


	bool wait_for_button(); 
	
};