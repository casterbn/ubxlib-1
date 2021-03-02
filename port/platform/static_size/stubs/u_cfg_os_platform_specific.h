/*
 * Copyright 2020 u-blox Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _U_CFG_OS_PLATFORM_SPECIFIC_H_
#define _U_CFG_OS_PLATFORM_SPECIFIC_H_

/* No #includes allowed here */

/** @file
 * @brief This header file contains dummy OS configuration
 * information for Lint.
 */

/* ----------------------------------------------------------------
 * COMPILE-TIME MACROS
 * -------------------------------------------------------------- */

#define U_CFG_OS_CLIB_LEAKS 1
#define U_CFG_OS_PRIORITY_MIN 0
#define U_CFG_OS_PRIORITY_MAX 10
#define U_CFG_OS_APP_TASK_STACK_SIZE_BYTES 1024
#define U_CFG_OS_APP_TASK_PRIORITY (U_CFG_OS_PRIORITY_MIN + 5)
#define U_CFG_OS_YIELD_MS 1

#endif // _U_CFG_OS_PLATFORM_SPECIFIC_H_

// End of file