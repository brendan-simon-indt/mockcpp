/***
   mockcpp is a C/C++ mock framework.
   Copyright [2008] [Darwin Yuan <darwin.yuan@gmail.com>]

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
***/

#include <mockcpp/IgnoreResultHandlerFactory.h>
#include <mockcpp/IgnoreResultHandler.h>
#include <mockcpp/SelfDescribe.h>

MOCKCPP_NS_START

///////////////////////////////////////////////////////////
ResultHandler* IgnoreResultHandlerFactory::create(
            bool isCastable
          , const std::type_info& expectedTypeInfo
          , const std::string& expectedTypeString
          , const SelfDescribe* selfDescriber)
{
   (void)isCastable;
   (void)expectedTypeInfo;
   (void)expectedTypeString;
   (void)selfDescriber;
   return new IgnoreResultHandler();
}

///////////////////////////////////////////////////////////

MOCKCPP_NS_END
