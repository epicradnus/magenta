// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <ddk/device.h>

#define DEV_FLAG_DEAD           0x00000001  // being deleted
#define DEV_FLAG_VERY_DEAD      0x00000002  // safe for ref0 and release()
#define DEV_FLAG_UNBINDABLE     0x00000004  // nobody may bind to this device
#define DEV_FLAG_REMOTE         0x00000008  // device lives in a remote devhost
#define DEV_FLAG_BUSY           0x00000010  // device being created
#define DEV_FLAG_INSTANCE       0x00000020  // this device was created-on-open

mx_status_t device_open(mx_device_t* dev, mx_device_t** out, uint32_t flags);
mx_status_t device_close(mx_device_t* dev);
