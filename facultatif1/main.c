#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(36,76,10);

    repeat(2) {
        move_down();
    } loop;
    repeat(7) {
        move_right();
    } loop;
    draw_computer_ok();

    repeat(38) {
        move_right();
    } loop;
    move_up();
    draw_computer_ko();
    
    display_paper();
    return 0;
}


