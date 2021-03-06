/* GPLv3 License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the GPLv3 License.
#
# */
#include <Syntax/CommandFunc.h>
#include <Syntax/GetNameFunction.hpp>
#include <pwd.h>
#include <Syntax/Colors.hpp>
FCommand *terminal = new FCommand();

FStructure::FStructure()
{

}

FStructure::~FStructure()
{
    delete terminal;
}

void
FStructure::FuncKill()
{

}
 
void
FGetUsername::InitUsername()
{
    #ifdef __linux__ 
    uid_t uid = geteuid();
    struct passwd *password = getpwuid(uid);
    if(password) {
        printlnf(password->pw_name);
    }
    #else 
    slashn 
    printlnf("Fegeya Fusion Username: 'user'");
    #endif
}

void
FGetUsername::GetUsername()
{
    InitUsername();
}

void 
FGetUsername::InitHostname()
{
    fchar hostname_buffer[256];
    struct hostent *hostname_entry;
    integer hostname;
    hostname = gethostname(hostname_buffer, sizeof(hostname_buffer));
    printlnf("%s", hostname_buffer);
}




void
FStructure::Terminal()
{
    fchar* _username = new fchar;
    BOLD_CYAN_COLOR
    InitUsername();
    printlnf("@");
    BOLD_MAGENTA_COLOR
    InitHostname();
    printlnf(":~");
    BOLD_YELLOW_COLOR
    printlnf(terminal->_file_path_cd_function);
    BOLD_RED_COLOR
    printlnf(" $# ");
    BLACK_COLOR
    delete _username;
}
