// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the ENGINELIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// ENGINELIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ENGINELIB_EXPORTS
#define ENGINELIB_API __declspec(dllexport)
#else
#define ENGINELIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class ENGINELIB_API Cenginelib {
public:
	Cenginelib(void);
	// TODO: add your methods here.
};

extern ENGINELIB_API int nenginelib;

ENGINELIB_API int fnenginelib(void);
