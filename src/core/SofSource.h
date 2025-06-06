/*
 * Copyright (C) 2015-2023 Intel Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#ifdef HAVE_CHROME_OS
#include <cros-camera/v4l2_device.h>
#else
#include <v4l2_device.h>
#endif

#include <vector>

#include "CameraEvent.h"
#include "iutils/Thread.h"

namespace icamera {

// Event source for SOF event polled from subdevice.
class SofSource : public EventSource {
 public:
    SofSource(int cameraId);
    ~SofSource();
    int init();
    int deinit();
    int configure();
    int start();
    int stop();

 private:
    int initDev();
    int deinitDev();

    class PollThread : public Thread {
        SofSource* mSofSource;

     public:
        PollThread(SofSource* sofSource) : mSofSource(sofSource) {}

        virtual bool threadLoop() {
            int ret = mSofSource->poll();
            return (ret == 0) ? true : false;
        }
    };
    PollThread* mPollThread;
    int mCameraId;
    // VIRTUAL_CHANNEL_S
    V4L2Subdevice* mAggregatorSubDev;
    int mFrameSyncId;
    // VIRTUAL_CHANNEL_E

    V4L2Subdevice* mIsysReceiverSubDev;
    bool mExitPending;
    bool mSofDisabled;

    int poll();
    int mFlushFd[2];  // Flush file descriptor
};

}  // namespace icamera
