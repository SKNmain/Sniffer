#pragma once
#include "Types.h"
namespace qsn
{
   struct EthernetHeader
   {
      MacAddr dest;
      MacAddr source;
      uint16_t ethernetType;
   };


}