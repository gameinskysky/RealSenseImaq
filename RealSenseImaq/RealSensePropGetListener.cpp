/*
Copyright  (c) 2015 Intel Corporation.

The source code, information and material ("Material") contained
herein is owned by Intel Corporation or its suppliers or
licensors, and title to such Material remains with Intel
Corporation or its suppliers or licensors. The Material contains
proprietary information of Intel or its suppliers and licensors.
The Material is protected by worldwide copyright laws and treaty
provisions. No part of the Material may be used, copied,
reproduced, modified, published, uploaded, posted, transmitted,
distributed or disclosed in any way without Intel's prior express
written permission. No license under any patent, copyright or
other intellectual property rights in the Material is granted to
or conferred upon you, either expressly, by implication,
inducement, estoppel or otherwise. Any license under such
intellectual property rights must be express and approved by
Intel in writing.

Unless otherwise agreed by Intel in writing, you may not remove
or alter this notice or any other notice embedded in Materials by
Intel or Intel's suppliers or licensors in any way.

*/
#include "RealSensePropGetListener.h"
#include "pxcsensemanager.h"
#include <string.h>
#include <assert.h>

void RealsensePropGetListener::getValue(imaqkit::IPropInfo* propertyInfo, void* value)
{
	const char* propname = propertyInfo->getPropertyName();

	PXCSenseManager *psm = 0;
	psm = PXCSenseManager::CreateInstance();
	psm->EnableStream(PXCCapture::STREAM_TYPE_COLOR, 640, 480);
	psm->Init();
	if (strcmp(propname, "color_brightness") == 0)
	{
		PXCCapture::Sample *sample = psm->QuerySample();
		PXCCapture::Device *device = psm->QueryCaptureManager()->QueryDevice();
		pxcI32 brightness = device->QueryColorBrightness();
		*(reinterpret_cast<int*>(value)) = brightness;
	}
	else
	{
		assert(false && "Unhandled property . Need to add this new property.");
	}
	psm->Release();



}