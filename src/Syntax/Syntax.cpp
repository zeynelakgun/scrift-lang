/* GPLv3 License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the GPLv3 License.
#
# */

#include "../../include/src/Syntax/Syntax.h"
#include "../../include/src/File/Path.h"

FSyntax::FSyntax()
{
    _syntax = "";
}

FSyntax::~FSyntax()
{
    delete[] _syntax;   
}

void
FSyntax::FSyntaxFile(const char *syntax)
{



}
/*


class FSyntax {
public:
    FSyntax();
    ~FSyntax();
    virtual void FSyntaxFile(const char *syntax);
private:
    char *_syntax;
};



*/