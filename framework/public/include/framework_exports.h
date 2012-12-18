/**
 *Licensed to the Apache Software Foundation (ASF) under one
 *or more contributor license agreements.  See the NOTICE file
 *distributed with this work for additional information
 *regarding copyright ownership.  The ASF licenses this file
 *to you under the Apache License, Version 2.0 (the
 *"License"); you may not use this file except in compliance
 *with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *Unless required by applicable law or agreed to in writing,
 *software distributed under the License is distributed on an
 *"AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 *specific language governing permissions and limitations
 *under the License.
 */
/*
 * exports.h
 */

#ifndef FRAMEWORK_EXPORTS_H_
#define FRAMEWORK_EXPORTS_H_

/* Cmake will define celix_framework_EXPORTS on Windows when it
configures to build a shared library. If you are going to use
another build system on windows or create the visual studio
projects by hand you need to define celix_framework_EXPORTS when
building a DLL on windows.
*/
// We are using the Visual Studio Compiler and building Shared libraries

#if defined (_WIN32)
	#define  ACTIVATOR_EXPORT __declspec(dllexport)
  #if defined(celix_framework_EXPORTS)
    #define  FRAMEWORK_EXPORT __declspec(dllexport)
  #else
    #define  FRAMEWORK_EXPORT __declspec(dllimport)
  #endif /* framework_EXPORTS */
#else /* defined (_WIN32) */
#define FRAMEWORK_EXPORT __attribute__((visibility("default")))
#define ACTIVATOR_EXPORT __attribute__((visibility("default")))
#endif

#endif /* FRAMEWORK_EXPORTS_H_ */
