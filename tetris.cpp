#include <iostream>
#include <ncurses.h>
#include <ctime>
using namespace std;

int main() {
  cout << "uji coba" << endl;
  initscr();
  clear();
  start_color();
  init_pair(1, COLOR_CYAN, COLOR_BLACK);

  attron(COLOR_PAIR(1));
  mvprintw(5, 6, "main ff aja!");
  attroff(COLOR_PAIR(1));
  
  getch();
  endwin();
return 0;
}
