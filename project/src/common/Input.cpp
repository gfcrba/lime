#include <Input.h>


namespace lime
{

#if !defined(IPHONE) && !defined(WEBOS) && !defined(ANDROID) && !defined(BLACKBERRY)
bool GetAcceleration(double &outX, double &outY, double &outZ)
{
   return false;
}
#endif


}


