// drmtest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//class DRM_API CDrm {
//public:
//	CDrm(void);
//	// TODO: add your methods here.
//	void CDrm::sign(char *dat);
//	int CDrm::check(char *dat);
//};
//
//extern DRM_API int nDrm;
//
//DRM_API int fnDrm(void);

int _tmain(int argc, _TCHAR* argv[])
{
	CDrm cdrm;
	char msg[28];

	strcpy(msg,"this is the message");

	cdrm.sign(msg);

	return 0;
}

