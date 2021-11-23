// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the PR35_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// PR35_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PR35_EXPORTS
#define PR35_API __declspec(dllexport)
#else
#define PR35_API __declspec(dllimport)
#endif

// This class is exported from the dll
class PR35_API Cpr35 {
public:
	Cpr35(void);
	// TODO: add your methods here.
};

extern PR35_API int npr35;

PR35_API int fnpr35(void);
