#include "vxworks.h"
#include "devicenet.h"

int usrAppStartProc(void)
{
    struct CAN_RPACKET rcvePacket;
    while
    {
        CanRcvMsg(0,rcvePacket);
        CanRcvMsg(1,rcvePacket);
        CanRcvMsg(2,rcvePacket);
        CanRcvMsg(3,rcvePacket);
    }
}
int usrAppConfig(void)
{   
    CanInit(3,4);
    printf("ok!\n");
}

11111111111111

