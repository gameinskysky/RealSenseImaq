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




#include "mwadaptorimaq.h"
#include "RealSenseAdaptor.h"
#include "RealSenseDeviceFormat.h"
void initializeAdaptor(){
}
void getAvailHW(imaqkit::IHardwareInfo* hardwareInfo){
	// Add the first device as color sensor
	imaqkit::IDeviceInfo* deviceInfo =
		hardwareInfo->createDeviceInfo(1, "F200 color sensor");

	// Create a Device Format object.
	imaqkit::IDeviceFormat* deviceFormat =
		deviceInfo->createDeviceFormat(0, "F200color_640*480");

	RealSenseDeviceFormat* rsColorFormatInfo0 = new RealSenseDeviceFormat();
	rsColorFormatInfo0->setFormatWidth(640);
	rsColorFormatInfo0->setFormatHeight(480);
	rsColorFormatInfo0->setFormatNumBands(3);
	rsColorFormatInfo0->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	// Specifying "true' makes this format the default format.
	deviceFormat->setAdaptorData(rsColorFormatInfo0);
	deviceInfo->addDeviceFormat(deviceFormat, true); //default format

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(1, "F200color_1920*1080");

	RealSenseDeviceFormat* rsColorFormatInfo1 = new RealSenseDeviceFormat();
	rsColorFormatInfo1->setFormatWidth(1920);
	rsColorFormatInfo1->setFormatHeight(1080);
	rsColorFormatInfo1->setFormatNumBands(3);
	rsColorFormatInfo1->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(rsColorFormatInfo1);
	deviceInfo->addDeviceFormat(deviceFormat);

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(2, "F200color_1280*720");

	RealSenseDeviceFormat* rsColorFormatInfo2 = new RealSenseDeviceFormat();
	rsColorFormatInfo2->setFormatWidth(1280);
	rsColorFormatInfo2->setFormatHeight(720);
	rsColorFormatInfo2->setFormatNumBands(3);
	rsColorFormatInfo2->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(rsColorFormatInfo2);
	deviceInfo->addDeviceFormat(deviceFormat);

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(3, "F200color_960*540");

	RealSenseDeviceFormat* rsColorFormatInfo3 = new RealSenseDeviceFormat();
	rsColorFormatInfo3->setFormatWidth(960);
	rsColorFormatInfo3->setFormatHeight(540);
	rsColorFormatInfo3->setFormatNumBands(3);
	rsColorFormatInfo3->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(rsColorFormatInfo3);
	deviceInfo->addDeviceFormat(deviceFormat);

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(4, "F200color_848*480");

	RealSenseDeviceFormat* rsColorFormatInfo4 = new RealSenseDeviceFormat();
	rsColorFormatInfo4->setFormatWidth(848);
	rsColorFormatInfo4->setFormatHeight(480);
	rsColorFormatInfo4->setFormatNumBands(3);
	rsColorFormatInfo4->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(rsColorFormatInfo4);
	deviceInfo->addDeviceFormat(deviceFormat);

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(5, "F200color_640*360");

	RealSenseDeviceFormat* rsColorFormatInfo5 = new RealSenseDeviceFormat();
	rsColorFormatInfo5->setFormatWidth(640);
	rsColorFormatInfo5->setFormatHeight(360);
	rsColorFormatInfo5->setFormatNumBands(3);
	rsColorFormatInfo5->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(rsColorFormatInfo5);
	deviceInfo->addDeviceFormat(deviceFormat);

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(6, "F200color_424*240");

	RealSenseDeviceFormat* rsColorFormatInfo6 = new RealSenseDeviceFormat();
	rsColorFormatInfo6->setFormatWidth(424);
	rsColorFormatInfo6->setFormatHeight(240);
	rsColorFormatInfo6->setFormatNumBands(3);
	rsColorFormatInfo6->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(rsColorFormatInfo6);
	deviceInfo->addDeviceFormat(deviceFormat);

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(7, "F200color_320*240");

	RealSenseDeviceFormat* rsColorFormatInfo7 = new RealSenseDeviceFormat();
	rsColorFormatInfo7->setFormatWidth(320);
	rsColorFormatInfo7->setFormatHeight(240);
	rsColorFormatInfo7->setFormatNumBands(3);
	rsColorFormatInfo7->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(rsColorFormatInfo7);
	deviceInfo->addDeviceFormat(deviceFormat);

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(8, "F200color_320*180");

	RealSenseDeviceFormat* rsColorFormatInfo8 = new RealSenseDeviceFormat();
	rsColorFormatInfo8->setFormatWidth(320);
	rsColorFormatInfo8->setFormatHeight(180);
	rsColorFormatInfo8->setFormatNumBands(3);
	rsColorFormatInfo8->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(rsColorFormatInfo8);
	deviceInfo->addDeviceFormat(deviceFormat);

	hardwareInfo->addDevice(deviceInfo);

	// create the second device as depth sensor
	deviceInfo =
		hardwareInfo->createDeviceInfo(2, "F200 depth sensor");
	deviceFormat =
		deviceInfo->createDeviceFormat(0, "F200depth_640*480");

	RealSenseDeviceFormat* rsDepthFormatInfo0 = new RealSenseDeviceFormat();

	rsDepthFormatInfo0->setFormatWidth(640);
	rsDepthFormatInfo0->setFormatHeight(480);
	rsDepthFormatInfo0->setFormatNumBands(1);
	rsDepthFormatInfo0->setFormatFrameType(imaqkit::frametypes::MONO16);

	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	// Specifying "true' makes this format the default format.
	deviceFormat->setAdaptorData(rsDepthFormatInfo0);
	deviceInfo->addDeviceFormat(deviceFormat, true);

	deviceFormat =
		deviceInfo->createDeviceFormat(1, "F200depth_640*240");
	RealSenseDeviceFormat* rsDepthFormatInfo1 = new RealSenseDeviceFormat();

	rsDepthFormatInfo1->setFormatWidth(640);
	rsDepthFormatInfo1->setFormatHeight(240);
	rsDepthFormatInfo1->setFormatNumBands(1);
	rsDepthFormatInfo1->setFormatFrameType(imaqkit::frametypes::MONO16);

	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	deviceFormat->setAdaptorData(rsDepthFormatInfo1);
	deviceInfo->addDeviceFormat(deviceFormat);


	hardwareInfo->addDevice(deviceInfo);


	// Add the first device as color sensor
	deviceInfo =
		hardwareInfo->createDeviceInfo(3, "R200 color sensor");

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(0, "R200color_640*480");

	RealSenseDeviceFormat* ds4ColorFormatInfo0 = new RealSenseDeviceFormat();
	ds4ColorFormatInfo0->setFormatWidth(640);
	ds4ColorFormatInfo0->setFormatHeight(480);
	ds4ColorFormatInfo0->setFormatNumBands(3);
	ds4ColorFormatInfo0->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	// Specifying "true' makes this format the default format.
	deviceFormat->setAdaptorData(ds4ColorFormatInfo0);
	deviceInfo->addDeviceFormat(deviceFormat, true); //default format

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(1, "R200color_1280*720");

	RealSenseDeviceFormat* ds4ColorFormatInfo1 = new RealSenseDeviceFormat();
	ds4ColorFormatInfo1->setFormatWidth(1280);
	ds4ColorFormatInfo1->setFormatHeight(720);
	ds4ColorFormatInfo1->setFormatNumBands(3);
	ds4ColorFormatInfo1->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(ds4ColorFormatInfo1);
	deviceInfo->addDeviceFormat(deviceFormat);

	// Create a Device Format object.
	deviceFormat =
		deviceInfo->createDeviceFormat(2, "R200color_320*240");

	RealSenseDeviceFormat* ds4ColorFormatInfo2 = new RealSenseDeviceFormat();
	ds4ColorFormatInfo2->setFormatWidth(320);
	ds4ColorFormatInfo2->setFormatHeight(240);
	ds4ColorFormatInfo2->setFormatNumBands(3);
	ds4ColorFormatInfo2->setFormatFrameType(imaqkit::frametypes::RGB24_PACKED);

	deviceFormat->setAdaptorData(ds4ColorFormatInfo2);
	deviceInfo->addDeviceFormat(deviceFormat);
	hardwareInfo->addDevice(deviceInfo);

	// create the second device as depth sensor
	deviceInfo =
		hardwareInfo->createDeviceInfo(4, "R200 depth sensor");
	deviceFormat =
		deviceInfo->createDeviceFormat(0, "R200depth_480*360");

	RealSenseDeviceFormat* ds4DepthFormatInfo0 = new RealSenseDeviceFormat();

	ds4DepthFormatInfo0->setFormatWidth(480);
	ds4DepthFormatInfo0->setFormatHeight(360);
	ds4DepthFormatInfo0->setFormatNumBands(1);
	ds4DepthFormatInfo0->setFormatFrameType(imaqkit::frametypes::MONO16);

	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	// Specifying "true' makes this format the default format.
	deviceFormat->setAdaptorData(ds4DepthFormatInfo0);
	deviceInfo->addDeviceFormat(deviceFormat, true);

	deviceFormat =
		deviceInfo->createDeviceFormat(1, "R200depth_628*468");
	RealSenseDeviceFormat* ds4DepthFormatInfo1 = new RealSenseDeviceFormat();

	ds4DepthFormatInfo1->setFormatWidth(628);
	ds4DepthFormatInfo1->setFormatHeight(468);
	ds4DepthFormatInfo1->setFormatNumBands(1);
	ds4DepthFormatInfo1->setFormatFrameType(imaqkit::frametypes::MONO16);

	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	deviceFormat->setAdaptorData(ds4DepthFormatInfo1);
	deviceInfo->addDeviceFormat(deviceFormat);

	deviceFormat =
		deviceInfo->createDeviceFormat(2, "R200depth_320*240");
	RealSenseDeviceFormat* ds4DepthFormatInfo2 = new RealSenseDeviceFormat();

	ds4DepthFormatInfo2->setFormatWidth(320);
	ds4DepthFormatInfo2->setFormatHeight(240);
	ds4DepthFormatInfo2->setFormatNumBands(1);
	ds4DepthFormatInfo2->setFormatFrameType(imaqkit::frametypes::MONO16);

	// Add the RealSenseDeviceFormat object to the imaqkit::IDeviceFormat object.
	deviceFormat->setAdaptorData(ds4DepthFormatInfo2);
	deviceInfo->addDeviceFormat(deviceFormat);

	hardwareInfo->addDevice(deviceInfo);
}
void getDeviceAttributes(const imaqkit::IDeviceInfo* deviceInfo,
	const char* formatName,
	imaqkit::IPropFactory* devicePropFact,
	imaqkit::IVideoSourceInfo* sourceContainer,
	imaqkit::ITriggerInfo* hwTriggerInfo){

	void* hProp;
	// Create a video source
	int devID = deviceInfo->getDeviceID();
	if (devID == 1) {
		sourceContainer->addAdaptorSource("input1", 1);
		hProp = devicePropFact->createIntProperty("color_brightness", -10000, 10000, 55);
		// Set the property to read-only while running.
		devicePropFact->setPropReadOnly(hProp, imaqkit::propreadonly::WHILE_RUNNING);
		// Add the property to the device-specific property container.
		devicePropFact->addProperty(hProp);
	}
	else if (devID == 2) {
		sourceContainer->addAdaptorSource("input1", 1);
	}
	else if (devID == 3) {
		sourceContainer->addAdaptorSource("input1", 1);
		hProp = devicePropFact->createIntProperty("color_brightness", -10000, 10000, 55);
		// Set the property to read-only while running.
		devicePropFact->setPropReadOnly(hProp, imaqkit::propreadonly::WHILE_RUNNING);
		// Add the property to the device-specific property container.
		devicePropFact->addProperty(hProp);
	}
	else if (devID == 4){
		sourceContainer->addAdaptorSource("input1", 1);
	}

}
imaqkit::IAdaptor* createInstance(imaqkit::IEngine* engine, const
	imaqkit::IDeviceInfo* deviceInfo, const
	char* formatName){
	imaqkit::IAdaptor* adaptor = new
		RealSenseAdaptor(engine, deviceInfo, formatName);;
	return adaptor;
}
void uninitializeAdaptor(){
}