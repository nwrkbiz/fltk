// generated by Fast Light User Interface Designer (fluid) version 1.0102

#include "widget_panel.h"

static void cb_(Fl_Tabs* o, void* v) {
  propagate_load((Fl_Group *)o,v);
}

Fl_Input *v_input[4]={(Fl_Input *)0};

Fl_Double_Window* make_widget_panel() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(415, 370);
    w = o;
    w->hotspot(o);
    { Fl_Tabs* o = new Fl_Tabs(10, 10, 395, 315);
      o->callback((Fl_Callback*)cb_);
      o->when(FL_WHEN_NEVER);
      { Fl_Group* o = new Fl_Group(10, 30, 395, 295, "GUI");
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        o->hide();
        { Fl_Group* o = new Fl_Group(95, 40, 301, 280);
          o->callback((Fl_Callback*)propagate_load);
          { Fl_Group* o = new Fl_Group(95, 40, 300, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Input* o = new Fl_Input(95, 40, 195, 20, "Label:");
              o->tooltip("The label text for the widget.");
              o->callback((Fl_Callback*)label_cb);
              o->when(FL_WHEN_CHANGED);
              Fl_Group::current()->resizable(o);
            }
            { Fl_Choice* o = new Fl_Choice(290, 40, 105, 20);
              o->tooltip("The label style for the widget.");
              o->box(FL_THIN_UP_BOX);
              o->down_box(FL_BORDER_BOX);
              o->callback((Fl_Callback*)labeltype_cb);
              o->menu(labeltypemenu);
            }
            o->end();
          }
          { Fl_Group* o = new Fl_Group(95, 65, 300, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Input* o = new Fl_Input(95, 65, 195, 20, "Image:");
              o->tooltip("The active image for the widget.");
              o->callback((Fl_Callback*)image_cb);
              Fl_Group::current()->resizable(o);
            }
            { Fl_Button* o = new Fl_Button(290, 65, 105, 20, "Browse...");
              o->tooltip("Click to choose the active image.");
              o->callback((Fl_Callback*)image_browse_cb);
            }
            o->end();
          }
          { Fl_Group* o = new Fl_Group(95, 90, 300, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Input* o = new Fl_Input(95, 90, 195, 20, "Inactive:");
              o->tooltip("The inactive image for the widget.");
              o->callback((Fl_Callback*)inactive_cb);
              Fl_Group::current()->resizable(o);
            }
            { Fl_Button* o = new Fl_Button(290, 90, 105, 20, "Browse...");
              o->tooltip("Click to choose the inactive image.");
              o->callback((Fl_Callback*)inactive_browse_cb);
            }
            o->end();
          }
          { Fl_Value_Input* o = new Fl_Value_Input(95, 150, 60, 20, "X:");
            o->tooltip("The X position of the widget.");
            o->labelsize(10);
            o->maximum(2048);
            o->step(1);
            o->callback((Fl_Callback*)x_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(155, 150, 60, 20, "Y:");
            o->tooltip("The Y position of the widget.");
            o->labelsize(10);
            o->maximum(2048);
            o->step(1);
            o->callback((Fl_Callback*)y_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(215, 150, 60, 20, "Width:");
            o->tooltip("The width of the widget.");
            o->labelsize(10);
            o->maximum(2048);
            o->step(1);
            o->callback((Fl_Callback*)w_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(275, 150, 60, 20, "Height:");
            o->tooltip("The height of the widget.");
            o->labelsize(10);
            o->maximum(2048);
            o->step(1);
            o->callback((Fl_Callback*)h_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Group* o = new Fl_Group(95, 115, 300, 21, "Alignment:");
            o->callback((Fl_Callback*)propagate_load);
            o->align(FL_ALIGN_LEFT);
            { Fl_Button* o = new Fl_Button(95, 115, 40, 20, "clip");
              o->tooltip("Clip the label to the inside of the widget.");
              o->type(1);
              o->labelsize(8);
              o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_CLIP));
            }
            { Fl_Button* o = new Fl_Button(135, 115, 40, 20, "wrap");
              o->tooltip("Wrap the label text.");
              o->type(1);
              o->labelsize(8);
              o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_WRAP));
            }
            { Fl_Button* o = new Fl_Button(175, 115, 55, 20, "text\nimage");
              o->tooltip("Show the label text over the image.");
              o->type(1);
              o->labelsize(8);
              o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_TEXT_OVER_IMAGE));
            }
            { Fl_Button* o = new Fl_Button(295, 115, 20, 20, "@-1<-");
              o->tooltip("Left-align the label.");
              o->type(1);
              o->labelcolor(8);
              o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_LEFT));
            }
            { Fl_Button* o = new Fl_Button(315, 115, 20, 20, "@-1->");
              o->tooltip("Right-align the label.");
              o->type(1);
              o->labelcolor(8);
              o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_RIGHT));
            }
            { Fl_Button* o = new Fl_Button(335, 115, 20, 20, "@-18");
              o->tooltip("Top-align the label.");
              o->type(1);
              o->labelcolor(8);
              o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_TOP));
            }
            { Fl_Button* o = new Fl_Button(355, 115, 20, 20, "@-12");
              o->tooltip("Bottom-align the label.");
              o->type(1);
              o->labelcolor(8);
              o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_BOTTOM));
            }
            { Fl_Button* o = new Fl_Button(375, 115, 20, 20, "@-3square");
              o->tooltip("Show the label inside the widget.");
              o->type(1);
              o->labelcolor(8);
              o->callback((Fl_Callback*)align_cb, (void*)(FL_ALIGN_INSIDE));
            }
            { Fl_Box* o = new Fl_Box(256, 116, 20, 20);
              Fl_Group::current()->resizable(o);
            }
            o->end();
          }
          { Fl_Box* o = new Fl_Box(95, 150, 0, 20, "Position:");
            o->align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE);
          }
          { Fl_Box* o = new Fl_Box(95, 185, 0, 20, "Values:");
            o->align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(95, 185, 60, 20, "Size:");
            o->tooltip("The size of the slider.");
            o->labelsize(10);
            o->step(0.010101);
            o->callback((Fl_Callback*)slider_size_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(155, 185, 60, 20, "Minimum:");
            o->tooltip("The minimum value of the widget.");
            o->labelsize(10);
            o->callback((Fl_Callback*)min_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(215, 185, 60, 20, "Maximum:");
            o->tooltip("The maximum value of the widget.");
            o->labelsize(10);
            o->value(1);
            o->callback((Fl_Callback*)max_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(275, 185, 60, 20, "Step:");
            o->tooltip("The resolution of the widget value.");
            o->labelsize(10);
            o->callback((Fl_Callback*)step_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Fl_Value_Input* o = new Fl_Value_Input(335, 185, 60, 20, "Value:");
            o->tooltip("The current widget value.");
            o->labelsize(10);
            o->callback((Fl_Callback*)value_cb);
            o->align(FL_ALIGN_TOP_LEFT);
          }
          { Shortcut_Button* o = new Shortcut_Button(95, 210, 300, 20, "Shortcut:");
            o->tooltip("The shortcut key for the widget.");
            o->box(FL_DOWN_BOX);
            o->color(7);
            o->selection_color(7);
            o->labeltype(FL_NORMAL_LABEL);
            o->labelfont(0);
            o->labelsize(14);
            o->labelcolor(56);
            o->callback((Fl_Callback*)shortcut_in_cb);
            o->align(FL_ALIGN_LEFT);
            o->when(FL_WHEN_RELEASE);
          }
          { Fl_Group* o = new Fl_Group(95, 235, 300, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Light_Button* o = new Fl_Light_Button(210, 235, 60, 20, "Border");
              o->tooltip("Add a border around the window.");
              o->selection_color(1);
              o->labelsize(10);
              o->callback((Fl_Callback*)border_cb);
            }
            { Fl_Light_Button* o = new Fl_Light_Button(270, 235, 55, 20, "Modal");
              o->tooltip("Make the window modal.");
              o->selection_color(1);
              o->labelsize(10);
              o->callback((Fl_Callback*)modal_cb);
            }
            { Fl_Light_Button* o = new Fl_Light_Button(325, 235, 70, 20, "Nonmodal");
              o->tooltip("Make the window non-modal.");
              o->selection_color(1);
              o->labelsize(9);
              o->callback((Fl_Callback*)non_modal_cb);
              o->align(132|FL_ALIGN_INSIDE);
            }
            { Fl_Input* o = new Fl_Input(95, 235, 115, 20, "X Class:");
              o->tooltip("The X resource class.");
              o->callback((Fl_Callback*)xclass_cb);
              Fl_Group::current()->resizable(o);
            }
            o->end();
          }
          { Fl_Group* o = new Fl_Group(95, 260, 301, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Light_Button* o = new Fl_Light_Button(95, 260, 70, 20, "Visible");
              o->tooltip("Show the widget.");
              o->selection_color(1);
              o->labelsize(10);
              o->callback((Fl_Callback*)visible_cb);
            }
            { Fl_Light_Button* o = new Fl_Light_Button(165, 260, 70, 20, "Active");
              o->tooltip("Activate the widget.");
              o->selection_color(1);
              o->labelsize(10);
              o->callback((Fl_Callback*)active_cb);
            }
            { Fl_Light_Button* o = new Fl_Light_Button(235, 260, 70, 20, "Resizable");
              o->tooltip("Make the widget resizable.");
              o->selection_color(1);
              o->labelsize(10);
              o->callback((Fl_Callback*)resizable_cb);
              o->when(FL_WHEN_CHANGED);
            }
            { Fl_Light_Button* o = new Fl_Light_Button(305, 260, 70, 20, "Hotspot");
              o->tooltip("Center the window under this widget.");
              o->selection_color(1);
              o->labelsize(10);
              o->callback((Fl_Callback*)hotspot_cb);
              o->when(FL_WHEN_CHANGED);
            }
            { Fl_Box* o = new Fl_Box(376, 260, 20, 20);
              Fl_Group::current()->resizable(o);
            }
            { Fl_Box* o = new Fl_Box(95, 260, 0, 20, "Attributes:");
              o->align(FL_ALIGN_LEFT);
            }
            o->end();
          }
          { Fl_Input* o = new Fl_Input(95, 285, 300, 20, "Tooltip:");
            o->tooltip("The tooltip text for the widget.");
            o->callback((Fl_Callback*)tooltip_cb);
          }
          { Fl_Box* o = new Fl_Box(95, 308, 300, 12);
            Fl_Group::current()->resizable(o);
          }
          o->end();
          Fl_Group::current()->resizable(o);
        }
        o->end();
        Fl_Group::current()->resizable(o);
      }
      { Fl_Group* o = new Fl_Group(10, 30, 395, 295, "Style");
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        o->hide();
        { Fl_Group* o = new Fl_Group(100, 40, 295, 276);
          o->callback((Fl_Callback*)propagate_load);
          { Fl_Group* o = new Fl_Group(100, 40, 295, 95);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Group* o = new Fl_Group(100, 40, 295, 20);
              o->callback((Fl_Callback*)propagate_load);
              { Fl_Choice* o = new Fl_Choice(100, 40, 155, 20, "Label Font:");
                o->tooltip("The style of the label text.");
                o->box(FL_THIN_UP_BOX);
                o->down_box(FL_BORDER_BOX);
                o->callback((Fl_Callback*)labelfont_cb);
                Fl_Group::current()->resizable(o);
                o->menu(fontmenu);
              }
              { Fl_Value_Input* o = new Fl_Value_Input(255, 40, 50, 20);
                o->tooltip("The size of the label text.");
                o->maximum(100);
                o->step(1);
                o->value(14);
                o->callback((Fl_Callback*)labelsize_cb);
              }
              { Fl_Button* o = new Fl_Button(305, 40, 90, 20, "Label Color");
                o->tooltip("The color of the label text.");
                o->labelsize(8);
                o->callback((Fl_Callback*)labelcolor_cb);
              }
              o->end();
            }
            { Fl_Group* o = new Fl_Group(100, 65, 295, 20);
              o->callback((Fl_Callback*)propagate_load);
              { Fl_Choice* o = new Fl_Choice(100, 65, 205, 20, "Box:");
                o->tooltip("The \"up\" box of the widget.");
                o->box(FL_THIN_UP_BOX);
                o->down_box(FL_BORDER_BOX);
                o->callback((Fl_Callback*)box_cb);
                Fl_Group::current()->resizable(o);
                o->menu(boxmenu);
              }
              { Fl_Button* o = new Fl_Button(305, 65, 90, 20, "Color");
                o->tooltip("The background color of the widget.");
                o->labelsize(8);
                o->callback((Fl_Callback*)color_cb);
              }
              o->end();
            }
            { Fl_Group* o = new Fl_Group(100, 90, 295, 20);
              o->callback((Fl_Callback*)propagate_load);
              { Fl_Choice* o = new Fl_Choice(100, 90, 205, 20, "Down Box:");
                o->tooltip("The \"down\" box of the widget.");
                o->box(FL_THIN_UP_BOX);
                o->down_box(FL_BORDER_BOX);
                o->callback((Fl_Callback*)down_box_cb);
                Fl_Group::current()->resizable(o);
                o->menu(boxmenu);
              }
              { Fl_Button* o = new Fl_Button(305, 90, 90, 20, "Select Color");
                o->tooltip("The selection color of the widget.");
                o->labelsize(8);
                o->callback((Fl_Callback*)color2_cb);
              }
              o->end();
            }
            { Fl_Group* o = new Fl_Group(100, 115, 295, 20);
              o->callback((Fl_Callback*)propagate_load);
              { Fl_Choice* o = new Fl_Choice(100, 115, 155, 20, "Text Font:");
                o->tooltip("The value text style.");
                o->box(FL_DOWN_BOX);
                o->down_box(FL_BORDER_BOX);
                o->callback((Fl_Callback*)textfont_cb);
                Fl_Group::current()->resizable(o);
                o->menu(fontmenu);
              }
              { Fl_Value_Input* o = new Fl_Value_Input(255, 115, 50, 20);
                o->tooltip("The value text size.");
                o->maximum(100);
                o->step(1);
                o->value(14);
                o->callback((Fl_Callback*)textsize_cb);
              }
              { Fl_Button* o = new Fl_Button(305, 115, 90, 20, "Text Color");
                o->tooltip("The value text color.");
                o->labelsize(8);
                o->callback((Fl_Callback*)textcolor_cb);
              }
              o->end();
            }
            o->end();
          }
          { Fl_Box* o = new Fl_Box(100, 304, 295, 12);
            Fl_Group::current()->resizable(o);
          }
          o->end();
          Fl_Group::current()->resizable(o);
        }
        o->end();
      }
      { Fl_Group* o = new Fl_Group(10, 30, 395, 295, "C++");
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        { Fl_Group* o = new Fl_Group(100, 40, 295, 132);
          o->callback((Fl_Callback*)propagate_load);
          { Fl_Group* o = new Fl_Group(100, 40, 295, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Input* o = new Fl_Input(100, 40, 160, 20, "Class:");
              o->tooltip("The widget subclass.");
              o->textfont(4);
              o->callback((Fl_Callback*)subclass_cb, (void*)(4));
              Fl_Group::current()->resizable(o);
            }
            { Fl_Choice* o = new Fl_Choice(260, 40, 135, 20);
              o->tooltip("The widget subtype.");
              o->box(FL_THIN_UP_BOX);
              o->down_box(FL_BORDER_BOX);
              o->callback((Fl_Callback*)subtype_cb);
            }
            o->end();
          }
          { Fl_Group* o = new Fl_Group(100, 65, 295, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Input* o = new Fl_Input(100, 65, 230, 20, "Name:");
              o->tooltip("The name of the widget.");
              o->callback((Fl_Callback*)name_cb);
              Fl_Group::current()->resizable(o);
            }
            { Fl_Light_Button* o = new Fl_Light_Button(330, 65, 65, 20, "public");
              o->tooltip("Make the widget publicly accessible.");
              o->selection_color(1);
              o->labelsize(10);
              o->callback((Fl_Callback*)name_public_cb);
              o->when(FL_WHEN_CHANGED);
            }
            o->end();
          }
          { Fl_Input* o = v_input[0] = new Fl_Input(100, 90, 295, 20, "Extra Code:");
            o->tooltip("Extra initialization code for the widget.");
            o->textfont(4);
            o->callback((Fl_Callback*)v_input_cb, (void*)(0));
          }
          { Fl_Input* o = v_input[1] = new Fl_Input(100, 110, 295, 20);
            o->tooltip("Extra initialization code for the widget.");
            o->textfont(4);
            o->callback((Fl_Callback*)v_input_cb, (void*)(1));
          }
          { Fl_Input* o = v_input[2] = new Fl_Input(100, 130, 295, 20);
            o->tooltip("Extra initialization code for the widget.");
            o->textfont(4);
            o->callback((Fl_Callback*)v_input_cb, (void*)(2));
          }
          { Fl_Input* o = v_input[3] = new Fl_Input(100, 150, 295, 20);
            o->tooltip("Extra initialization code for the widget.");
            o->textfont(4);
            o->callback((Fl_Callback*)v_input_cb, (void*)(3));
          }
          o->end();
        }
        { Fl_Group* o = new Fl_Group(100, 175, 295, 90);
          o->box(FL_DOWN_BOX);
          o->callback((Fl_Callback*)propagate_load);
          { Fl_Text_Editor* o = new Fl_Text_Editor(102, 177, 291, 86, "Callback:");
            o->tooltip("The callback function or code for the widget.");
            o->box(FL_NO_BOX);
            o->textfont(4);
            o->callback((Fl_Callback*)callback_cb);
            o->align(FL_ALIGN_LEFT);
            o->when(FL_WHEN_RELEASE_ALWAYS);
            Fl_Group::current()->resizable(o);
            o->buffer(new Fl_Text_Buffer());
            o->textfont(FL_COURIER);
          }
          o->end();
          Fl_Group::current()->resizable(o);
        }
        { Fl_Box* o = new Fl_Box(95, 325, 100, 0, "label");
          o->hide();
          o->deactivate();
        }
        { Fl_Group* o = new Fl_Group(100, 270, 295, 45);
          o->callback((Fl_Callback*)propagate_load);
          { Fl_Group* o = new Fl_Group(100, 270, 295, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Input* o = new Fl_Input(100, 270, 140, 20, "User Data:");
              o->tooltip("The user data to pass into the callback code.");
              o->textfont(4);
              o->callback((Fl_Callback*)user_data_cb);
              Fl_Group::current()->resizable(o);
            }
            { Fl_Choice* o = new Fl_Choice(290, 270, 105, 20, "When:");
              o->tooltip("When to call the callback function.");
              o->box(FL_THIN_UP_BOX);
              o->down_box(FL_BORDER_BOX);
              o->callback((Fl_Callback*)when_cb);
              o->when(FL_WHEN_CHANGED);
              o->menu(whenmenu);
            }
            o->end();
          }
          { Fl_Group* o = new Fl_Group(100, 295, 295, 20);
            o->callback((Fl_Callback*)propagate_load);
            { Fl_Input* o = new Fl_Input(100, 295, 140, 20, "Type:");
              o->tooltip("The type of the user data.");
              o->textfont(4);
              o->callback((Fl_Callback*)user_data_type_cb);
              Fl_Group::current()->resizable(o);
            }
            { Fl_Light_Button* o = new Fl_Light_Button(290, 295, 105, 20, "No Change");
              o->tooltip("Call the callback even if the value has not changed.");
              o->selection_color(1);
              o->labelsize(10);
              o->callback((Fl_Callback*)when_button_cb);
            }
            o->end();
          }
          o->end();
        }
        o->end();
      }
      o->end();
      Fl_Group::current()->resizable(o);
    }
    { Fl_Group* o = new Fl_Group(10, 335, 395, 25);
      { Fl_Button* o = new Fl_Button(50, 335, 100, 25, "No &Overlay");
        o->tooltip("Hide the widget overlay box.");
        o->labelcolor(1);
        o->callback((Fl_Callback*)overlay_cb);
      }
      { Fl_Button* o = new Fl_Button(155, 335, 80, 25, "Revert");
        o->callback((Fl_Callback*)revert_cb);
      }
      { Fl_Button* o = new Fl_Button(325, 335, 80, 25, "Cancel");
        o->callback((Fl_Callback*)cancel_cb);
      }
      { Fl_Return_Button* o = new Fl_Return_Button(240, 335, 80, 25, "OK");
        o->callback((Fl_Callback*)ok_cb);
      }
      { Fl_Box* o = new Fl_Box(12, 335, 12, 25);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    o->end();
  }
  return w;
}
