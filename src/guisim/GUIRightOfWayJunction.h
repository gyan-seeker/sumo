#ifndef GUIRightOfWayJunction_H
#define GUIRightOfWayJunction_H


/* =========================================================================
 * included modules
 * ======================================================================= */
#include <microsim/MSRightOfWayJunction.h>
#include <utils/geom/Position2DVector.h>
#include <bitset>
#include <vector>
#include <string>


/* =========================================================================
 * class declarations
 * ======================================================================= */
class GUIJunctionWrapper;
class GUIGlObjectStorage;


/* =========================================================================
 * class definitions
 * ======================================================================= */
class GUIRightOfWayJunction
    : public MSRightOfWayJunction
{
public:

    /// Destructor.
    virtual ~GUIRightOfWayJunction();

    /** Use this constructor only. */
    GUIRightOfWayJunction( const std::string &id, double x, double y,
        InLaneCont in, MSJunctionLogic* logic,
        const Position2DVector &myShape);

    GUIJunctionWrapper *buildJunctionWrapper(GUIGlObjectStorage &idStorage);


protected:
    Position2DVector myShape;

private:
    /// Default constructor.
    GUIRightOfWayJunction();

    /// Copy constructor.
    GUIRightOfWayJunction( const GUIRightOfWayJunction& );

    /// Assignment operator.
    GUIRightOfWayJunction& operator=( const GUIRightOfWayJunction& );

};


/**************** DO NOT DECLARE ANYTHING AFTER THE INCLUDE ****************/
//#ifndef DISABLE_INLINE
//#include "GUIRightOfWayJunction.icc"
//#endif

#endif

// Local Variables:
// mode:C++
// End:
