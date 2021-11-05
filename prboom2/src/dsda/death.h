//
// Copyright(C) 2021 by Ryan Krafnick
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//	DSDA Death
//

#ifndef __DSDA_DEMO__
#define __DSDA_DEMO__

typedef enum {
  death_use_default,
  death_use_nothing,
  death_use_reload,
} death_use_action_t;

void dsda_DeathUse(player_t* player);

#endif