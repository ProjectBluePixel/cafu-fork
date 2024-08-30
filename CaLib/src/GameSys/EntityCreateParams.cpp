
#include "EntityCreateParams.hpp"

#include <climits>


using namespace cf::GameSys;


EntityCreateParamsT::EntityCreateParamsT(WorldT& World_)
    : World(World_),
      m_ID(UINT_MAX)
{
}


void EntityCreateParamsT::ForceID(unsigned int ID)
{
    m_ID = ID;
}
