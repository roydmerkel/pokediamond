#include "SND_alarm.h"
#include "nitro/types.h"
#include "code32.h"

struct AlarmCallback {
    SNDAlarmCallback cb;
    void *data;
    u8 id;
    u8 padding[3];
};

static struct AlarmCallback sCallbackTable[SND_ALARM_COUNT];

void SND_AlarmInit(void) {
    for (s32 i = 0; i < SND_ALARM_COUNT; i++) {
        sCallbackTable[i].cb = NULL;
        sCallbackTable[i].data = NULL;
        sCallbackTable[i].id = 0;
    }
}

void SNDi_IncAlarmId(u32 idx) {
    struct AlarmCallback *ac = &sCallbackTable[idx];
    ac->id++;
}

u8 SNDi_SetAlarmHandler(u32 idx, SNDAlarmCallback cb, void *data) {
    struct AlarmCallback *ac = &sCallbackTable[idx];
    ac->cb = cb;
    ac->data = data;
    ac->id++;
    return ac->id;
}

void SNDi_CallAlarmHandler(s32 idx) {
    struct AlarmCallback *ac = &sCallbackTable[idx & 0xFF];
    if (((idx >> 8) & 0xFF) != ac->id)
        return;
    if (ac->cb == NULL)
        return;
    ac->cb(ac->data);
}
