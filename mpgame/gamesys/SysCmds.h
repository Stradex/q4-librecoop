
#ifndef __SYS_CMDS_H__
#define __SYS_CMDS_H__

enum {
	COOP_CMD_ADDCHECKPOINT,
	COOP_CMD_GOTOCHECKPOINT,
	COOP_CMD_GLOBALCHECKPOINT
};

void D_DrawDebugLines( void );

void KillEntities( const idCmdArgs &args, const idTypeInfo &superClass );

void GiveStuffToPlayer( idPlayer* player, const char* name, const char* value );

#endif /* !__SYS_CMDS_H__ */
