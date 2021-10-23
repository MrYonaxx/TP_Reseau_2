#include "IntCompressor.h"

namespace uqac::serializer
{
    IntCompressor::IntCompressor(int min, int max)
    {
        this->min = min;
        this->max = max;
        maxRange = 0;
    }

    void IntCompressor::Compressor(Serializer& s, int val)
	{
            maxRange = max - min;
            
            if (maxRange <= 255) {
                uint8_t newval = val - min;
                s.Serialize(newval);
            }
            else if(maxRange <= 65535) {
                uint16_t newval = val - min;
                s.Serialize(newval);
            }
            else if (maxRange <= 4294967295) {
                uint32_t newval = val - min;
                s.Serialize(newval);
            }
            
	}


    int IntCompressor::UnCompressor(Deserializer& s)
    {
        maxRange = max - min;
        int res;
        if (maxRange <= 255) {
            uint8_t a;
            res = (int) s.Read(a) + min;
        }
        else if (maxRange <= 65535) {
            uint16_t b;
            res = (int) s.Read(b) + min;
        }
        else if (maxRange <= 4294967295) {
            uint32_t c;
            res = (int) s.Read(c) + min;
        }

        return res;

    }

}
