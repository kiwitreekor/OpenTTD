/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file road_cmd.h Road related functions. */

#ifndef ROAD_CMD_H
#define ROAD_CMD_H

#include "direction_type.h"
#include "road_type.h"

const byte _road_sloped_sprites[14] = {
	0,  0,  2,  0,
	0,  1,  0,  0,
	3,  0,  0,  0,
	0,  0
};

Foundation GetRoadFoundation(Slope tileh, RoadBits bits);

void DrawRoadDepotSprite(int x, int y, DiagDirection dir, RoadType rt);
void UpdateNearestTownForRoadTiles(bool invalidate);

#endif /* ROAD_CMD_H */
