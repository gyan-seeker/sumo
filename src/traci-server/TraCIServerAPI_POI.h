/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
// Copyright (C) 2001-2017 German Aerospace Center (DLR) and others.
/****************************************************************************/
//
//   This program and the accompanying materials
//   are made available under the terms of the Eclipse Public License v2.0
//   which accompanies this distribution, and is available at
//   http://www.eclipse.org/legal/epl-v20.html
//
/****************************************************************************/
/// @file    TraCIServerAPI_POI.h
/// @author  Daniel Krajzewicz
/// @author  Michael Behrisch
/// @date    07.05.2009
/// @version $Id$
///
// APIs for getting/setting POI values via TraCI
/****************************************************************************/
#ifndef TraCIServerAPI_POI_h
#define TraCIServerAPI_POI_h


// ===========================================================================
// included modules
// ===========================================================================
#ifdef _MSC_VER
#include <windows_config.h>
#else
#include <config.h>
#endif

#ifndef NO_TRACI

#include "TraCIServer.h"
#include <foreign/tcpip/storage.h>


// ===========================================================================
// class definitions
// ===========================================================================
/**
 * @class TraCIServerAPI_POI
 * @brief APIs for getting/setting POI values via TraCI
 */
class TraCIServerAPI_POI {
public:
    /** @brief Processes a get value command (Command 0xa7: Get PoI Variable)
     *
     * @param[in] server The TraCI-server-instance which schedules this request
     * @param[in] inputStorage The storage to read the command from
     * @param[out] outputStorage The storage to write the result to
     */
    static bool processGet(TraCIServer& server, tcpip::Storage& inputStorage,
                           tcpip::Storage& outputStorage);


    /** @brief Processes a set value command (Command 0xc7: Change PoI State)
     *
     * @param[in] server The TraCI-server-instance which schedules this request
     * @param[in] inputStorage The storage to read the command from
     * @param[out] outputStorage The storage to write the result to
     */
    static bool processSet(TraCIServer& server, tcpip::Storage& inputStorage,
                           tcpip::Storage& outputStorage);


    /** @brief Returns the named PoI's position
     * @param[in] id The id of the searched PoI
     * @param[out] p The position, if the PoI is known
     * @return Whether the PoI is known (and on road)
     */
    static bool getPosition(const std::string& id, Position& p);


private:
    /** @brief Returns the named PoI
     * @param[in] id The id of the searched PoI
     * @return The named PoI, or 0 if it is not known
     */
    static PointOfInterest* getPoI(const std::string& id);


private:
    /// @brief invalidated copy constructor
    TraCIServerAPI_POI(const TraCIServerAPI_POI& s);

    /// @brief invalidated assignment operator
    TraCIServerAPI_POI& operator=(const TraCIServerAPI_POI& s);


};


#endif

#endif

/****************************************************************************/

