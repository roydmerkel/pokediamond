#include "global.h"
#include "unk_020222E8.h"
#include "mmap.h"

THUMB_FUNC void * FUN_020222E8()
{
    return (void *)HW_BG_PLTT;
}

THUMB_FUNC u32 FUN_020222F0()
{
    return HW_BG_PLTT_SIZE;
}

THUMB_FUNC void * FUN_020222F8()
{
    return (void *)HW_DB_BG_PLTT;
}

THUMB_FUNC u32 FUN_02022300()
{
    return HW_DB_BG_PLTT_SIZE;
}

THUMB_FUNC void * FUN_02022308()
{
    return (void *)HW_OBJ_PLTT;
}

THUMB_FUNC void * FUN_02022310()
{
    return (void *)HW_DB_OBJ_PLTT;
}

