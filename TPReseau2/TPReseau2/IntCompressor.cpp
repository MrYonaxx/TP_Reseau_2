#include "IntCompressor.h"

namespace uqac::serializer
{
	
	void IntCompressor::Compressor(Serializer s, int val)
	{

            maxRange = max - min;
            
            if (maxRange <= 255) {
                uint8_t newval = val + maxRange;
                s.Serialize(newval);
            }
            else if( 255 < maxRange <= 65535) {
                uint16_t newval = val + maxRange;
                s.Serialize(newval);
            }
            else if (65535 < maxRange <= 4294967295) {
                uint32_t newval = val + maxRange;
                s.Serialize(newval);
            }
            
	}

    int IntCompressor::UnCompressor(int val)
    {
        maxRange = max - min;
        return val - maxRange;
        
    }

}
