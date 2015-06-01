/*
* Copyright (C) 2011 The Android Open Source Project
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef __TCP_STREAM_H
#define __TCP_STREAM_H

#include "SocketStream.h"

class TcpStream : public SocketStream {
public:
    explicit TcpStream(size_t bufsize = 10000);
    virtual int listen(char addrstr[MAX_ADDRSTR_LEN]);
    virtual SocketStream *accept();
    virtual int connect(const char* addr);
    int connect(const char* hostname, unsigned short port);
private:
    TcpStream(int sock, size_t bufSize);
};

#endif
