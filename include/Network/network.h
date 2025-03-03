// Copyright (c) 2019-present Anonymous275.
// BeamMP Launcher code is not in the public domain and is not free software.
// One must be granted explicit permission by the copyright holder in order to modify or distribute any part of the source or binaries.
// Anything else is prohibited. Modified works may not be published and have be upstreamed to the official repository.
///
/// Created by Anonymous275 on 7/18/2020
///


#pragma once
#include <string>
void NetReset();
extern bool Dev;
extern int ping;

[[noreturn]] void CoreNetwork();
extern int ClientID;
extern int LastPort;
extern bool ModLoaded;
extern bool Terminate;
extern int DEFAULT_PORT;
extern uint64_t UDPSock;
extern uint64_t TCPSock;
extern std::string Branch;
extern bool TCPTerminate;
extern std::string LastIP;
extern std::string MStatus;
extern std::string UlStatus;
extern std::string PublicKey;
extern std::string ListOfMods;
int KillSocket(uint64_t Dead);
void UUl(const std::string& R);
void UDPSend(std::string Data);
bool CheckBytes(int32_t Bytes);
void GameSend(std::string Data);
void SendLarge(std::string Data);
std::string TCPRcv(uint64_t Sock);
void SyncResources(uint64_t TCPSock);
std::string GetAddr(const std::string&IP);
void ServerParser(const std::string& Data);
std::string Login(const std::string& fields);
void TCPSend(const std::string&Data,uint64_t Sock);
void TCPClientMain(const std::string& IP,int Port);
void UDPClientMain(const std::string& IP,int Port);
void TCPGameServer(const std::string& IP, int Port);

