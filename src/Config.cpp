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

#include "Config.h"

namespace lulzHTTPd {

bool Config::_inited;
String Config::_t_log;

void
Config::init (String& configFile) throw()
{
    if (!_inited) {
        _inited = true;

/*        if (Config::test(configFile)) {
.        Config::load(Parser::load(configFile));
        }
        else {
.        throw Exception(Exception::CONFIG_PARSE_ERROR);
        }
*/    }
}

void
Config::load (DOM::Document* config)
{
    
}

bool
Config::test (String& configFile)
{
    return false;
}

String
Config::testLog (void)
{
    return _t_log;
}

};

