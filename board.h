// Copyright 2008  Segher Boessenkool  <segher@kernel.crashing.org>
// Licensed under the terms of the GNU GPL, version 2
// http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt

#ifndef _BOARD_H
#define _BOARD_H

#include "types.h"

struct board {
	int use_centered_coors;	// this is some reg actually, FIXME
	void (*init)(void);
};

extern struct board board_VII, board_WAL;
extern struct board *board;

void board_init(void);

#endif
