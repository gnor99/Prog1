#include "Lines_window.h"

Lines_window::Lines_window(Point xy, int w, int h, const string& title)
    :Window{xy,w,h,title},
    next_button{Point{x_max()-190,0},120,20,"Next point",
        [](Address, Address pw) {reference_to<Lines_window>(pw).next();}},
    quit_button{Point{x_max()-70,0},70,20,"Quit",
        [](Address,Address pw){reference_to<Lines_window>(pw).quit();}},
    next_x{Point{x_max()-410,0},50,20,"next x:"},
    next_y{Point{x_max()-260,0},50,20,"next y:"},
    xy_out{Point{150,0},100,20,"current (x,y):"},
    color_menu{Point{x_max()-70,40},70,20,Menu::vertical,"Color"},
    color_button{Point{x_max()-140,40}, 140, 45, "Color menu", cb_color_menu},
    line_menu{Point{x_max()-140,40},130,20,Menu::vertical,"Line style"},
    line_button{Point{x_max()-280,40}, 140, 45, "Line menu", cb_line_menu}
    {
        attach(next_button);
        attach(quit_button);
        attach(next_x);
        attach(next_y);
        attach(xy_out);
        xy_out.put("no point");

        color_menu.attach(new Button{Point{0,0},0,0,"red",cb_red});
        color_menu.attach(new Button{Point{0,0},0,0,"blue",cb_blue});
        color_menu.attach(new Button{Point{0,0},0,0,"black",cb_black});

        line_menu.attach(new Button{Point{0,0},0,0,"solid",cb_solid});
        line_menu.attach(new Button{Point{0,0},0,0,"dash",cb_dash});
        line_menu.attach(new Button{Point{0,0},0,0,"dot",cb_dot});
        line_menu.attach(new Button{Point{0,0},0,0,"dashdot",cb_dashdot});
        line_menu.attach(new Button{Point{0,0},0,0,"dashdotdot",cb_dashdotdot});

        attach(color_menu);
        color_menu.hide();
        attach(color_button);

        attach(line_menu);
        line_menu.hide();
        attach(line_button);
        attach(lines);
    }

void Lines_window::quit()
{
    hide();
}


void Lines_window::next()
{
    int x = next_x.get_int();
    int y = next_y.get_int();
    lines.add(Point(x,y));

    ostringstream ss;
    ss<<'('<<x<<','<<y<<')';
    xy_out.put(ss.str());

    redraw();
}