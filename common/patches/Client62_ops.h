
//list of packets we need to encode on the way out:
E(OP_SendAATable)
E(OP_SendCharInfo)
E(OP_LeadershipExpUpdate)
E(OP_PlayerProfile)
E(OP_NewSpawn)
E(OP_ZoneSpawns)
E(OP_ZoneEntry)
E(OP_ItemPacket)
E(OP_ItemLinkResponse)
E(OP_CharInventory)
E(OP_GuildMemberList)
E(OP_ZoneServerReady)
E(OP_GuildMemberLevelUpdate)
E(OP_ReadBook)
E(OP_Illusion)

//list of packets we need to decode on the way in:
D(OP_SetServerFilter)
D(OP_CharacterCreate)
D(OP_ItemLinkClick)
D(OP_WhoAllRequest)
D(OP_ReadBook)
D(OP_FaceChange)
#undef E
#undef D
