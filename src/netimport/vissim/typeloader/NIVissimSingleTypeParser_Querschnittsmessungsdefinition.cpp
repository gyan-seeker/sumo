/****************************************************************************/
/// @file    NIVissimSingleTypeParser_Querschnittsmessungsdefinition.cpp
/// @author  Daniel Krajzewicz
/// @date    Wed, 18 Dec 2002
/// @version $Id: $
///
//
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
// ===========================================================================
// compiler pragmas
// ===========================================================================
#ifdef _MSC_VER
#pragma warning(disable: 4786)
#endif


// ===========================================================================
// included modules
// ===========================================================================
#ifdef WIN32
#include <windows_config.h>
#else
#include <config.h>
#endif

#include <iostream>
#include <utils/common/TplConvert.h>
#include "../NIVissimLoader.h"
#include "../tempstructs/NIVissimClosures.h"
#include "NIVissimSingleTypeParser_Querschnittsmessungsdefinition.h"

#ifdef _DEBUG
#include <utils/dev/debug_new.h>
#endif // _DEBUG


// ===========================================================================
// used namespaces
// ===========================================================================
using namespace std;


// ===========================================================================
// method definitions
// ===========================================================================
NIVissimSingleTypeParser_Querschnittsmessungsdefinition::NIVissimSingleTypeParser_Querschnittsmessungsdefinition(NIVissimLoader &parent)
        : NIVissimLoader::VissimSingleTypeParser(parent)
{}


NIVissimSingleTypeParser_Querschnittsmessungsdefinition::~NIVissimSingleTypeParser_Querschnittsmessungsdefinition()
{}


bool
NIVissimSingleTypeParser_Querschnittsmessungsdefinition::parse(std::istream &from)
{
    string tag = myRead(from);
    if (tag=="von") {
        while (tag!="fahrzeugklassen"&&tag!="konfdatei") {
            tag = myRead(from);
        }
        tag = myRead(from);
        while (tag!="DATAEND") {
            tag = readEndSecure(from);
        }
        return true;
    }
    tag = myRead(from);
    tag = myRead(from);
    while (tag!="DATAEND") {
        tag = readEndSecure(from);
    }
    return true;
}



/****************************************************************************/

