
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DRM_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DRM_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifdef DRM_EXPORTS
#define DRM_API __declspec(dllexport)
#else
#define DRM_API __declspec(dllimport)
#endif

// This class is exported from the drm.dll
class DRM_API CDrm {
public:
	CDrm(void);
	// TODO: add your methods here.
	void CDrm::sign(char *dat);
	int CDrm::check(char *dat);
};

extern DRM_API int nDrm;

DRM_API int fnDrm(void);

