/*****************************/
/*** Net Message Constants ***/
/*****************************/


// This header file defines the constants for communication between the server and client.
// The 0 was deliberately left blank so that it can be used later as an error flag if necessary.

// 'connection-less' message types from the client to the server
const char CS0_NoOperation         =1;
const char CS0_Ping                =2;
const char CS0_Connect             =3;
const char CS0_Info                =4;
const char CS0_RemoteConsoleCommand=5;  ///< A message consisting of a password and a command string that is to be executed by the server console interpreter.

// 'connection-less' message types from the server to the client
const char SC0_ACK           =1;
const char SC0_NACK          =2;
const char SC0_RccReply      =3;        ///< String reply to a CS0_RemoteConsoleCommand message.

// 'connection-established' message types from client to server
const char CS1_PlayerCommand =1;
const char CS1_Disconnect    =2;
const char CS1_SayToAll      =3;
const char CS1_WorldInfoACK  =4;
const char CS1_FrameInfoACK  =5;

// 'connection-established' message types from the server to the client
const char SC1_WorldInfo     =1;
const char SC1_EntityBaseLine=2;
const char SC1_FrameInfo     =3;
const char SC1_EntityUpdate  =4;
const char SC1_EntityRemove  =5;    ///< A special case of the SC1_EntityUpdate message: No data follows, remove the entity from the frame instead.
const char SC1_DropClient    =6;
const char SC1_ChatMsg       =7;
