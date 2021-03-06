// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.



#include "common.h"

#if defined(FEATURE_SVR_GC)

#include "gcenv.h"

#include "gc.h"
#include "gcscan.h"
#include "gchandletableimpl.h"

#define SERVER_GC 1


namespace SVR { 
#include "gcimpl.h"
#include "gcee.cpp"
}

#endif // FEATURE_SVR_GC
