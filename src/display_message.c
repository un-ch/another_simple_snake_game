#include <ncurses.h>
#include <unistd.h>

#include "display_message.h"
#include "string.h"
#include "screen.h"
#include "color.h"

void
display_message_center(const char *string)
{
	int max_screen_value_y, max_screen_value_x;
	int string_len;

	clear_screen();
	getmaxyx(stdscr, max_screen_value_y, max_screen_value_x);
	string_len = string_length(string);
	move((max_screen_value_y / 2), (max_screen_value_x - string_len - 1) / 2);
	set_color(black_on_white);
	addstr(string);
	refresh();
	sleep(2);
}

void
display_round_number(const int number)
{
	static const char *message = "Round";
	int max_screen_value_y, max_screen_value_x;
	int string_len;

	getmaxyx(stdscr, max_screen_value_y, max_screen_value_x);
	string_len = string_length(message);
	move(max_screen_value_y / 2, (max_screen_value_x - string_len - 1) / 2);
	set_color(black_on_white);
	printw("%s %d", message, number);
	refresh();
	sleep(2);
}
