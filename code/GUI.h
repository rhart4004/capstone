//GUI.h
// Functions to manage the GUI including screen and buttons

void * fit_to_screen(void * full_gui, int scroll_index);
void * build_gui(void * puzzle_data);
void scrolldown(int &scroll_index);
void scrollup(int &scroll_index);
int print_screen(void * screen_data);
int advance_outputs(void * puzzle);

