	.include "asm/macros.inc"
	.include "global.inc"

	.extern Blackout_DrawMessage

	.text

	thumb_func_start Task_BlackOut
Task_BlackOut: ; 0x0204837C
	push {r3-r7, lr}
	sub sp, #0x18
	add r5, r0, #0x0
	bl TaskManager_GetFieldSystem
	add r6, r0, #0x0
	add r0, r5, #0x0
	bl TaskManager_GetStatePtr
	add r4, r0, #0x0
	ldr r0, [r4, #0x0]
	cmp r0, #0x6
	bhi _02048488
	add r0, r0, r0
	add r0, pc
	ldrh r0, [r0, #0x6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
_020483A2: ; jump table (using 16-bit offset)
	.short _020483B0 - _020483A2 - 2; case 0
	.short _020483E8 - _020483A2 - 2; case 1
	.short _020483F8 - _020483A2 - 2; case 2
	.short _0204840C - _020483A2 - 2; case 3
	.short _02048434 - _020483A2 - 2; case 4
	.short _02048442 - _020483A2 - 2; case 5
	.short _02048482 - _020483A2 - 2; case 6
_020483B0:
	ldr r0, [r6, #0xc]
	bl Save_LocalFieldData_Get
	add r7, r0, #0x0
	bl LocalFieldData_GetBlackoutSpawn
	add r1, sp, #0x4
	str r0, [sp, #0x0]
	bl GetDeathWarpData
	add r0, r7, #0x0
	bl LocalFieldData_GetSpecialSpawnWarpPtr
	add r1, r0, #0x0
	ldr r0, [sp, #0x0]
	bl GetSpecialSpawnWarpData
	add r0, r5, #0x0
	add r1, sp, #0x4
	bl sub_02049160
	add r0, r6, #0x0
	bl sub_020637F0
	ldr r0, [r4, #0x0]
	add r0, r0, #0x1
	str r0, [r4, #0x0]
	b _02048488
_020483E8:
	mov r0, #0x0
	mov r1, #0x14
	bl GF_SndStartFadeOutBGM
	ldr r0, [r4, #0x0]
	add r0, r0, #0x1
	str r0, [r4, #0x0]
	b _02048488
_020483F8:
	bl sub_02005404
	cmp r0, #0x0
	bne _02048488
	bl sub_0204AB0C
	ldr r0, [r4, #0x0]
	add r0, r0, #0x1
	str r0, [r4, #0x0]
	b _02048488
_0204840C:
	mov r0, #0xf
	mvn r0, r0
	mov r1, #0x37
	mov r2, #0x1
	bl SetBlendBrightness
	mov r0, #0xf
	mvn r0, r0
	mov r1, #0x3f
	mov r2, #0x2
	bl SetBlendBrightness
	add r0, r6, #0x0
	add r1, r5, #0x0
	bl Blackout_DrawMessage
	ldr r0, [r4, #0x0]
	add r0, r0, #0x1
	str r0, [r4, #0x0]
	b _02048488
_02048434:
	add r0, r5, #0x0
	bl CallTask_RestoreOverworld
	ldr r0, [r4, #0x0]
	add r0, r0, #0x1
	str r0, [r4, #0x0]
	b _02048488
_02048442:
	mov r0, #0x0
	mov r1, #0x3f
	mov r2, #0x3
	bl SetBlendBrightness
	bl sub_02034E8C
	add r7, r0, #0x0
	ldr r0, [r6, #0xc]
	bl Save_LocalFieldData_Get
	bl LocalFieldData_GetBlackoutSpawn
	cmp r7, r0
	bne _0204846E
	mov r2, #0x0
	ldr r1, _02048490 ; =0x000007E4
	add r0, r5, #0x0
	add r3, r2, #0x0
	bl QueueScript
	b _0204847A
_0204846E:
	mov r2, #0x0
	ldr r1, _02048494 ; =0x000007E5
	add r0, r5, #0x0
	add r3, r2, #0x0
	bl QueueScript
_0204847A:
	ldr r0, [r4, #0x0]
	add r0, r0, #0x1
	str r0, [r4, #0x0]
	b _02048488
_02048482:
	add sp, #0x18
	mov r0, #0x1
	pop {r3-r7, pc}
_02048488:
	mov r0, #0x0
	add sp, #0x18
	pop {r3-r7, pc}
	nop
_02048490: .word 0x000007E4
_02048494: .word 0x000007E5

	thumb_func_start CallTask_BlackOut
CallTask_BlackOut: ; 0x02048498
	ldr r3, _020484A0 ; =TaskManager_Call
	ldr r1, _020484A4 ; =Task_BlackOut
	mov r2, #0x0
	bx r3
	.balign 4
_020484A0: .word TaskManager_Call
_020484A4: .word Task_BlackOut
