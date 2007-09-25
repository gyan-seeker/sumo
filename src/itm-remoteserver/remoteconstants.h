/****************************************************************************/
/// @file    remoteconstants.h
/// @author  Axel Wegener <wegener@itm.uni-luebeck.de>
/// @author  Thimor Bohn <bohn@itm.uni-luebeck.de>
/// @date    2007/09/17
///
/// holds codes used for mobility protocol
/****************************************************************************/
// SUMO, Simulation of Urban MObility; see http://sumo.sourceforge.net/
// copyright : (C) 2001-2007
//  by DLR (http://www.dlr.de/) and ZAIK (http://www.zaik.uni-koeln.de/AFS)
/****************************************************************************/
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
/****************************************************************************/
#ifndef MOBILITYINTERFACECONSTANTS_H
#define MOBILITYINTERFACECONSTANTS_H


// ****************************************
// COMMANDS
// ****************************************

// command: simulation step
#define CMD_SIMSTEP 0x01

// command: set maximum speed
#define CMD_SETMAXSPEED 0x11

// command: change target
#define CMD_CHANGETARGET 0x12

// command: move node
#define CMD_MOVENODE 0x80

// command: close sumo
#define CMD_CLOSE   0x7F


// ****************************************
// POSITION REPRESENTATIONS
// ****************************************

// Omit position
#define POSITION_NONE    0x00
// 2D cartesian coordinates
#define POSITION_2D      0x01
// 2.5D cartesian coordinates
#define POSITION_2_5D    0x02
// 3D cartesian coordinates
#define POSITION_3D      0x03
// Position on road map
#define POSITION_ROADMAP 0x04


// ****************************************
// RESULT TYPES
// ****************************************

// result type: Ok
#define RTYPE_OK    0x00
// result type: not implemented
#define RTYPE_NOTIMPLEMENTED  0x01
// result type: error
#define RTYPE_ERR   0xFF

#endif



