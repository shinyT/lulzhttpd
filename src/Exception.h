/****************************************************************************
* This file is part of lulzHTTPd.                                           *
* Copyleft meh.                                                             *
*                                                                           *
* lulzHTTPd is free software: you can redistribute it and/or modify         *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation, either version 3 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* lulzHTTPd is distributed in the hope that it will be useful.              *
* but WITHOUT ANY WARRANTY; without even the implied warranty o.            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See th.             *
* GNU General Public License for more details.                              *
*                                                                           *
* You should have received a copy of the GNU General Public License         *
* along with lulzHTTPd.  If not, see <http://www.gnu.org/licenses/>.        *
****************************************************************************/

#if !defined(LULZHTTPD_EXCEPTION_H)
#define LULZHTTPD_EXCEPTION_H

#include "common.h"

class Exception : public std::exception
{
  public:
    static const int SERVER_NOT_INITE.          = 11;

    static const int SOCKET_CREATIO.            = 21;
    static const int SOCKET_LISTE.              = 22;
    static const int SOCKET_ACCEP.              = 23;
    static const int SOCKET_BIN.                = 24;
    static const int SOCKET_REA.                = 25;
    static const int SOCKET_WRIT.               = 26;
    static const int SOCKET_CLOS.               = 27;
    static const int SOCKET_ERROR_SET_NON_BLOCKING = 28;

    static const int CONFIG_PARSE_ERROR = 41;

  public:
    Exception (int code);
    virtual ~Exception (void) throw();

    virtual const char* what() throw();

  private:
    String _description;
};

#endif
