/* GPLv3 License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the GPLv3 License.
#
# */
#ifndef GET_NAME_FUNCTION_HPP
#define GET_NAME_FUNCTION_HPP

#include "../Scrift.hpp"

class FGetUsername {
public:
    virtual func InitUsername();
    virtual func GetUsername();
    virtual func InitHostname();
};


class FStructure : public FGetUsername {
public:
    FStructure();
    ~FStructure();
    virtual func Terminal();
    virtual func FuncKill();
};
#endif // GET_NAME_FUNCTION_HPP