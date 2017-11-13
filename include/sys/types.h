#include <inttypes.h>
#include <string>

typedef uint64_t __int64;

typedef struct _WIN32_FIND_DATA {
	unsigned int dwFileAttributes;
	std::string cFileName;
} WIN32_FIND_DATA;

typedef void* HANDLE;
typedef char CHAR;
typedef int HRESULT;
typedef size_t DWORD;
typedef void* HWND;
typedef const char* LPTSTR;
